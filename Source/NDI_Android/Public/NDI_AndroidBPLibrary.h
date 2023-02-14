// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

// UE Includes.
#include "MediaTexture.h"

// NDI Includes.
#include <Processing.NDI.Advanced.h>

#include "NDI_AndroidBPLibrary.generated.h"

UENUM(BlueprintType)
enum class ENDI_KVM_Mouse : uint8
{
	Mouse_Left		UMETA(DisplayName = "Anonymous"),
	Mouse_Middle	UMETA(DisplayName = "Username"),
	Mouse_Right		UMETA(DisplayName = "Certificate"),
};
ENUM_CLASS_FLAGS(ENDI_KVM_Mouse)

UCLASS(BlueprintType)
class NDI_ANDROID_API UNDI_Android_Sender : public UObject
{
	GENERATED_BODY()

public:

	NDIlib_send_instance_t NDI_Send_Instance;
	NDIlib_video_frame_v2_t NDI_Video_Frame;
};

UCLASS(BlueprintType)
class NDI_ANDROID_API UNDI_Android_Found : public UObject
{
	GENERATED_BODY()

public:
	
	const NDIlib_source_t* NDI_Source_Founds;
	
	UPROPERTY(BlueprintReadOnly)
	int32 Source_Count;

};

UCLASS(BlueprintType)
class NDI_ANDROID_API UNDI_Android_Receiver : public UObject
{
	GENERATED_BODY()

public:

	NDIlib_recv_instance_t Receiver_Instance = nullptr;
};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateNdiFound, bool, bIsSuccessfull, UNDI_Android_Found*, Out_Founds, FString, Out_Code);

UCLASS()
class UNDI_AndroidBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Widget To Texture Render Target 2D", Keywords = "texture, render, target, 2d, widget, convert"), Category = "NDI_Android|Converter")
	static UTextureRenderTarget2D* WidgetToTextureRenderTarget2d(FString& OutCode, UUserWidget* InWidget, FVector2D InDrawSize);

	/**
	* Return -1 is "CPU doesn't support NDI"
	* Return 0 is "Unable to initialize NDIlib"
	* Return 1 is "Successful"
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Init", Description = "", Keywords = "ndi, android, init, initialize"), Category = "NDI_Android|System")
	static int32 NDI_Android_Init(FString& Out_Code);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Release", Keywords = "ndi, android, release, destroy, remove, uninit, uninitialize"), Category = "NDI_Android|System")
	static bool NDI_Android_Release();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "NDI Android Source Infos", Keywords = "ndi, android, source, infos"), Category = "NDI_Android|System")
	static void NDI_Android_Source_Infos(FString& SourceIP, FString& SourceName, FString& SourceURL, UNDI_Android_Found* In_Found, int32 In_Source_Index);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "NDI Android Send Rate", Keywords = "ndi, android, send, sender, rate"), Category = "NDI_Android|System")
	static float NDI_Android_Send_Rate(int32 FPS);

	/**
	* @param In_Port use 1522 or 5960
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Sender Create", Keywords = "ndi, android, send, sender, start, create, video, frame"), Category = "NDI_Android|Send")
	static bool NDI_Android_Sender_Create(FString& Out_Code, UNDI_Android_Sender*& Out_NDI_Sender, FString In_Name_Stream = "UE5_Android_NDI", int32 In_Port = 1522);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Sender Release", Keywords = "ndi, android, send, sender, stop, release, video, frame"), Category = "NDI_Android|Send")
	static bool NDI_Android_Sender_Release(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Texture2D", Keywords = "ndi, android, send, video, frame, texture, 2d"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_T2D(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UTexture2D* In_Texture2D, int32 In_FPS = 30);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Texture Render Target 2D", Keywords = "ndi, android, send, video, frame, texture, 2d, render, target"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_TRT2D(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UTextureRenderTarget2D* In_TRT2D, int32 In_FPS = 30);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Media Texture", Keywords = "ndi, android, send, video, frame, texture, media"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_MT(FString& Out_Code, UPARAM(ref)UNDI_Android_Sender*& In_NDI_Sender, UMediaTexture* In_MT, int32 In_FPS = 30);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Find Sources", Keywords = "ndi, android, receive, receiver, source, find, video, frame"), Category = "NDI_Android|Receive")
	static void NDI_Android_Find(FDelegateNdiFound DelegateNdiFound, FString In_ExtraIps, FString In_Group = "Public");

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receiver Create", Keywords = "ndi, android, receive, receiver, start, create"), Category = "NDI_Android|Receive")
	static bool NDI_Android_Receiver_Create(UNDI_Android_Receiver* &Out_Receiver, FString & Out_Code, UPARAM(ref)UNDI_Android_Found * &In_NDI_Found, int32 In_Source_Index = -1, bool bAllowVideoField = false);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receiver Release", Keywords = "ndi, android, receive, receiver, stop, release, video, frame"), Category = "NDI_Android|Receive")
	static void NDI_Android_Receiver_Release(UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receive Frames", Keywords = "ndi, android, receive, receiver, video, frame"), Category = "NDI_Android|Receive")
	static bool NDI_Android_Receive_Frames(UTexture2D*& Out_Frame, FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver);

	// Callback function to generaete frames.
	static UTexture2D* Callback_GenerateFrame(NDIlib_video_frame_v2_t In_Frame_Received, NDIlib_recv_instance_t In_NDI_Receiver, EPixelFormat PixelFormat);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receive Audio (Exprimental)", Keywords = "ndi, android, receive, receiver, video, frame"), Category = "NDI_Android|Receive")
	static bool NDI_Android_Receive_Audio(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Mouse Button", Keywords = "ndi, android, kvm, mouse, send"), Category = "NDI_Android|KVM")
	static bool NDI_Android_KVM_Mouse_Send(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, ENDI_KVM_Mouse MouseButton);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Release Mouse Button", Keywords = "ndi, android, kvm, mouse, release"), Category = "NDI_Android|KVM")
	static bool NDI_Android_KVM_Mouse_Release(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, ENDI_KVM_Mouse MouseButton);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Mouse Position", Keywords = "ndi, android, kvm, mouse, position"), Category = "NDI_Android|KVM")
	static bool NDI_Android_KVM_Mouse_Position(FString& Out_Code, UPARAM(ref)UNDI_Android_Receiver*& In_NDI_Receiver, FVector2f In_Mouse_Position);

};