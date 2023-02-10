// Fill out your copyright notice in the Description page of Project Settings.

#include "AC_NDI_Receiver.h"

// Sets default values for this component's properties
UAC_NDI_Receiver::UAC_NDI_Receiver()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UAC_NDI_Receiver::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UAC_NDI_Receiver::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UAC_NDI_Receiver::NDI_Android_Receive_Start(UNDI_Android_Found* In_NDI_Found, int32 In_Source_Index)
{
	if (IsValid(In_NDI_Found) == false)
	{
		return false;
	}

	if (In_Source_Index == -1)
	{
		return false;
	}

	this->NDI_Found = In_NDI_Found;
	this->Source_Index = In_Source_Index;

	this->Create_Receiver();

	return true;
}

bool UAC_NDI_Receiver::Create_Receiver()
{
	if (this->NDI_Receiver)
	{
		NDIlib_recv_destroy(this->NDI_Receiver);
		this->NDI_Receiver = nullptr;
	}

	NDIlib_recv_create_v3_t NDI_Receiver_Settings;
	NDI_Receiver_Settings.allow_video_fields = false;
	NDI_Receiver_Settings.bandwidth = NDIlib_recv_bandwidth_highest;
	NDI_Receiver_Settings.color_format = NDIlib_recv_color_format_BGRX_BGRA;
	NDI_Receiver_Settings.p_ndi_recv_name = this->NDI_Found->NDI_Source_Founds[this->Source_Index].p_ndi_name;
	NDI_Receiver_Settings.source_to_connect_to = this->NDI_Found->NDI_Source_Founds[this->Source_Index];

	NDIlib_recv_instance_t NDI_Receiver_Inst = NDIlib_recv_create_v4(&NDI_Receiver_Settings);

	if (!NDI_Receiver_Inst)
	{
		NDIlib_recv_destroy(NDI_Receiver_Inst);
		return false;
	}

	NDIlib_recv_connect(NDI_Receiver_Inst, &this->NDI_Found->NDI_Source_Founds[this->Source_Index]);

	this->NDI_Receiver = NDI_Receiver_Inst;
	
	this->Delegate_Receive_Frames.BindUFunction(this, "Receive_Frames");
	GEngine->GetCurrentPlayWorld()->GetTimerManager().SetTimer(this->Timer_Receive_Frames, Delegate_Receive_Frames, this->Receive_Rate, true);
	
	return true;
}

bool UAC_NDI_Receiver::Receive_Frames()
{
	if (!this->NDI_Receiver)
	{
		return false;
	}
	
	NDIlib_video_frame_v2_t Frame_Received;
	//NDIlib_audio_frame_v3_t Audio_Received;
	NDIlib_recv_capture_v3(this->NDI_Receiver, &Frame_Received, NULL, nullptr, 1000);

	if (Frame_Received.data_size_in_bytes > 0)
	{		
		if (Frame_Received.FourCC == NDIlib_FourCC_video_type_UYVA)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "UYVA");
			
			return false;
		}
		
		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_UYVY)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "UYVY");
			
			return false;
		}

		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_YV12)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "YV12");
			
			return false;
		}

		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_BGRA)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "BGRA");

			UTexture2D* Frame_Texture = UTexture2D::CreateTransient(Frame_Received.xres, Frame_Received.yres, PF_B8G8R8A8);
			Frame_Texture->SRGB = 0;
			FTexture2DMipMap& Frame_Mip = Frame_Texture->GetPlatformData()->Mips[0];
			void* Frame_Texture_Data = Frame_Mip.BulkData.Lock(LOCK_READ_WRITE);

			FMemory::Memcpy(Frame_Texture_Data, Frame_Received.p_data, static_cast<SIZE_T>(Frame_Received.line_stride_in_bytes) * Frame_Received.yres);
			Frame_Mip.BulkData.Unlock();
			Frame_Texture->UpdateResource();

			NDIlib_recv_free_video_v2(this->NDI_Receiver, &Frame_Received);

			this->Received_Frame = Frame_Texture;

			return true;
		}
		
		else if (Frame_Received.FourCC == NDIlib_FourCC_video_type_BGRX)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "BGRX");
			UTexture2D* Frame_Texture = UTexture2D::CreateTransient(Frame_Received.xres, Frame_Received.yres, PF_B8G8R8A8);
			Frame_Texture->SRGB = 0;
			FTexture2DMipMap& Frame_Mip = Frame_Texture->GetPlatformData()->Mips[0];
			void* Frame_Texture_Data = Frame_Mip.BulkData.Lock(LOCK_READ_WRITE);

			FMemory::Memcpy(Frame_Texture_Data, Frame_Received.p_data, static_cast<SIZE_T>(Frame_Received.line_stride_in_bytes) * Frame_Received.yres);
			Frame_Mip.BulkData.Unlock();
			Frame_Texture->UpdateResource();

			NDIlib_recv_free_video_v2(this->NDI_Receiver, &Frame_Received);

			this->Received_Frame = Frame_Texture;

			return true;
		}
	}

	else
	{
		NDIlib_recv_free_video_v2(this->NDI_Receiver, &Frame_Received);

		return false;
	}

	return true;
}

void UAC_NDI_Receiver::NDI_Android_Receive_Stop()
{
	if (!this->NDI_Receiver)
	{
		return;
	}

	this->Timer_Receive_Frames.Invalidate();
	this->Delegate_Receive_Frames.Unbind();

	NDIlib_recv_destroy(this->NDI_Receiver);
	this->NDI_Receiver = nullptr;

	return;
}