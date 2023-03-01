// Copyright Epic Games, Inc. All Rights Reserved.

#include "NDI_AndroidBPLibrary.h"
#include "NDI_Android.h"

// UE Includes
#include "Slate/WidgetRenderer.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Kismet/KismetRenderingLibrary.h"	// Texture2D
#include "RHICommandList.h"					// UMediaTexture : FRHICommandListImmediate
#include "RenderingThread.h"				// UMediaTexture : GetImmediateCommandList_ForRenderCommand()

THIRD_PARTY_INCLUDES_START
THIRD_PARTY_INCLUDES_END

UNDI_AndroidBPLibrary::UNDI_AndroidBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UTextureRenderTarget2D* UNDI_AndroidBPLibrary::WidgetToTextureRenderTarget2d(FString& OutCode, UUserWidget* InWidget, FVector2D InDrawSize)
{
	if (IsValid(InWidget) == false)
	{
		OutCode = "Source widget is not valid";
		return nullptr;
	}

	UTextureRenderTarget2D* TextureTarget = FWidgetRenderer::CreateTargetFor(InDrawSize, TextureFilter::TF_Default, false);
	TextureTarget->RenderTargetFormat = RTF_RGBA8;

	FWidgetRenderer* WidgetRenderer = new FWidgetRenderer(true);
	WidgetRenderer->DrawWidget(TextureTarget, InWidget->TakeWidget(), InDrawSize, 0, false);

	if (IsValid(TextureTarget) == true)
	{
		return TextureTarget;
	}

	else
	{
		OutCode = "Unable to create Texture Render Target 2D";
		return nullptr;
	}
}

