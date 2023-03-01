// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NDI_AndroidBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaTexture;
class UNDI_Android_Found;
class UNDI_Android_Receiver;
class UNDI_Android_Sender;
class UTexture2D;
class UTextureRenderTarget2D;
class UUserWidget;
enum class ENDI_KVM_Mouse : uint8;
struct FByteArray;
#ifdef NDI_ANDROID_NDI_AndroidBPLibrary_generated_h
#error "NDI_AndroidBPLibrary.generated.h already included, missing '#pragma once' in NDI_AndroidBPLibrary.h"
#endif
#define NDI_ANDROID_NDI_AndroidBPLibrary_generated_h

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FByteArray_Statics; \
	NDI_ANDROID_API static class UScriptStruct* StaticStruct();


template<> NDI_ANDROID_API UScriptStruct* StaticStruct<struct FByteArray>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDI_Android_Sender(); \
	friend struct Z_Construct_UClass_UNDI_Android_Sender_Statics; \
public: \
	DECLARE_CLASS(UNDI_Android_Sender, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_Android_Sender)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUNDI_Android_Sender(); \
	friend struct Z_Construct_UClass_UNDI_Android_Sender_Statics; \
public: \
	DECLARE_CLASS(UNDI_Android_Sender, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_Android_Sender)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_Android_Sender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_Android_Sender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_Android_Sender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_Android_Sender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_Android_Sender(UNDI_Android_Sender&&); \
	NO_API UNDI_Android_Sender(const UNDI_Android_Sender&); \
public: \
	NO_API virtual ~UNDI_Android_Sender();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_Android_Sender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_Android_Sender(UNDI_Android_Sender&&); \
	NO_API UNDI_Android_Sender(const UNDI_Android_Sender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_Android_Sender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_Android_Sender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_Android_Sender) \
	NO_API virtual ~UNDI_Android_Sender();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_36_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDI_ANDROID_API UClass* StaticClass<class UNDI_Android_Sender>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDI_Android_Found(); \
	friend struct Z_Construct_UClass_UNDI_Android_Found_Statics; \
public: \
	DECLARE_CLASS(UNDI_Android_Found, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_Android_Found)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUNDI_Android_Found(); \
	friend struct Z_Construct_UClass_UNDI_Android_Found_Statics; \
public: \
	DECLARE_CLASS(UNDI_Android_Found, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_Android_Found)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_Android_Found(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_Android_Found) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_Android_Found); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_Android_Found); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_Android_Found(UNDI_Android_Found&&); \
	NO_API UNDI_Android_Found(const UNDI_Android_Found&); \
public: \
	NO_API virtual ~UNDI_Android_Found();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_Android_Found(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_Android_Found(UNDI_Android_Found&&); \
	NO_API UNDI_Android_Found(const UNDI_Android_Found&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_Android_Found); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_Android_Found); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_Android_Found) \
	NO_API virtual ~UNDI_Android_Found();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_47_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDI_ANDROID_API UClass* StaticClass<class UNDI_Android_Found>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDI_Android_Receiver(); \
	friend struct Z_Construct_UClass_UNDI_Android_Receiver_Statics; \
public: \
	DECLARE_CLASS(UNDI_Android_Receiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_Android_Receiver)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUNDI_Android_Receiver(); \
	friend struct Z_Construct_UClass_UNDI_Android_Receiver_Statics; \
public: \
	DECLARE_CLASS(UNDI_Android_Receiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_Android_Receiver)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_Android_Receiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_Android_Receiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_Android_Receiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_Android_Receiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_Android_Receiver(UNDI_Android_Receiver&&); \
	NO_API UNDI_Android_Receiver(const UNDI_Android_Receiver&); \
public: \
	NO_API virtual ~UNDI_Android_Receiver();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_Android_Receiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_Android_Receiver(UNDI_Android_Receiver&&); \
	NO_API UNDI_Android_Receiver(const UNDI_Android_Receiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_Android_Receiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_Android_Receiver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_Android_Receiver) \
	NO_API virtual ~UNDI_Android_Receiver();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_61_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDI_ANDROID_API UClass* StaticClass<class UNDI_Android_Receiver>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_72_DELEGATE \
