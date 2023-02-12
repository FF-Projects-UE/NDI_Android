// Copyright Epic Games, Inc. All Rights Reserved.

#include "NDI_AndroidBPLibrary.h"
#include "NDI_Android.h"

// UE Includes
#include "Kismet/KismetRenderingLibrary.h"

THIRD_PARTY_INCLUDES_START
THIRD_PARTY_INCLUDES_END

UNDI_AndroidBPLibrary::UNDI_AndroidBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

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

bool UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UTexture2D* In_Texture2D, float In_FPS)
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
		Out_Code = "InTexture2D is not valid.";
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

bool UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UTextureRenderTarget2D* In_TRT2D, float In_FPS)
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
		Out_Code = "InTexture2D is not valid.";
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

			NDIlib_send_send_video_v2(In_NDI_Sender->NDI_Send_Instance, &In_NDI_Sender->NDI_Video_Frame);
			
			AsyncTask(ENamedThreads::GameThread, []()
				{

				}
			);
		}
	);

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

	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateNdiFound, NDI_Find_Create]()
		{
			UNDI_Android_Found* Object_Sources = NewObject<UNDI_Android_Found>();
			NDIlib_find_instance_t NDI_Find_Instance = NDIlib_find_create_v3(&NDI_Find_Create);
			uint32_t Count = -1;
			
			const NDIlib_source_t* Found_Source = nullptr;
			
			while (NDIlib_find_wait_for_sources(NDI_Find_Instance, 2000))
			{
				Found_Source = NDIlib_find_get_current_sources(NDI_Find_Instance, &Count);
			}

			Object_Sources->NDI_Source_Founds = Found_Source;
			Object_Sources->Source_Count = Count;

			NDIlib_find_destroy(NDI_Find_Instance);

			AsyncTask(ENamedThreads::GameThread, [DelegateNdiFound, Object_Sources]()
				{
					DelegateNdiFound.ExecuteIfBound(true, Object_Sources, "Sucessful");
				}
			);
		}
	);
}

bool UNDI_AndroidBPLibrary::NDI_Android_Receiver_Create(UNDI_Android_Receiver*& Out_Receiver, FString& Out_Code, UPARAM(ref)UNDI_Android_Found*& In_NDI_Found, int32 In_Source_Index, bool bAllowVideoField)
{
	if (IsValid(In_NDI_Found) == false)
	{
		Out_Code = "There is no NDI source to receive.";

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

bool UNDI_AndroidBPLibrary::NDI_Android_Receive_Frames(UTexture2D*& Out_Frame, FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver)
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

	NDIlib_video_frame_v2_t Frame_Received;
	NDIlib_recv_capture_v3(In_NDI_Receiver->Receiver_Instance, &Frame_Received, NULL, nullptr, 1000);

	if (Frame_Received.data_size_in_bytes > 0)
	{
		if (Frame_Received.FourCC == NDIlib_FourCC_video_type_UYVA)
		{
			Out_Code = "UYVA frame type doesn't supported.";

			return false;
		}

		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_UYVY)
		{
			Out_Code = "UYVY frame type doesn't supported.";

			return false;
		}

		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_YV12)
		{
			Out_Code = "YV12 frame type doesn't supported.";

			return false;
		}

		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_BGRA)
		{
			Out_Code = "BGRA Frame successfully received.";
			Out_Frame = UNDI_AndroidBPLibrary::Callback_GenerateFrame(Frame_Received, In_NDI_Receiver->Receiver_Instance, PF_B8G8R8A8);

			return true;
		}

		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_BGRX)
		{
			Out_Code = "BGRX Frame successfully received.";
			Out_Frame = UNDI_AndroidBPLibrary::Callback_GenerateFrame(Frame_Received, In_NDI_Receiver->Receiver_Instance, PF_B8G8R8A8);

			return true;
		}
	}

	else
	{
		Out_Code = "There is no data to receive.";
		NDIlib_recv_free_video_v2(In_NDI_Receiver->Receiver_Instance, &Frame_Received);

		return false;
	}

	return true;
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

bool UNDI_AndroidBPLibrary::NDI_Android_Receive_Audio(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver)
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

	NDIlib_audio_frame_v3_t Audio_Received;
	NDIlib_recv_capture_v3(In_NDI_Receiver->Receiver_Instance, NULL, &Audio_Received, nullptr, 1000);

	if (Audio_Received.data_size_in_bytes > 0)
	{
		if (Audio_Received.FourCC == NDIlib_FourCC_audio_type_FLTP)
		{
			Out_Code = "UYVA frame type doesn't supported.";

			return false;
		}

		else if (Audio_Received.FourCC == NDIlib_FourCC_audio_type_max)
		{
			Out_Code = "UYVY frame type doesn't supported.";

			return false;
		}
	}

	else
	{
		Out_Code = "There is no data to receive.";
		NDIlib_recv_free_audio_v3(In_NDI_Receiver->Receiver_Instance, &Audio_Received);

		return false;
	}

	return true;
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