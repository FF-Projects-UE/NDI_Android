// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NDI_AndroidBPLibrary.h"
#include "AC_NDI_Receiver.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateReceived, bool, bIsSuccessfull, UTexture2D*, Out_T2D, FString, OutCode);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NDI_ANDROID_API UAC_NDI_Receiver : public UActorComponent
{
	GENERATED_BODY()

public:	

	// Sets default values for this component's properties
	UAC_NDI_Receiver();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receive Start", Keywords = "ndi, android, receive, video, frame, start"), Category = "NDI_Android|Receive")
	virtual bool NDI_Android_Receive_Start(UNDI_Android_Found* In_NDI_Found, int32 In_Source_Index = -1);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "NDI Android Receive Stop", Keywords = "ndi, android, receive, video, frame, stop"), Category = "NDI_Android|Receive")
	virtual void NDI_Android_Receive_Stop();

	UPROPERTY(BlueprintReadOnly)
	UTexture2D* Received_Frame = nullptr;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	bool bNDI_Start_Receive = false;

	UPROPERTY(BlueprintReadOnly)
	UNDI_Android_Found* NDI_Found = nullptr;

	UPROPERTY(BlueprintReadOnly)
	int32 Source_Index = -1;

private:

	NDIlib_recv_instance_t NDI_Receiver = nullptr;

	virtual bool Create_Receiver();

	virtual bool Receive_Frames();

};