int32 UNDI_AndroidBPLibrary::NDI_Android_Init(FString& OutCode)
{
	if (NDIlib_is_supported_CPU() == false)
	{
		OutCode = "CPU doesn't support NDI.";
		return -1;
	}
	
	if (!NDIlib_initialize())
	{
		OutCode = "Unable to initialize NDILib.";
		return 0;
	}

	OutCode = "NDIlib successfully initialized.";
	return 1;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Release()
{
	NDIlib_destroy();

	return true;
}

void UNDI_AndroidBPLibrary::NDI_Android_Source_Infos(FString& SourceIP, FString& SourceName, FString& SourceURL, UNDI_Android_Found* In_Found, int32 In_Source_Index)
{
	if (FString(In_Found->NDI_Source_Founds[In_Source_Index].p_ip_address).IsEmpty() == false)
	{
		SourceIP = In_Found->NDI_Source_Founds[In_Source_Index].p_ip_address;
	}

	if (FString(In_Found->NDI_Source_Founds[In_Source_Index].p_ndi_name).IsEmpty() == false)
	{
		SourceName = In_Found->NDI_Source_Founds[In_Source_Index].p_ndi_name;
	}

	if (FString(In_Found->NDI_Source_Founds[In_Source_Index].p_url_address).IsEmpty() == false)
	{
		SourceURL = In_Found->NDI_Source_Founds[In_Source_Index].p_url_address;
	}
}

float UNDI_AndroidBPLibrary::NDI_Android_Send_Rate(int32 FPS)
{
	double Rate_MS_Double = (double)1000 / FPS;
	int32 Rate_MS_Int = FMath::TruncToInt32(Rate_MS_Double);
	float Rate_Sec = Rate_MS_Int / (float)1000;
	
	return Rate_Sec;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Sender_Create(FString& Out_Code, UNDI_Android_Sender*& Out_NDI_Sender, FString In_Name_Stream, int32 In_Port)
{	
	// p_ndi_name doesn't work with std::string(TCHAR_TO_UTF8(*In_Name_Stream));
	std::string Name_Stream = std::string(TCHAR_TO_UTF8(*In_Name_Stream));

	NDIlib_send_create_t Sender_Configs;
	Sender_Configs.p_ndi_name = Name_Stream.c_str();
	Sender_Configs.p_groups = "Public";
	Sender_Configs.clock_video = true;
	Sender_Configs.clock_audio = false;

	UNDI_Android_Sender* NDI_Sender_Object = NewObject<UNDI_Android_Sender>();

	if (IsValid(NDI_Sender_Object) == false)
	{
		Out_Code = "Unable to create sender object. Please try again.";
		return false;
	}

	NDI_Sender_Object->NDI_Send_Instance = NDIlib_send_create(&Sender_Configs);

	if (!NDI_Sender_Object->NDI_Send_Instance)
	{
		Out_Code = "Unable to initialize NDI_Send_Instance.";
		Out_NDI_Sender = nullptr;
		
		return false;
	}

	else
	{
		Out_Code = "NDI_Sender successfully created.";
		Out_NDI_Sender = NDI_Sender_Object;
		
		return true;
	}
}

bool UNDI_AndroidBPLibrary::NDI_Android_Sender_Release(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender)
{
	if (IsValid(In_NDI_Sender) == false)
	{
		Out_Code = "NDI_Sender is not valid.";
		return false;
	}
	
	free(In_NDI_Sender->NDI_Video_Frame.p_data);
	NDIlib_send_destroy(In_NDI_Sender->NDI_Send_Instance);
	In_NDI_Sender = nullptr;

	Out_Code = "NDI_Sender sucessfully released.";

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UTexture2D* In_Texture2D, int32 In_FPS)
{
	if (IsValid(In_NDI_Sender) == false)
	{
		Out_Code = "NDI_Sender is not valid.";
		return false;
	}
	
	if (!In_NDI_Sender->NDI_Send_Instance)
	{
		Out_Code = "NDI_Send_Instance is not valid.";
		return false;
	}

	if (IsValid(In_Texture2D) == false)
	{
		Out_Code = "Texture 2D is not valid.";
		return false;
	}

	NDIlib_FourCC_video_type_e TextureFormat = NDIlib_FourCC_video_type_BGRA;

	switch (In_Texture2D->GetPixelFormat())
	{
	
	case EPixelFormat::PF_B8G8R8A8:
		TextureFormat = NDIlib_FourCC_video_type_BGRA;
		break;

	case EPixelFormat::PF_R8G8B8A8:
		TextureFormat = NDIlib_FourCC_video_type_RGBA;
		break;
	
	default:
		Out_Code = "Texture pixel format is not BGRA or RGBA";
		return false;
		break;
	}

	In_NDI_Sender->NDI_Video_Frame.xres = In_Texture2D->GetSizeX();
	In_NDI_Sender->NDI_Video_Frame.yres = In_Texture2D->GetSizeY();
	In_NDI_Sender->NDI_Video_Frame.FourCC = TextureFormat;
	In_NDI_Sender->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
	In_NDI_Sender->NDI_Video_Frame.frame_rate_N = In_FPS * 1001;
	In_NDI_Sender->NDI_Video_Frame.frame_rate_D = 1001;
	In_NDI_Sender->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(In_Texture2D->GetSizeX()) * static_cast<size_t>(In_Texture2D->GetSizeY()) * 4);

	FTexture2DMipMap& Mip = In_Texture2D->GetPlatformData()->Mips[0];
	void* SourceData = Mip.BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(In_NDI_Sender->NDI_Video_Frame.p_data, SourceData, static_cast<size_t>(In_Texture2D->GetSizeX()) * static_cast<size_t>(In_Texture2D->GetSizeY()) * 4);

	NDIlib_send_send_video_async_v2(In_NDI_Sender->NDI_Send_Instance, &In_NDI_Sender->NDI_Video_Frame);
	Mip.BulkData.Unlock();
	
	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UTextureRenderTarget2D* In_TRT2D, int32 In_FPS)
{
	if (IsValid(In_NDI_Sender) == false)
	{
		Out_Code = "NDI_Sender is not valid.";
		return false;
	}

	if (!In_NDI_Sender->NDI_Send_Instance)
	{
		Out_Code = "NDI_Send_Instance is not valid.";
		return false;
	}

	if (IsValid(In_TRT2D) == false)
	{
		Out_Code = "Texture Render Target 2D is not valid.";
		return false;
	}

	TArray<FColor> Pixels;
	In_TRT2D->GameThread_GetRenderTargetResource()->ReadPixels(Pixels);
	
	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [In_NDI_Sender, In_TRT2D, In_FPS, Pixels]()
		{
			TArray<FColor> NewAlpha;
			for (int32 PixelIndex = 0; PixelIndex < Pixels.Num(); PixelIndex++)
			{
				FColor EachPixel;
				EachPixel.R = Pixels[PixelIndex].R;
				EachPixel.G = Pixels[PixelIndex].G;
				EachPixel.B = Pixels[PixelIndex].B;
				EachPixel.A = 255;

				NewAlpha.Add(EachPixel);
			}

			In_NDI_Sender->NDI_Video_Frame.xres = In_TRT2D->SizeX;
			In_NDI_Sender->NDI_Video_Frame.yres = In_TRT2D->SizeY;
			In_NDI_Sender->NDI_Video_Frame.FourCC = NDIlib_FourCC_video_type_BGRA;
			In_NDI_Sender->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
			In_NDI_Sender->NDI_Video_Frame.frame_rate_N = In_FPS * 1001;
			In_NDI_Sender->NDI_Video_Frame.frame_rate_D = 1001;
			In_NDI_Sender->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(In_TRT2D->SizeX) * static_cast<size_t>(In_TRT2D->SizeY) * 4);

			FMemory::Memcpy(In_NDI_Sender->NDI_Video_Frame.p_data, NewAlpha.GetData(), static_cast<size_t>(In_TRT2D->SizeX) * static_cast<size_t>(In_TRT2D->SizeY) * 4);

			NDIlib_send_send_video_async_v2(In_NDI_Sender->NDI_Send_Instance, &In_NDI_Sender->NDI_Video_Frame);
			
			AsyncTask(ENamedThreads::GameThread, []()
				{

				}
			);
		}
	);

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_MT(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UMediaTexture* In_MT, int32 In_FPS)
{
	if (IsValid(In_NDI_Sender) == false)
	{
		Out_Code = "NDI_Sender is not valid.";
		return false;
	}

	if (!In_NDI_Sender->NDI_Send_Instance)
	{
		Out_Code = "NDI_Send_Instance is not valid.";
		return false;
	}

	if (IsValid(In_MT) == false)
	{
		Out_Code = "Media Texture is not valid.";
		return false;
	}
	
	TArray<FColor> Array_Color;
	ENQUEUE_RENDER_COMMAND(UpdateTextureRegionsData)([In_MT, &Array_Color](FRHICommandListImmediate& CommandList)
		{
			CommandList.ReadSurfaceData(In_MT->GetResource()->GetTextureRHI(), FIntRect(0, 0, In_MT->GetWidth(), In_MT->GetHeight()), Array_Color, FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX));
		}
	);

	FlushRenderingCommands();

	In_NDI_Sender->NDI_Video_Frame.xres = In_MT->GetWidth();
	In_NDI_Sender->NDI_Video_Frame.yres = In_MT->GetHeight();
	In_NDI_Sender->NDI_Video_Frame.FourCC = NDIlib_FourCC_video_type_BGRA;
	In_NDI_Sender->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
	In_NDI_Sender->NDI_Video_Frame.frame_rate_N = In_FPS * 1001;
	In_NDI_Sender->NDI_Video_Frame.frame_rate_D = 1001;
	In_NDI_Sender->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(In_MT->GetWidth()) * static_cast<size_t>(In_MT->GetHeight()) * 4);

	FMemory::Memcpy(In_NDI_Sender->NDI_Video_Frame.p_data, Array_Color.GetData(), static_cast<size_t>(In_MT->GetWidth())* static_cast<size_t>(In_MT->GetHeight()) * 4);

	NDIlib_send_send_video_async_v2(In_NDI_Sender->NDI_Send_Instance, &In_NDI_Sender->NDI_Video_Frame);

	return true;
}

