// Copyright Epic Games, Inc. All Rights Reserved.

#include "NDI_AndroidBPLibrary.h"
#include "NDI_Android.h"

// UE Includes
#include "Kismet/KismetRenderingLibrary.h"

THIRD_PARTY_INCLUDES_START
// C++ Includes
#include <stdio.h>
#include <chrono>
#include <assert.h>
THIRD_PARTY_INCLUDES_END

UNDI_AndroidBPLibrary::UNDI_AndroidBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

int32 UNDI_AndroidBPLibrary::NDI_Android_Init(FString& OutCode, UNDI_Android*& Out_NDI_Object)
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

	UNDI_Android* NDI_Object = NewObject<UNDI_Android>();
	NDI_Object->bIsLibraryInitialized = true;

	Out_NDI_Object = NDI_Object;

	OutCode = "NDIlib successfully initialized.";
	return 1;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Release(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object)
{
	if (IsValid(NDI_Object) == false)
	{
		OutCode = "NDI_Object is not valid.";
		return false;
	}

	if (NDI_Object->bIsLibraryInitialized == true)
	{
		NDIlib_destroy();
		NDI_Object->bIsLibraryInitialized = false;
		NDI_Object = nullptr;

		OutCode = "NDIlib sucessfully released.";
	}

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Sender_Create(FString& OutCode, UNDI_Android_Sender*& Out_NDI_Sender, UPARAM(ref)UNDI_Android*& NDI_Object, FString In_Name_Stream)
{
	if (IsValid(NDI_Object) == false)
	{
		OutCode = "NDI_Object is not valid.";
		return false;
	}

	if (NDI_Object->bIsLibraryInitialized == false)
	{
		OutCode = "NDIlib hasn't been initialized.";
		return false;
	}

	// p_ndi_name doesn't work with std::string(TCHAR_TO_UTF8(*In_Name_Stream));
	std::string Name_Stream = std::string(TCHAR_TO_UTF8(*In_Name_Stream));

	NDIlib_send_create_t Sender_Configs;
	Sender_Configs.p_ndi_name = Name_Stream.c_str();
	Sender_Configs.p_groups = "Public";
	Sender_Configs.clock_video = true;
	Sender_Configs.clock_audio = false;

	UNDI_Android_Sender* NDI_Sender_Object = NewObject<UNDI_Android_Sender>();
	NDI_Sender_Object->NDI_Send_Instance = NDIlib_send_create(&Sender_Configs);

	if (!NDI_Sender_Object->NDI_Send_Instance)
	{
		OutCode = "Unable to initialize NDI_Send_Instance.";
		Out_NDI_Sender = nullptr;
		
		return false;
	}

	else
	{
		OutCode = "NDI_Sender successfully created.";
		Out_NDI_Sender = NDI_Sender_Object;
		
		return true;
	}
}

bool UNDI_AndroidBPLibrary::NDI_Android_Sender_Release(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UPARAM(ref)UNDI_Android_Sender*& NDI_Sender)
{
	if (IsValid(NDI_Object) == false)
	{
		OutCode = "NDI_Object is not valid.";
		return false;
	}

	if (NDI_Object->bIsLibraryInitialized == true)
	{
		free(NDI_Sender->NDI_Video_Frame.p_data);
		NDIlib_send_destroy(NDI_Sender->NDI_Send_Instance);
		NDI_Sender = nullptr;

		OutCode = "NDI_Sender sucessfully released.";
	}

	return true;
}

void UNDI_AndroidBPLibrary::NDI_Android_Source_Infos(FString& SourceName, FString& SourceURL, FString& SourceIP, UNDI_Android_Found* InFound, int32 SourceIndex)
{
	SourceIP = InFound->NDI_Source_Founds[SourceIndex].p_ip_address;
	SourceName = InFound->NDI_Source_Founds[SourceIndex].p_ndi_name;
	SourceURL = InFound->NDI_Source_Founds[SourceIndex].p_url_address;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UPARAM(ref)UNDI_Android_Sender*& NDI_Sender, UTexture2D* InTexture2D, float InFPS)
{
	if (IsValid(NDI_Object) == false)
	{
		OutCode = "NDI_Object is not valid.";
		return false;
	}
	
	if (NDI_Object->bIsLibraryInitialized == false)
	{
		OutCode = "NDIlib hasn't been initialized.";
		return false;
	}

	if (IsValid(NDI_Sender) == false)
	{
		OutCode = "NDI_Sender is not valid.";
		return false;
	}
	
	if (!NDI_Sender->NDI_Send_Instance)
	{
		OutCode = "NDI_Send_Instance is not valid.";
		return false;
	}

	if (IsValid(InTexture2D) == false)
	{
		OutCode = "InTexture2D is not valid.";
		return false;
	}

	NDIlib_FourCC_video_type_e TextureFormat = NDIlib_FourCC_video_type_BGRA;

	switch (InTexture2D->GetPixelFormat())
	{
	
	case EPixelFormat::PF_B8G8R8A8:
		TextureFormat = NDIlib_FourCC_video_type_BGRA;
		break;

	case EPixelFormat::PF_R8G8B8A8:
		TextureFormat = NDIlib_FourCC_video_type_RGBA;
		break;
	
	default:
		OutCode = "Texture pixel format is not BGRA or RGBA";
		return false;
		break;
	}

	NDI_Sender->NDI_Video_Frame.xres = InTexture2D->GetSizeX();
	NDI_Sender->NDI_Video_Frame.yres = InTexture2D->GetSizeY();
	NDI_Sender->NDI_Video_Frame.FourCC = TextureFormat;
	NDI_Sender->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
	NDI_Sender->NDI_Video_Frame.frame_rate_N = InFPS * 1001;
	NDI_Sender->NDI_Video_Frame.frame_rate_D = 1001;
	NDI_Sender->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(InTexture2D->GetSizeX()) * static_cast<size_t>(InTexture2D->GetSizeY()) * 4);

	FTexture2DMipMap& Mip = InTexture2D->GetPlatformData()->Mips[0];
	void* SourceData = Mip.BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(NDI_Sender->NDI_Video_Frame.p_data, SourceData, static_cast<size_t>(InTexture2D->GetSizeX()) * static_cast<size_t>(InTexture2D->GetSizeY()) * 4);

	NDIlib_send_send_video_async_v2(NDI_Sender->NDI_Send_Instance, &NDI_Sender->NDI_Video_Frame);
	Mip.BulkData.Unlock();
	
	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UPARAM(ref)UNDI_Android_Sender*& NDI_Sender, UTextureRenderTarget2D* InTRT2D, float InFPS)
{
	if (IsValid(NDI_Object) == false)
	{
		OutCode = "NDI_Object is not valid.";
		return false;
	}
	
	if (NDI_Object->bIsLibraryInitialized == false)
	{
		OutCode = "NDIlib hasn't been initialized.";
		return false;
	}

	if (IsValid(NDI_Sender) == false)
	{
		OutCode = "NDI_Sender is not valid.";
		return false;
	}

	if (!NDI_Sender->NDI_Send_Instance)
	{
		OutCode = "NDI_Send_Instance is not valid.";
		return false;
	}

	if (IsValid(InTRT2D) == false)
	{
		OutCode = "InTexture2D is not valid.";
		return false;
	}

	TArray<FColor> Pixels;
	InTRT2D->GameThread_GetRenderTargetResource()->ReadPixels(Pixels);
	
	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [NDI_Object, NDI_Sender, InTRT2D, InFPS, Pixels]()
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

			NDI_Sender->NDI_Video_Frame.xres = InTRT2D->SizeX;
			NDI_Sender->NDI_Video_Frame.yres = InTRT2D->SizeY;
			NDI_Sender->NDI_Video_Frame.FourCC = NDIlib_FourCC_video_type_BGRA;
			NDI_Sender->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
			NDI_Sender->NDI_Video_Frame.frame_rate_N = InFPS * 1001;
			NDI_Sender->NDI_Video_Frame.frame_rate_D = 1001;
			NDI_Sender->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(InTRT2D->SizeX) * static_cast<size_t>(InTRT2D->SizeY) * 4);

			FMemory::Memcpy(NDI_Sender->NDI_Video_Frame.p_data, NewAlpha.GetData(), static_cast<size_t>(InTRT2D->SizeX) * static_cast<size_t>(InTRT2D->SizeY) * 4);

			NDIlib_send_send_video_v2(NDI_Sender->NDI_Send_Instance, &NDI_Sender->NDI_Video_Frame);
			
			AsyncTask(ENamedThreads::GameThread, []()
				{

				}
			);
		}
	);

	return true;
}

