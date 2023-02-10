// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AC_NDI_Receiver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDI_Android_Found;
class UTexture2D;
#ifdef NDI_ANDROID_AC_NDI_Receiver_generated_h
#error "AC_NDI_Receiver.generated.h already included, missing '#pragma once' in AC_NDI_Receiver.h"
#endif
#define NDI_ANDROID_AC_NDI_Receiver_generated_h

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_11_DELEGATE \
struct _Script_NDI_Android_eventDelegateReceived_Parms \
{ \
	bool bIsSuccessfull; \
	UTexture2D* Out_T2D; \
	FString OutCode; \
}; \
static inline void FDelegateReceived_DelegateWrapper(const FScriptDelegate& DelegateReceived, bool bIsSuccessfull, UTexture2D* Out_T2D, const FString& OutCode) \
{ \
	_Script_NDI_Android_eventDelegateReceived_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_T2D=Out_T2D; \
	Parms.OutCode=OutCode; \
	DelegateReceived.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreate_Receiver); \
	DECLARE_FUNCTION(execReceive_Frames); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Stop); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Start);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreate_Receiver); \
	DECLARE_FUNCTION(execReceive_Frames); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Stop); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Start);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_NDI_Receiver(); \
	friend struct Z_Construct_UClass_UAC_NDI_Receiver_Statics; \
public: \
	DECLARE_CLASS(UAC_NDI_Receiver, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UAC_NDI_Receiver)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAC_NDI_Receiver(); \
	friend struct Z_Construct_UClass_UAC_NDI_Receiver_Statics; \
public: \
	DECLARE_CLASS(UAC_NDI_Receiver, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UAC_NDI_Receiver)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAC_NDI_Receiver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAC_NDI_Receiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_NDI_Receiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_NDI_Receiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAC_NDI_Receiver(UAC_NDI_Receiver&&); \
	NO_API UAC_NDI_Receiver(const UAC_NDI_Receiver&); \
public: \
	NO_API virtual ~UAC_NDI_Receiver();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAC_NDI_Receiver(UAC_NDI_Receiver&&); \
	NO_API UAC_NDI_Receiver(const UAC_NDI_Receiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_NDI_Receiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_NDI_Receiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_NDI_Receiver) \
	NO_API virtual ~UAC_NDI_Receiver();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_13_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDI_ANDROID_API UClass* StaticClass<class UAC_NDI_Receiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