void UNDI_AndroidBPLibrary::NDI_Android_Find(FDelegateNdiFound DelegateNdiFound, FString In_ExtraIps, FString In_Group)
{
	std::string ExtraIps = std::string(TCHAR_TO_UTF8(*In_ExtraIps));
	std::string GroupName = std::string(TCHAR_TO_UTF8(*In_Group));

	NDIlib_find_create_t NDI_Find_Create;
	NDI_Find_Create.show_local_sources = true;
	NDI_Find_Create.p_extra_ips = ExtraIps.c_str();
	NDI_Find_Create.p_groups = GroupName.c_str();

	AsyncTask(ENamedThreads::AnyThread, [DelegateNdiFound, NDI_Find_Create]()
		{
			UNDI_Android_Found* Object_Sources = NewObject<UNDI_Android_Found>();
			NDIlib_find_instance_t NDI_Find_Instance = NDIlib_find_create_v3(&NDI_Find_Create);
			uint32_t Count = -1;
			
			const NDIlib_source_t* Found_Source = nullptr;
			
			while (NDIlib_find_wait_for_sources(NDI_Find_Instance, 1000))
			{
				GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Searching sources.");
				Found_Source = NDIlib_find_get_current_sources(NDI_Find_Instance, &Count);
			}

			if (Count > 0)
			{
				Object_Sources->NDI_Source_Founds = Found_Source;
				Object_Sources->Source_Count = Count;

				NDIlib_find_destroy(NDI_Find_Instance);

				AsyncTask(ENamedThreads::GameThread, [DelegateNdiFound, Object_Sources]()
					{
						DelegateNdiFound.ExecuteIfBound(true, Object_Sources, "Sucessful.");
					}
				);
			}

			else
			{
				NDIlib_find_destroy(NDI_Find_Instance);
				
				AsyncTask(ENamedThreads::GameThread, [DelegateNdiFound, Object_Sources]()
					{
						DelegateNdiFound.ExecuteIfBound(false, Object_Sources, "Finder unable to find any resources.");
					}
				);
			}
		}
	);
}

