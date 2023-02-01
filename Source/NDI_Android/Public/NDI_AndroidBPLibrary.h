// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

// UE Includes
#include "MediaTexture.h"
#include "Engine/Texture.h"

// NDI Includes.
#include <Processing.NDI.Advanced.h>

#include "NDI_AndroidBPLibrary.generated.h"

UCLASS(BlueprintType)
class NDI_ANDROID_API UNDI_Android : public UObject
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly)
	bool bIsLibraryInitialized = false;
};

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
	NDIlib_find_instance_t NDI_Finder;
	
	UPROPERTY(BlueprintReadOnly)
	int32 Source_Count;

};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateNdiFound, bool, bIsSuccessfull, UNDI_Android_Found*, Out_Founds, FString, OutCode);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateReceived, bool, bIsSuccessfull, UTexture2D*, Out_T2D, FString, OutCode);

UCLASS()
class UNDI_AndroidBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	/**
	* Return -1 is "CPU doesn't support NDI"
	* Return 0 is "Unable to initialize NDIlib"
	* Return 1 is "Successful"
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Init", Description = "", Keywords = "ndi, android, init, initialize"), Category = "NDI_Android|System")
	static int32 NDI_Android_Init(FString& OutCode, UNDI_Android*& NDI_Object);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Release", Keywords = "ndi, android, release, destroy, remove, uninit, uninitialize"), Category = "NDI_Android|System")
	static bool NDI_Android_Release(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "NDI Android Source Infos", Keywords = "ndi, android, source, infos"), Category = "NDI_Android|System")
	static void NDI_Android_Source_Infos(FString& SourceName, FString& SourceURL, FString& SourceIP, UNDI_Android_Found* InFound, int32 SourceIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Create Sender", Keywords = "ndi, android, sender, create"), Category = "NDI_Android|Send")
	static bool NDI_Android_Sender_Create(FString& OutCode, UNDI_Android_Sender*& Out_NDI_Sender, UPARAM(ref)UNDI_Android*& NDI_Object, FString In_Name_Stream);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Release Sender", Keywords = "ndi, android, sender, release"), Category = "NDI_Android|Send")
	static bool NDI_Android_Sender_Release(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UPARAM(ref)UNDI_Android_Sender*& NDI_Sender);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Texture2D", Keywords = "ndi, android, send, video, frame, texture2d"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_T2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UPARAM(ref)UNDI_Android_Sender*& NDI_Sender, UTexture2D* InTexture2D, float InFPS);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Texture Render Target 2D", Keywords = "ndi, android, send, video, frame, texture, render, target, 2d"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_TRT2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UPARAM(ref)UNDI_Android_Sender*& NDI_Sender, UTextureRenderTarget2D* InTRT2D, float InFPS);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Find Sources", Keywords = "ndi, android, receive, video, frame, find"), Category = "NDI_Android|Receive")
	static void NDI_Android_Find(FDelegateNdiFound DelegateNdiFound, UPARAM(ref)UNDI_Android*& NDI_Object, FString InGroup = "Public");

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receive", Keywords = "ndi, android, receive, video, frame"), Category = "NDI_Android|Receive")
	static void NDI_Android_Receive(FDelegateReceived DelegateReceived, UPARAM(ref)UNDI_Android*& NDI_Object, UNDI_Android_Found* InFound, int32 SourceIndex);

};