struct _Script_NDI_Android_eventDelegateNdiFound_Parms \
{ \
	bool bIsSuccessfull; \
	UNDI_Android_Found* Out_Founds; \
	FString Out_Code; \
}; \
static inline void FDelegateNdiFound_DelegateWrapper(const FScriptDelegate& DelegateNdiFound, bool bIsSuccessfull, UNDI_Android_Found* Out_Founds, const FString& Out_Code) \
{ \
	_Script_NDI_Android_eventDelegateNdiFound_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_Founds=Out_Founds; \
	Parms.Out_Code=Out_Code; \
	DelegateNdiFound.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_75_DELEGATE \
struct _Script_NDI_Android_eventNdiVideoReceived_Parms \
{ \
	bool bIsSuccessfull; \
	UTexture2D* Out_T2D; \
	FString Out_Code; \
}; \
static inline void FNdiVideoReceived_DelegateWrapper(const FScriptDelegate& NdiVideoReceived, bool bIsSuccessfull, UTexture2D* Out_T2D, const FString& Out_Code) \
{ \
	_Script_NDI_Android_eventNdiVideoReceived_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_T2D=Out_T2D; \
	Parms.Out_Code=Out_Code; \
	NdiVideoReceived.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_78_DELEGATE \
struct _Script_NDI_Android_eventNdiAudioReceived_Parms \
{ \
	bool bIsSuccessfull; \
	FByteArray Out_Audio_Buffer; \
	FString Out_Code; \
}; \
static inline void FNdiAudioReceived_DelegateWrapper(const FScriptDelegate& NdiAudioReceived, bool bIsSuccessfull, FByteArray Out_Audio_Buffer, const FString& Out_Code) \
{ \
	_Script_NDI_Android_eventNdiAudioReceived_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_Audio_Buffer=Out_Audio_Buffer; \
	Parms.Out_Code=Out_Code; \
	NdiAudioReceived.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNDI_Android_KVM_Clipboard_Send); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Keyboard_Release); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Keyboard_Send); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Wheel_Horizontal); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Wheel_Vertical); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Position); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Release); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Send); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Audio); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Frames); \
	DECLARE_FUNCTION(execNDI_Android_Receiver_Release); \
	DECLARE_FUNCTION(execNDI_Android_Receiver_Create); \
	DECLARE_FUNCTION(execNDI_Android_Find); \
	DECLARE_FUNCTION(execNDI_Android_Send_MT); \
	DECLARE_FUNCTION(execNDI_Android_Send_TRT2D); \
	DECLARE_FUNCTION(execNDI_Android_Send_T2D); \
	DECLARE_FUNCTION(execNDI_Android_Sender_Release); \
	DECLARE_FUNCTION(execNDI_Android_Sender_Create); \
	DECLARE_FUNCTION(execNDI_Android_Send_Rate); \
	DECLARE_FUNCTION(execNDI_Android_Source_Infos); \
	DECLARE_FUNCTION(execNDI_Android_Release); \
	DECLARE_FUNCTION(execNDI_Android_Init); \
	DECLARE_FUNCTION(execWidgetToTextureRenderTarget2d);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNDI_Android_KVM_Clipboard_Send); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Keyboard_Release); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Keyboard_Send); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Wheel_Horizontal); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Wheel_Vertical); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Position); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Release); \
	DECLARE_FUNCTION(execNDI_Android_KVM_Mouse_Send); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Audio); \
	DECLARE_FUNCTION(execNDI_Android_Receive_Frames); \
	DECLARE_FUNCTION(execNDI_Android_Receiver_Release); \
	DECLARE_FUNCTION(execNDI_Android_Receiver_Create); \
	DECLARE_FUNCTION(execNDI_Android_Find); \
	DECLARE_FUNCTION(execNDI_Android_Send_MT); \
	DECLARE_FUNCTION(execNDI_Android_Send_TRT2D); \
	DECLARE_FUNCTION(execNDI_Android_Send_T2D); \
	DECLARE_FUNCTION(execNDI_Android_Sender_Release); \
	DECLARE_FUNCTION(execNDI_Android_Sender_Create); \
	DECLARE_FUNCTION(execNDI_Android_Send_Rate); \
	DECLARE_FUNCTION(execNDI_Android_Source_Infos); \
	DECLARE_FUNCTION(execNDI_Android_Release); \
	DECLARE_FUNCTION(execNDI_Android_Init); \
	DECLARE_FUNCTION(execWidgetToTextureRenderTarget2d);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDI_AndroidBPLibrary(); \
	friend struct Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNDI_AndroidBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_AndroidBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUNDI_AndroidBPLibrary(); \
	friend struct Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNDI_AndroidBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDI_Android"), NO_API) \
	DECLARE_SERIALIZER(UNDI_AndroidBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_AndroidBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_AndroidBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_AndroidBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_AndroidBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_AndroidBPLibrary(UNDI_AndroidBPLibrary&&); \
	NO_API UNDI_AndroidBPLibrary(const UNDI_AndroidBPLibrary&); \
public: \
	NO_API virtual ~UNDI_AndroidBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDI_AndroidBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDI_AndroidBPLibrary(UNDI_AndroidBPLibrary&&); \
	NO_API UNDI_AndroidBPLibrary(const UNDI_AndroidBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDI_AndroidBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDI_AndroidBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDI_AndroidBPLibrary) \
	NO_API virtual ~UNDI_AndroidBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_80_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDI_AndroidBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDI_ANDROID_API UClass* StaticClass<class UNDI_AndroidBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h


#define FOREACH_ENUM_ENDI_KVM_MOUSE(op) \
	op(ENDI_KVM_Mouse::Mouse_Left) \
	op(ENDI_KVM_Mouse::Mouse_Middle) \
	op(ENDI_KVM_Mouse::Mouse_Right) 

enum class ENDI_KVM_Mouse : uint8;
template<> struct TIsUEnumClass<ENDI_KVM_Mouse> { enum { Value = true }; };
template<> NDI_ANDROID_API UEnum* StaticEnum<ENDI_KVM_Mouse>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
