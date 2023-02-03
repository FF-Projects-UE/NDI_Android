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

	if (this->bNDI_Start_Receive == true)
	{
		this->Receive_Frames();
	}
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
	NDIlib_recv_connect(NDI_Receiver_Inst, &this->NDI_Found->NDI_Source_Founds[this->Source_Index]);

	this->NDI_Receiver = NDI_Receiver_Inst;
	this->bNDI_Start_Receive = true;

	return true;
}

bool UAC_NDI_Receiver::Receive_Frames()
{
	if (!this->NDI_Receiver)
	{
		return false;
	}
	
	NDIlib_video_frame_v2_t Frame_Video;
	NDIlib_recv_capture_v3(this->NDI_Receiver, &Frame_Video, NULL, nullptr, 200);

	if (Frame_Video.data_size_in_bytes > 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::FromInt(Frame_Video.data_size_in_bytes));
		
		UTexture2D* Video_Frame_Texture = UTexture2D::CreateTransient(Frame_Video.xres, Frame_Video.yres, PF_B8G8R8A8);
		Video_Frame_Texture->SRGB = 0;
		FTexture2DMipMap& Mip = Video_Frame_Texture->GetPlatformData()->Mips[0];
		void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

		FMemory::Memcpy(Data, Frame_Video.p_data, Frame_Video.data_size_in_bytes);
		Mip.BulkData.Unlock();
		Video_Frame_Texture->UpdateResource();

		NDIlib_recv_free_video_v2(this->NDI_Receiver, &Frame_Video);

		this->Received_Frame = Video_Frame_Texture;

		return true;
	}

	else
	{
		NDIlib_recv_free_video_v2(this->NDI_Receiver, &Frame_Video);

		return false;
	}
}

void UAC_NDI_Receiver::NDI_Android_Receive_Stop()
{
	if (!this->NDI_Receiver)
	{
		return;
	}

	this->bNDI_Start_Receive = false;

	NDIlib_recv_destroy(this->NDI_Receiver);
	this->NDI_Receiver = nullptr;

	return;
}