void UNDI_AndroidBPLibrary::NDI_Android_Find(FDelegateNdiFound DelegateNdiFound, UPARAM(ref)UNDI_Android*& NDI_Object, FString InGroup)
{
	if (IsValid(NDI_Object) == false)
	{
		DelegateNdiFound.Execute(false, nullptr, "NDI_Object is not valid.");

		return;
	}

	if (NDI_Object->bIsLibraryInitialized == false)
	{
		DelegateNdiFound.Execute(false, nullptr, "NDIlib hasn't been initialized.");
		
		return;
	}

	std::string GroupName = std::string(TCHAR_TO_UTF8(*InGroup));

	NDIlib_find_create_t NDI_Find_Create;
	NDI_Find_Create.show_local_sources = true;
	NDI_Find_Create.p_groups = GroupName.c_str();
	NDI_Find_Create.p_extra_ips = NULL;

	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateNdiFound, NDI_Find_Create]()
		{
			UNDI_Android_Found* Object_Sources = NewObject<UNDI_Android_Found>();
			NDIlib_find_instance_t NDI_Find_Instance = NDIlib_find_create_v3(&NDI_Find_Create);
			uint32_t Count;
			
			const NDIlib_source_t* Found_Source = nullptr;
			
			while (NDIlib_find_wait_for_sources(NDI_Find_Instance, 2000))
			{
				Found_Source = NDIlib_find_get_current_sources(NDI_Find_Instance, &Count);
			}

			Object_Sources->NDI_Source_Founds = Found_Source;
			Object_Sources->Source_Count = Count;
			Object_Sources->NDI_Finder = NDI_Find_Instance;

			AsyncTask(ENamedThreads::GameThread, [DelegateNdiFound, Object_Sources]()
				{
					DelegateNdiFound.ExecuteIfBound(true, Object_Sources, "Sucessful");
				}
			);
		}
	);
}