bool UNDI_AndroidBPLibrary::NDI_Android_Receiver_Create(UNDI_Android_Receiver*& Out_Receiver, FString& Out_Code, UPARAM(ref)UNDI_Android_Found*& In_NDI_Found, int32 In_Source_Index, bool bAllowVideoField)
{
	if (IsValid(In_NDI_Found) == false)
	{
		Out_Code = "NDI Found object is invalid.";

		return false;
	}

	if (In_NDI_Found->Source_Count == 0)
	{
		Out_Code = "Receiver creator unable to find any resources.";

		return false;
	}

	if (!In_NDI_Found->NDI_Source_Founds)
	{
		Out_Code = "Receiver creator unable to find any resources.";
		
		return false;
	}

	if (In_Source_Index == -1)
	{
		Out_Code = "Select a valid source index.";

		return false;
	}

	NDIlib_recv_create_v3_t NDI_Receiver_Settings;
	NDI_Receiver_Settings.allow_video_fields = bAllowVideoField;
	NDI_Receiver_Settings.bandwidth = NDIlib_recv_bandwidth_highest;
	NDI_Receiver_Settings.color_format = NDIlib_recv_color_format_BGRX_BGRA;
	NDI_Receiver_Settings.p_ndi_recv_name = In_NDI_Found->NDI_Source_Founds[In_Source_Index].p_ndi_name;
	NDI_Receiver_Settings.source_to_connect_to = In_NDI_Found->NDI_Source_Founds[In_Source_Index];

	NDIlib_recv_instance_t NDI_Receiver_Inst = NDIlib_recv_create_v4(&NDI_Receiver_Settings);

	if (!NDI_Receiver_Inst)
	{
		Out_Code = "Unable to create receiver.";

		NDIlib_recv_destroy(NDI_Receiver_Inst);
		return false;
	}

	NDIlib_recv_connect(NDI_Receiver_Inst, &In_NDI_Found->NDI_Source_Founds[In_Source_Index]);

	UNDI_Android_Receiver* NDI_Receiver_Obj = NewObject<UNDI_Android_Receiver>();

	if (IsValid(NDI_Receiver_Obj) == false)
	{
		Out_Code = "Unable to create receiver object. Please try again.";
		
		NDIlib_recv_destroy(NDI_Receiver_Inst);
		NDI_Receiver_Inst = nullptr;

		return false;
	}

	NDI_Receiver_Obj->Receiver_Instance = NDI_Receiver_Inst;
	Out_Receiver = NDI_Receiver_Obj;

	Out_Code = "Receiver successfully created.";

	return true;
}

void UNDI_AndroidBPLibrary::NDI_Android_Receiver_Release(UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		return;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		return;
	}

	NDIlib_recv_destroy(In_NDI_Receiver->Receiver_Instance);
	In_NDI_Receiver->Receiver_Instance = nullptr;

	In_NDI_Receiver = nullptr;

	return;
}

