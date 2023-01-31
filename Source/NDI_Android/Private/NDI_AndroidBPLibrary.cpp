// Copyright Epic Games, Inc. All Rights Reserved.

#include "NDI_AndroidBPLibrary.h"
#include "NDI_Android.h"

// UE Includes
#include "Kismet/KismetRenderingLibrary.h"
#include "IImageWrapperModule.h"

THIRD_PARTY_INCLUDES_START
// C++ Includes
#include <chrono>
THIRD_PARTY_INCLUDES_END

UNDI_AndroidBPLibrary::UNDI_AndroidBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

int32 UNDI_AndroidBPLibrary::NDI_Android_Init(UNDI_Android*& Out_NDI_Object, FString& OutCode, FString In_Name_Stream, FString In_Name_Group)
{
	if (NDIlib_is_supported_CPU() == false)
	{
		OutCode = "CPU doesn't support NDI";
		return -1;
	}
	
	if (!NDIlib_initialize())
	{
		OutCode = "Unable to initialize NDILib";
		return 0;
	}

	// p_ndi_name doesn't work with std::string(TCHAR_TO_UTF8(*In_Name_Stream));
	std::string Name_Stream = std::string(TCHAR_TO_UTF8(*In_Name_Stream));
	
	// p_groups doesn't work with std::string(TCHAR_TO_UTF8(*In_Name_Group));
	std::string Name_Group = std::string(TCHAR_TO_UTF8(*In_Name_Group));

	NDIlib_send_create_t Sender_Configs;
	Sender_Configs.p_ndi_name = Name_Stream.c_str();
	Sender_Configs.p_groups = NULL;
	Sender_Configs.clock_video = true;
	Sender_Configs.clock_audio = false;

	UNDI_Android* NDI_Object = NewObject<UNDI_Android>();
	NDI_Object->bIsLibraryInitialized = true;
	NDI_Object->NDI_Sender = NDIlib_send_create(&Sender_Configs);

	if (!NDI_Object->NDI_Sender)
	{
		OutCode = "Unable to initialize NDI Sender";
		Out_NDI_Object = nullptr;
		return 0;
	}

	else
	{
		OutCode = "Sucessful";
		Out_NDI_Object = NDI_Object;
		return 1;
	}
}

bool UNDI_AndroidBPLibrary::NDI_Android_Release(UPARAM(ref)UNDI_Android*& NDI_Object)
{
	if (IsValid(NDI_Object) == false)
	{
		return false;
	}

	if (NDI_Object->bIsLibraryInitialized == true)
	{
		free(NDI_Object->NDI_Video_Frame.p_data);
		NDIlib_send_destroy(NDI_Object->NDI_Sender);
		NDIlib_destroy();
	}

	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UTexture2D* InTexture2D, float InFPS)
{
	if (NDI_Object->bIsLibraryInitialized == false)
	{
		OutCode = "NDILib hasn't been initialized.";
		return false;
	}
	
	if (IsValid(InTexture2D) == false)
	{
		OutCode = "InTexture2D is not valid.";
		return false;
	}

	NDI_Object->NDI_Video_Frame.xres = InTexture2D->GetSizeX();
	NDI_Object->NDI_Video_Frame.yres = InTexture2D->GetSizeY();
	NDI_Object->NDI_Video_Frame.FourCC = NDIlib_FourCC_video_type_BGRA;
	NDI_Object->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
	NDI_Object->NDI_Video_Frame.frame_rate_N = InFPS * 1001;
	NDI_Object->NDI_Video_Frame.frame_rate_D = 1001;
	NDI_Object->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(InTexture2D->GetSizeX()) * static_cast<size_t>(InTexture2D->GetSizeY()) * 4);

	FTexture2DMipMap& Mip = InTexture2D->GetPlatformData()->Mips[0];
	void* SourceData = Mip.BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(NDI_Object->NDI_Video_Frame.p_data, SourceData, static_cast<size_t>(InTexture2D->GetSizeX()) * static_cast<size_t>(InTexture2D->GetSizeY()) * 4);

	NDIlib_send_send_video_async_v2(NDI_Object->NDI_Sender, &NDI_Object->NDI_Video_Frame);
	Mip.BulkData.Unlock();
	
	return true;
}