void UNDI_AndroidBPLibrary::NDI_Android_Receive(FDelegateReceived DelegateReceived, UPARAM(ref)UNDI_Android*& NDI_Object, UNDI_Android_Found* InFound, int32 SourceIndex)
{
	if (IsValid(NDI_Object) == false)
	{
		DelegateReceived.ExecuteIfBound(false, nullptr, "NDI_Object is not valid.");
		return;
	}

	if (NDI_Object->bIsLibraryInitialized == false)
	{
		DelegateReceived.ExecuteIfBound(false, nullptr, "NDIlib hasn't been initialized.");
		return;
	}

	if (IsValid(InFound) == false)
	{
		DelegateReceived.ExecuteIfBound(false, nullptr, "InFound is not valid.");
		return;
	}
	
	NDIlib_recv_create_v3_t NDI_Receiver_Settings;
	NDI_Receiver_Settings.allow_video_fields = false;
	NDI_Receiver_Settings.bandwidth = NDIlib_recv_bandwidth_highest;
	NDI_Receiver_Settings.color_format = NDIlib_recv_color_format_BGRX_BGRA;
	NDI_Receiver_Settings.p_ndi_recv_name = InFound->NDI_Source_Founds[SourceIndex].p_ndi_name;
	NDI_Receiver_Settings.source_to_connect_to = InFound->NDI_Source_Founds[SourceIndex];

	NDIlib_recv_instance_t NDI_Receiver_Inst = NDIlib_recv_create_v4(&NDI_Receiver_Settings);
	NDIlib_recv_connect(NDI_Receiver_Inst, &InFound->NDI_Source_Founds[SourceIndex]);

	NDIlib_video_frame_v2_t Frame_Video;
	NDIlib_recv_capture_v3(NDI_Receiver_Inst, &Frame_Video, NULL, nullptr, 200);

	if (Frame_Video.data_size_in_bytes > 0)
	{
		UTexture2D* Video_Frame_Texture = UTexture2D::CreateTransient(Frame_Video.xres, Frame_Video.yres, PF_B8G8R8A8);
		Video_Frame_Texture->SRGB = 0;
		FTexture2DMipMap& Mip = Video_Frame_Texture->GetPlatformData()->Mips[0];
		void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

		FMemory::Memcpy(Data, Frame_Video.p_data, Frame_Video.data_size_in_bytes);
		Mip.BulkData.Unlock();
		Video_Frame_Texture->UpdateResource();

		if (InFound->NDI_Finder)
		{
			//NDIlib_find_destroy(InFound->NDI_Finder);
		}

		NDIlib_recv_free_video_v2(NDI_Receiver_Inst, &Frame_Video);
		NDIlib_recv_destroy(NDI_Receiver_Inst);

		DelegateReceived.ExecuteIfBound(true, Video_Frame_Texture, "Sucessful");
	}

	else
	{
		if (InFound->NDI_Finder)
		{
			//NDIlib_find_destroy(InFound->NDI_Finder);
		}

		NDIlib_recv_free_video_v2(NDI_Receiver_Inst, &Frame_Video);
		NDIlib_recv_destroy(NDI_Receiver_Inst);

		DelegateReceived.ExecuteIfBound(false, nullptr, "Unable to get data.");
	}
}