void UNDI_AndroidBPLibrary::NDI_Android_Receive_Frames(FNdiVideoReceived DelegateVideoReceived, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver)
{
	AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived, &In_NDI_Receiver]()
		{
			if (IsValid(In_NDI_Receiver) == false)
			{
				AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived]()
					{
						DelegateVideoReceived.Execute(false, nullptr, "NDI Receiver object is not valid.");
						return;
					}
				);
			}

			if (!In_NDI_Receiver->Receiver_Instance)
			{
				AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived]()
					{
						DelegateVideoReceived.Execute(false, nullptr, "NDI Receiver Instance is not valid in NDI_Receiver object.");
						return;
					}
				);
			}

			NDIlib_video_frame_v2_t Frame_Received;
			NDIlib_recv_capture_v3(In_NDI_Receiver->Receiver_Instance, &Frame_Received, NULL, nullptr, 1000);

			if (Frame_Received.data_size_in_bytes > 0)
			{
				if (Frame_Received.FourCC == NDIlib_FourCC_video_type_UYVA)
				{
					AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived]()
						{
							DelegateVideoReceived.Execute(false, nullptr, "UYVA frame type doesn't supported.");
							return;
						}
					);
				}

				else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_UYVY)
				{
					AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived]()
						{
							DelegateVideoReceived.Execute(false, nullptr, "UYVY frame type doesn't supported.");
							return;
						}
					);
				}

				else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_YV12)
				{
					AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived]()
						{
							DelegateVideoReceived.Execute(false, nullptr, "YV12 frame type doesn't supported.");
							return;
						}
					);
				}

				else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_BGRA)
				{
					UTexture2D* Frame = UNDI_AndroidBPLibrary::Callback_GenerateFrame(Frame_Received, In_NDI_Receiver->Receiver_Instance, PF_B8G8R8A8);
					AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived, Frame]()
						{
							DelegateVideoReceived.ExecuteIfBound(true, Frame, "BGRA Frame successfully received.");
							return;
						}
					);
				}

				else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_BGRX)
				{
					UTexture2D* Frame = UNDI_AndroidBPLibrary::Callback_GenerateFrame(Frame_Received, In_NDI_Receiver->Receiver_Instance, PF_B8G8R8A8);
					AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived, Frame]()
						{
							DelegateVideoReceived.ExecuteIfBound(true, Frame, "BGRX Frame successfully received.");
							return;
						}
					);
				}
			}

			else
			{
				NDIlib_recv_free_video_v2(In_NDI_Receiver->Receiver_Instance, &Frame_Received);
				
				AsyncTask(ENamedThreads::GameThread, [DelegateVideoReceived, &In_NDI_Receiver, &Frame_Received]()
					{
						DelegateVideoReceived.Execute(false, nullptr, "There is no \"video\" data to receive.");
						return;
					}
				);
			}
		}
	);
}

UTexture2D* UNDI_AndroidBPLibrary::Callback_GenerateFrame(NDIlib_video_frame_v2_t In_Frame_Received, NDIlib_recv_instance_t In_NDI_Receiver, EPixelFormat PixelFormat)
{
	UTexture2D* Frame_Texture = UTexture2D::CreateTransient(In_Frame_Received.xres, In_Frame_Received.yres, PixelFormat);
	Frame_Texture->SRGB = 0;
	FTexture2DMipMap& Frame_Mip = Frame_Texture->GetPlatformData()->Mips[0];
	void* Frame_Texture_Data = Frame_Mip.BulkData.Lock(LOCK_READ_WRITE);

	FMemory::Memcpy(Frame_Texture_Data, In_Frame_Received.p_data, static_cast<SIZE_T>(In_Frame_Received.line_stride_in_bytes) * In_Frame_Received.yres);
	Frame_Mip.BulkData.Unlock();
	Frame_Texture->UpdateResource();

	NDIlib_recv_free_video_v2(In_NDI_Receiver, &In_Frame_Received);

	return Frame_Texture;
}