bool UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UTextureRenderTarget2D* InTRT2D, float InFPS)
{
	if (NDI_Object->bIsLibraryInitialized == false)
	{
		OutCode = "NDILib hasn't been initialized.";
		return false;
	}

	if (IsValid(InTRT2D) == false)
	{
		OutCode = "InTexture2D is not valid.";
		return false;
	}

	TArray<FColor> Pixels;
	InTRT2D->GameThread_GetRenderTargetResource()->ReadPixels(Pixels);
	
	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [NDI_Object, InTRT2D, InFPS, Pixels]()
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

			NDI_Object->NDI_Video_Frame.xres = InTRT2D->SizeX;
			NDI_Object->NDI_Video_Frame.yres = InTRT2D->SizeY;
			NDI_Object->NDI_Video_Frame.FourCC = NDIlib_FourCC_video_type_BGRA;
			NDI_Object->NDI_Video_Frame.frame_format_type = NDIlib_frame_format_type_progressive;
			NDI_Object->NDI_Video_Frame.frame_rate_N = InFPS * 1001;
			NDI_Object->NDI_Video_Frame.frame_rate_D = 1001;
			NDI_Object->NDI_Video_Frame.p_data = (uint8_t*)malloc(static_cast<size_t>(InTRT2D->SizeX) * static_cast<size_t>(InTRT2D->SizeY) * 4);

			FMemory::Memcpy(NDI_Object->NDI_Video_Frame.p_data, NewAlpha.GetData(), static_cast<size_t>(InTRT2D->SizeX) * static_cast<size_t>(InTRT2D->SizeY) * 4);

			NDIlib_send_send_video_v2(NDI_Object->NDI_Sender, &NDI_Object->NDI_Video_Frame);
			
			AsyncTask(ENamedThreads::GameThread, []()
				{

				}
			);
		}
	);

	return true;
}

void UNDI_AndroidBPLibrary::NDI_Android_Find(FDelegateNdiFound DelegateNdiFound, UPARAM(ref)UNDI_Android*& NDI_Object)
{
	if (NDI_Object->bIsLibraryInitialized == false)
	{
		FNDI_Android_Found_Array Found_Array;
		DelegateNdiFound.Execute(false, Found_Array, "NDILib hasn't been initialized.");
		
		return;
	}

	NDIlib_find_create_t NDI_Find_Create;
	NDI_Find_Create.show_local_sources = true;
	NDI_Find_Create.p_groups = NULL;
	NDI_Find_Create.p_extra_ips = NULL;

	NDIlib_find_instance_t NDI_Find_Instance = NDIlib_find_create_v2(&NDI_Find_Create);

	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateNdiFound, NDI_Find_Create, NDI_Find_Instance]()
		{
			TArray<UNDI_Android_Found*> Sources;
			uint32_t Count_Sources = 0;
			
			while (NDIlib_find_wait_for_sources(NDI_Find_Instance, 5000) == true)
			{
				const NDIlib_source_v2_t* Found_Source = NDIlib_find_get_current_sources_v2(NDI_Find_Instance, &Count_Sources);

				UNDI_Android_Found* Found_Source_Object = NewObject<UNDI_Android_Found>();

				Found_Source_Object->NDI_Source_Found = Found_Source;
				Found_Source_Object->NDI_Source_Name = Found_Source->p_ndi_name;
				Found_Source_Object->NDI_Source_Metadata = Found_Source->p_metadata;
				Found_Source_Object->NDI_Source_URL = Found_Source->p_url_address;

				Sources.Add(Found_Source_Object);
			}

			NDIlib_find_destroy(NDI_Find_Instance);

			FNDI_Android_Found_Array Found_Array;
			Found_Array.Array_Sources = Sources;
			
			AsyncTask(ENamedThreads::GameThread, [DelegateNdiFound, Found_Array]()
				{
					DelegateNdiFound.ExecuteIfBound(true, Found_Array, "Sucessful");
				}
			);
		}
	);
}