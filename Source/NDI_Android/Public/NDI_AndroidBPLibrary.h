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
	
	NDIlib_send_instance_t NDI_Sender;
	NDIlib_video_frame_v2_t NDI_Video_Frame;

	UPROPERTY(BlueprintReadOnly)
	bool bIsLibraryInitialized = false;
};

UCLASS(BlueprintType)
class NDI_ANDROID_API UNDI_Android_Found : public UObject
{
	GENERATED_BODY()

public:
	
	const NDIlib_source_v2_t* NDI_Source_Found = nullptr;

	UPROPERTY(BlueprintReadOnly)
	FString NDI_Source_Name = "";

	UPROPERTY(BlueprintReadOnly)
	FString NDI_Source_Metadata = "";

	UPROPERTY(BlueprintReadOnly)
	FString NDI_Source_URL = "";
};

USTRUCT(BlueprintType)
struct FNDI_Android_Found_Array
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	TArray<UNDI_Android_Found*> Array_Sources;
};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateNdiFound, bool, bIsSuccessfull, FNDI_Android_Found_Array, Out_Founds, FString, OutCode);

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
	static int32 NDI_Android_Init(UNDI_Android*& NDI_Object, FString& OutCode, FString In_Name_Stream = "UE5_Android", FString In_Name_Group = "Android");

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Release", Keywords = "ndi, android, release, destroy, remove, uninit, uninitialize"), Category = "NDI_Android|System")
	static bool NDI_Android_Release(UPARAM(ref)UNDI_Android*& NDI_Object);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Texture2D", Keywords = "ndi, android, send, video, frame, texture2d"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_T2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UTexture2D* InTexture2D, float InFPS);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Send Texture Render Target 2D", Keywords = "ndi, android, send, video, frame, texture, render, target, 2d"), Category = "NDI_Android|Send")
	static bool NDI_Android_Send_TRT2D(FString& OutCode, UPARAM(ref)UNDI_Android*& NDI_Object, UTextureRenderTarget2D* InTRT2D, float InFPS);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Find Sources", Keywords = "ndi, android, receive, video, frame, find"), Category = "NDI_Android|Receive")
	static void NDI_Android_Find(FDelegateNdiFound DelegateNdiFound, UPARAM(ref)UNDI_Android*& NDI_Object);

};