void UNDI_AndroidBPLibrary::NDI_Android_Receive_Audio(FNdiAudioReceived DelegateAudioReceived, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver)
{
	AsyncTask(ENamedThreads::AnyHiPriThreadHiPriTask, [DelegateAudioReceived, &In_NDI_Receiver]()
		{
			if (IsValid(In_NDI_Receiver) == false)
			{
				AsyncTask(ENamedThreads::GameThread, [DelegateAudioReceived]()
					{
						FByteArray EmptyArray;
						DelegateAudioReceived.Execute(false, EmptyArray, "NDI Receiver object is not valid.");
						return;
					}
				);
			}

			if (!In_NDI_Receiver->Receiver_Instance)
			{
				AsyncTask(ENamedThreads::GameThread, [DelegateAudioReceived]()
					{
						FByteArray EmptyArray;
						DelegateAudioReceived.Execute(false, EmptyArray, "NDI Receiver Instance is not valid in NDI_Receiver object.");
						return;
					}
				);
			}

			NDIlib_audio_frame_v3_t Audio_Received;
			NDIlib_recv_capture_v3(In_NDI_Receiver->Receiver_Instance, NULL, &Audio_Received, nullptr, 1000);

			if (Audio_Received.data_size_in_bytes > 0)
			{
				if (Audio_Received.FourCC == NDIlib_FourCC_audio_type_FLTP)
				{
					FByteArray Audio_Buffer;
					Audio_Buffer.Array_Bytes.SetNum(Audio_Received.data_size_in_bytes);
					FMemory::Memcpy(Audio_Buffer.Array_Bytes.GetData(), Audio_Received.p_data, Audio_Received.data_size_in_bytes);
					
					AsyncTask(ENamedThreads::GameThread, [DelegateAudioReceived, Audio_Buffer]()
						{
							DelegateAudioReceived.ExecuteIfBound(true, Audio_Buffer, "NDIlib_FourCC_audio_type_FLTP successfully received.");
							return;
						}
					);
				}

				else if (Audio_Received.FourCC == NDIlib_FourCC_audio_type_max)
				{
					FByteArray Audio_Buffer;
					Audio_Buffer.Array_Bytes.SetNum(Audio_Received.data_size_in_bytes);
					FMemory::Memcpy(Audio_Buffer.Array_Bytes.GetData(), Audio_Received.p_data, Audio_Received.data_size_in_bytes);
					
					AsyncTask(ENamedThreads::GameThread, [DelegateAudioReceived, Audio_Buffer]()
						{
							DelegateAudioReceived.ExecuteIfBound(true, Audio_Buffer, "NDIlib_FourCC_audio_type_max successfully received.");
							return;
						}
					);
				}
			}

			else
			{
				NDIlib_recv_free_audio_v3(In_NDI_Receiver->Receiver_Instance, &Audio_Received);
				AsyncTask(ENamedThreads::GameThread, [DelegateAudioReceived]()
					{
						FByteArray EmptyArray;
						DelegateAudioReceived.Execute(false, EmptyArray, "There is no \"audio\" data to receive.");
						return;
					}
				);
			}
		}
	);
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Send(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, ENDI_KVM_Mouse MouseButton)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}

	switch (MouseButton)
	{
	case ENDI_KVM_Mouse::Mouse_Left:
		NDIlib_recv_kvm_send_left_mouse_click(In_NDI_Receiver->Receiver_Instance);
		break;

	case ENDI_KVM_Mouse::Mouse_Middle:
		NDIlib_recv_kvm_send_middle_mouse_click(In_NDI_Receiver->Receiver_Instance);
		break;

	case ENDI_KVM_Mouse::Mouse_Right:
		NDIlib_recv_kvm_send_right_mouse_click(In_NDI_Receiver->Receiver_Instance);
		break;
	}

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Release(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, ENDI_KVM_Mouse MouseButton)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}

	switch (MouseButton)
	{
	case ENDI_KVM_Mouse::Mouse_Left:
		NDIlib_recv_kvm_send_left_mouse_release(In_NDI_Receiver->Receiver_Instance);
		break;

	case ENDI_KVM_Mouse::Mouse_Middle:
		NDIlib_recv_kvm_send_middle_mouse_release(In_NDI_Receiver->Receiver_Instance);
		break;

	case ENDI_KVM_Mouse::Mouse_Right:
		NDIlib_recv_kvm_send_right_mouse_release(In_NDI_Receiver->Receiver_Instance);
		break;
	}

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Position(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, FVector2f In_Mouse_Position)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}
	
	const float* Position[2];
	FMemory::Memset(&Position, 0, 2);

	Position[0] = &In_Mouse_Position.X;
	Position[1] = &In_Mouse_Position.Y;

	NDIlib_recv_kvm_send_mouse_position(In_NDI_Receiver->Receiver_Instance, *Position);

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Wheel_Vertical(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, float MouseWheel)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}
	
	NDIlib_recv_kvm_send_vertical_mouse_wheel(In_NDI_Receiver->Receiver_Instance, MouseWheel);
	
	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Wheel_Horizontal(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, float MouseWheel)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}
	
	NDIlib_recv_kvm_send_horizontal_mouse_wheel(In_NDI_Receiver->Receiver_Instance, MouseWheel);

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Keyboard_Send(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, FString Input)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}

	TMap<FString, int32> MAP_Unicodes;

	// Punctions
	MAP_Unicodes.Add("\n", 10);		// Line Break
	MAP_Unicodes.Add(" ", 32);		// Space
	MAP_Unicodes.Add("!", 33);
	MAP_Unicodes.Add("\"", 34);
	MAP_Unicodes.Add("#", 35);
	MAP_Unicodes.Add("$", 36);
	MAP_Unicodes.Add("%", 37);
	MAP_Unicodes.Add("&", 38);
	MAP_Unicodes.Add("'", 39);
	MAP_Unicodes.Add("(", 40);
	MAP_Unicodes.Add(")", 41);
	MAP_Unicodes.Add("*", 42);
	MAP_Unicodes.Add("+", 43);
	MAP_Unicodes.Add(",", 44);
	MAP_Unicodes.Add("-", 45);
	MAP_Unicodes.Add(".", 46);
	MAP_Unicodes.Add("/", 47);

	// Numbers
	MAP_Unicodes.Add("0", 48);
	MAP_Unicodes.Add("1", 49);
	MAP_Unicodes.Add("2", 50);
	MAP_Unicodes.Add("3", 51);
	MAP_Unicodes.Add("4", 52);
	MAP_Unicodes.Add("5", 53);
	MAP_Unicodes.Add("6", 54);
	MAP_Unicodes.Add("7", 55);
	MAP_Unicodes.Add("8", 56);
	MAP_Unicodes.Add("9", 57);

	// Uppercase
	MAP_Unicodes.Add("A", 65);
	MAP_Unicodes.Add("B", 66);
	MAP_Unicodes.Add("C", 67);
	MAP_Unicodes.Add("D", 68);
	MAP_Unicodes.Add("E", 69);
	MAP_Unicodes.Add("F", 70);
	MAP_Unicodes.Add("G", 71);
	MAP_Unicodes.Add("H", 72);
	MAP_Unicodes.Add("I", 73);
	MAP_Unicodes.Add("J", 74);
	MAP_Unicodes.Add("K", 75);
	MAP_Unicodes.Add("L", 76);
	MAP_Unicodes.Add("M", 77);
	MAP_Unicodes.Add("N", 78);
	MAP_Unicodes.Add("O", 79);
	MAP_Unicodes.Add("P", 80);
	MAP_Unicodes.Add("Q", 81);
	MAP_Unicodes.Add("R", 82);
	MAP_Unicodes.Add("S", 83);
	MAP_Unicodes.Add("T", 84);
	MAP_Unicodes.Add("U", 85);
	MAP_Unicodes.Add("V", 86);
	MAP_Unicodes.Add("W", 87);
	MAP_Unicodes.Add("X", 88);
	MAP_Unicodes.Add("Y", 89);
	MAP_Unicodes.Add("Z", 90);

	// Lowercase
	MAP_Unicodes.Add("a", 97);
	MAP_Unicodes.Add("b", 98);
	MAP_Unicodes.Add("c", 99);
	MAP_Unicodes.Add("d", 100);
	MAP_Unicodes.Add("e", 101);
	MAP_Unicodes.Add("f", 102);
	MAP_Unicodes.Add("g", 103);
	MAP_Unicodes.Add("h", 104);
	MAP_Unicodes.Add("i", 105);
	MAP_Unicodes.Add("j", 106);
	MAP_Unicodes.Add("k", 107);
	MAP_Unicodes.Add("l", 108);
	MAP_Unicodes.Add("m", 109);
	MAP_Unicodes.Add("n", 110);
	MAP_Unicodes.Add("o", 111);
	MAP_Unicodes.Add("p", 112);
	MAP_Unicodes.Add("q", 113);
	MAP_Unicodes.Add("r", 114);
	MAP_Unicodes.Add("s", 115);
	MAP_Unicodes.Add("t", 116);
	MAP_Unicodes.Add("u", 117);
	MAP_Unicodes.Add("v", 118);
	MAP_Unicodes.Add("w", 119);
	MAP_Unicodes.Add("x", 120);
	MAP_Unicodes.Add("y", 121);
	MAP_Unicodes.Add("z", 122);

	NDIlib_recv_kvm_send_keyboard_press(In_NDI_Receiver->Receiver_Instance, *MAP_Unicodes.Find(Input));

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Keyboard_Release(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, FString Input)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}

	TMap<FString, int32> MAP_Unicodes;

	// Punctions
	MAP_Unicodes.Add("\n", 10);		// Line Break
	MAP_Unicodes.Add(" ", 32);		// Space
	MAP_Unicodes.Add("!", 33);
	MAP_Unicodes.Add("\"", 34);
	MAP_Unicodes.Add("#", 35);
	MAP_Unicodes.Add("$", 36);
	MAP_Unicodes.Add("%", 37);
	MAP_Unicodes.Add("&", 38);
	MAP_Unicodes.Add("'", 39);
	MAP_Unicodes.Add("(", 40);
	MAP_Unicodes.Add(")", 41);
	MAP_Unicodes.Add("*", 42);
	MAP_Unicodes.Add("+", 43);
	MAP_Unicodes.Add(",", 44);
	MAP_Unicodes.Add("-", 45);
	MAP_Unicodes.Add(".", 46);
	MAP_Unicodes.Add("/", 47);

	// Numbers
	MAP_Unicodes.Add("0", 48);
	MAP_Unicodes.Add("1", 49);
	MAP_Unicodes.Add("2", 50);
	MAP_Unicodes.Add("3", 51);
	MAP_Unicodes.Add("4", 52);
	MAP_Unicodes.Add("5", 53);
	MAP_Unicodes.Add("6", 54);
	MAP_Unicodes.Add("7", 55);
	MAP_Unicodes.Add("8", 56);
	MAP_Unicodes.Add("9", 57);

	// Uppercase
	MAP_Unicodes.Add("A", 65);
	MAP_Unicodes.Add("B", 66);
	MAP_Unicodes.Add("C", 67);
	MAP_Unicodes.Add("D", 68);
	MAP_Unicodes.Add("E", 69);
	MAP_Unicodes.Add("F", 70);
	MAP_Unicodes.Add("G", 71);
	MAP_Unicodes.Add("H", 72);
	MAP_Unicodes.Add("I", 73);
	MAP_Unicodes.Add("J", 74);
	MAP_Unicodes.Add("K", 75);
	MAP_Unicodes.Add("L", 76);
	MAP_Unicodes.Add("M", 77);
	MAP_Unicodes.Add("N", 78);
	MAP_Unicodes.Add("O", 79);
	MAP_Unicodes.Add("P", 80);
	MAP_Unicodes.Add("Q", 81);
	MAP_Unicodes.Add("R", 82);
	MAP_Unicodes.Add("S", 83);
	MAP_Unicodes.Add("T", 84);
	MAP_Unicodes.Add("U", 85);
	MAP_Unicodes.Add("V", 86);
	MAP_Unicodes.Add("W", 87);
	MAP_Unicodes.Add("X", 88);
	MAP_Unicodes.Add("Y", 89);
	MAP_Unicodes.Add("Z", 90);

	// Lowercase
	MAP_Unicodes.Add("a", 97);
	MAP_Unicodes.Add("b", 98);
	MAP_Unicodes.Add("c", 99);
	MAP_Unicodes.Add("d", 100);
	MAP_Unicodes.Add("e", 101);
	MAP_Unicodes.Add("f", 102);
	MAP_Unicodes.Add("g", 103);
	MAP_Unicodes.Add("h", 104);
	MAP_Unicodes.Add("i", 105);
	MAP_Unicodes.Add("j", 106);
	MAP_Unicodes.Add("k", 107);
	MAP_Unicodes.Add("l", 108);
	MAP_Unicodes.Add("m", 109);
	MAP_Unicodes.Add("n", 110);
	MAP_Unicodes.Add("o", 111);
	MAP_Unicodes.Add("p", 112);
	MAP_Unicodes.Add("q", 113);
	MAP_Unicodes.Add("r", 114);
	MAP_Unicodes.Add("s", 115);
	MAP_Unicodes.Add("t", 116);
	MAP_Unicodes.Add("u", 117);
	MAP_Unicodes.Add("v", 118);
	MAP_Unicodes.Add("w", 119);
	MAP_Unicodes.Add("x", 120);
	MAP_Unicodes.Add("y", 121);
	MAP_Unicodes.Add("z", 122);

	NDIlib_recv_kvm_send_keyboard_release(In_NDI_Receiver->Receiver_Instance, *MAP_Unicodes.Find(Input));

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_KVM_Clipboard_Send(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, FString ClipboardContent)
{
	if (IsValid(In_NDI_Receiver) == false)
	{
		Out_Code = "NDI Receiver object is not valid.";

		return false;
	}

	if (!In_NDI_Receiver->Receiver_Instance)
	{
		Out_Code = "NDIlib_recv_create_v4 is not valid in NDI_Receiver object.";

		return false;
	}

	if (NDIlib_recv_kvm_is_supported(In_NDI_Receiver->Receiver_Instance) == false)
	{
		Out_Code = "KVM is not supported on source.";

		return false;
	}

	NDIlib_recv_kvm_send_clipboard_contents(In_NDI_Receiver->Receiver_Instance, TCHAR_TO_UTF8(*ClipboardContent));
	
	return true;
}