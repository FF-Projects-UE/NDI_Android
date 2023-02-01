// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDI_Android/Public/NDI_AndroidBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDI_AndroidBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Found();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Found_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Sender();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Sender_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary_NoRegister();
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature();
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NDI_Android();
// End Cross Module References
	void UNDI_Android::StaticRegisterNativesUNDI_Android()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDI_Android);
	UClass* Z_Construct_UClass_UNDI_Android_NoRegister()
	{
		return UNDI_Android::StaticClass();
	}
	struct Z_Construct_UClass_UNDI_Android_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLibraryInitialized_MetaData[];
#endif
		static void NewProp_bIsLibraryInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLibraryInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDI_Android_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NDI_AndroidBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized_MetaData[] = {
		{ "Category", "NDI_Android" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	void Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized_SetBit(void* Obj)
	{
		((UNDI_Android*)Obj)->bIsLibraryInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized = { "bIsLibraryInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNDI_Android), &Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDI_Android_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDI_Android_Statics::NewProp_bIsLibraryInitialized,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDI_Android_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDI_Android>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDI_Android_Statics::ClassParams = {
		&UNDI_Android::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNDI_Android_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDI_Android()
	{
		if (!Z_Registration_Info_UClass_UNDI_Android.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDI_Android.OuterSingleton, Z_Construct_UClass_UNDI_Android_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDI_Android.OuterSingleton;
	}
	template<> NDI_ANDROID_API UClass* StaticClass<UNDI_Android>()
	{
		return UNDI_Android::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDI_Android);
	UNDI_Android::~UNDI_Android() {}
	void UNDI_Android_Sender::StaticRegisterNativesUNDI_Android_Sender()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDI_Android_Sender);
	UClass* Z_Construct_UClass_UNDI_Android_Sender_NoRegister()
	{
		return UNDI_Android_Sender::StaticClass();
	}
	struct Z_Construct_UClass_UNDI_Android_Sender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDI_Android_Sender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Sender_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NDI_AndroidBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDI_Android_Sender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDI_Android_Sender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDI_Android_Sender_Statics::ClassParams = {
		&UNDI_Android_Sender::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Sender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Sender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDI_Android_Sender()
	{
		if (!Z_Registration_Info_UClass_UNDI_Android_Sender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDI_Android_Sender.OuterSingleton, Z_Construct_UClass_UNDI_Android_Sender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDI_Android_Sender.OuterSingleton;
	}
	template<> NDI_ANDROID_API UClass* StaticClass<UNDI_Android_Sender>()
	{
		return UNDI_Android_Sender::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDI_Android_Sender);
	UNDI_Android_Sender::~UNDI_Android_Sender() {}
	void UNDI_Android_Found::StaticRegisterNativesUNDI_Android_Found()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDI_Android_Found);
	UClass* Z_Construct_UClass_UNDI_Android_Found_NoRegister()
	{
		return UNDI_Android_Found::StaticClass();
	}
	struct Z_Construct_UClass_UNDI_Android_Found_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Source_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDI_Android_Found_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Found_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NDI_AndroidBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_Source_Count_MetaData[] = {
		{ "Category", "NDI_Android_Found" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_Source_Count = { "Source_Count", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDI_Android_Found, Source_Count), METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_Source_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_Source_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDI_Android_Found_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_Source_Count,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDI_Android_Found_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDI_Android_Found>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDI_Android_Found_Statics::ClassParams = {
		&UNDI_Android_Found::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNDI_Android_Found_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Found_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Found_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Found_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDI_Android_Found()
	{
		if (!Z_Registration_Info_UClass_UNDI_Android_Found.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDI_Android_Found.OuterSingleton, Z_Construct_UClass_UNDI_Android_Found_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDI_Android_Found.OuterSingleton;
	}
	template<> NDI_ANDROID_API UClass* StaticClass<UNDI_Android_Found>()
	{
		return UNDI_Android_Found::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDI_Android_Found);
	UNDI_Android_Found::~UNDI_Android_Found() {}
	struct Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics
	{
		struct _Script_NDI_Android_eventDelegateNdiFound_Parms
		{
			bool bIsSuccessfull;
			UNDI_Android_Found* Out_Founds;
			FString OutCode;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Founds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_NDI_Android_eventDelegateNdiFound_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_NDI_Android_eventDelegateNdiFound_Parms), &Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_Out_Founds = { "Out_Founds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDI_Android_eventDelegateNdiFound_Parms, Out_Founds), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDI_Android_eventDelegateNdiFound_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_Out_Founds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_OutCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDI_Android, nullptr, "DelegateNdiFound__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::_Script_NDI_Android_eventDelegateNdiFound_Parms), Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics
	{
		struct _Script_NDI_Android_eventDelegateReceived_Parms
		{
			bool bIsSuccessfull;
			UTexture2D* Out_T2D;
			FString OutCode;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_T2D;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_NDI_Android_eventDelegateReceived_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_NDI_Android_eventDelegateReceived_Parms), &Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_Out_T2D = { "Out_T2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDI_Android_eventDelegateReceived_Parms, Out_T2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDI_Android_eventDelegateReceived_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_Out_T2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::NewProp_OutCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDI_Android, nullptr, "DelegateReceived__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::_Script_NDI_Android_eventDelegateReceived_Parms), Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Receive)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateReceived);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_OBJECT(UNDI_Android_Found,Z_Param_InFound);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Receive(FDelegateReceived(Z_Param_DelegateReceived),Z_Param_Out_NDI_Object,Z_Param_InFound,Z_Param_SourceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Find)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateNdiFound);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_InGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Find(FDelegateNdiFound(Z_Param_DelegateNdiFound),Z_Param_Out_NDI_Object,Z_Param_InGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_TRT2D)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_NDI_Sender);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InTRT2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object,Z_Param_Out_NDI_Sender,Z_Param_InTRT2D,Z_Param_InFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_T2D)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_NDI_Sender);
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object,Z_Param_Out_NDI_Sender,Z_Param_InTexture2D,Z_Param_InFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Sender_Release)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_NDI_Sender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Sender_Release(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object,Z_Param_Out_NDI_Sender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Sender_Create)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_Out_NDI_Sender);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Name_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Sender_Create(Z_Param_Out_OutCode,Z_Param_Out_Out_NDI_Sender,Z_Param_Out_NDI_Object,Z_Param_In_Name_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Source_Infos)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceURL);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceIP);
		P_GET_OBJECT(UNDI_Android_Found,Z_Param_InFound);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Source_Infos(Z_Param_Out_SourceName,Z_Param_Out_SourceURL,Z_Param_Out_SourceIP,Z_Param_InFound,Z_Param_SourceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Release)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Release(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Init)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Init(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object);
		P_NATIVE_END;
	}
	void UNDI_AndroidBPLibrary::StaticRegisterNativesUNDI_AndroidBPLibrary()
	{
		UClass* Class = UNDI_AndroidBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NDI_Android_Find", &UNDI_AndroidBPLibrary::execNDI_Android_Find },
			{ "NDI_Android_Init", &UNDI_AndroidBPLibrary::execNDI_Android_Init },
			{ "NDI_Android_Receive", &UNDI_AndroidBPLibrary::execNDI_Android_Receive },
			{ "NDI_Android_Release", &UNDI_AndroidBPLibrary::execNDI_Android_Release },
			{ "NDI_Android_Send_T2D", &UNDI_AndroidBPLibrary::execNDI_Android_Send_T2D },
			{ "NDI_Android_Send_TRT2D", &UNDI_AndroidBPLibrary::execNDI_Android_Send_TRT2D },
			{ "NDI_Android_Sender_Create", &UNDI_AndroidBPLibrary::execNDI_Android_Sender_Create },
			{ "NDI_Android_Sender_Release", &UNDI_AndroidBPLibrary::execNDI_Android_Sender_Release },
			{ "NDI_Android_Source_Infos", &UNDI_AndroidBPLibrary::execNDI_Android_Source_Infos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms
		{
			FScriptDelegate DelegateNdiFound;
			UNDI_Android* NDI_Object;
			FString InGroup;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateNdiFound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_DelegateNdiFound = { "DelegateNdiFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, DelegateNdiFound), Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3668302392
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, InGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_DelegateNdiFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_InGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "CPP_Default_InGroup", "Public" },
		{ "DisplayName", "NDI Android Find Sources" },
		{ "Keywords", "ndi, android, receive, video, frame, find" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Find", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms
		{
			FString OutCode;
			UNDI_Android* NDI_Object;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|System" },
		{ "Comment", "/**\n\x09* Return -1 is \"CPU doesn't support NDI\"\n\x09* Return 0 is \"Unable to initialize NDIlib\"\n\x09* Return 1 is \"Successful\"\n\x09*/" },
		{ "Description", "" },
		{ "DisplayName", "NDI Android Init" },
		{ "Keywords", "ndi, android, init, initialize" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
		{ "ToolTip", "Return -1 is \"CPU doesn't support NDI\"\nReturn 0 is \"Unable to initialize NDIlib\"\nReturn 1 is \"Successful\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Receive_Parms
		{
			FScriptDelegate DelegateReceived;
			UNDI_Android* NDI_Object;
			UNDI_Android_Found* InFound;
			int32 SourceIndex;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateReceived;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFound;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_DelegateReceived = { "DelegateReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Parms, DelegateReceived), Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1497868028
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_InFound = { "InFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Parms, InFound), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_DelegateReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_InFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NewProp_SourceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "DisplayName", "NDI Android Receive" },
		{ "Keywords", "ndi, android, receive, video, frame" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Receive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Receive_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms
		{
			FString OutCode;
			UNDI_Android* NDI_Object;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|System" },
		{ "DisplayName", "NDI Android Release" },
		{ "Keywords", "ndi, android, release, destroy, remove, uninit, uninitialize" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Release", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms
		{
			FString OutCode;
			UNDI_Android* NDI_Object;
			UNDI_Android_Sender* NDI_Sender;
			UTexture2D* InTexture2D;
			float InFPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture2D;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFPS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_NDI_Sender = { "NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_InTexture2D = { "InTexture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, InTexture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_InFPS = { "InFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, InFPS), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_InTexture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_InFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "DisplayName", "NDI Android Send Texture2D" },
		{ "Keywords", "ndi, android, send, video, frame, texture2d" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Send_T2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms
		{
			FString OutCode;
			UNDI_Android* NDI_Object;
			UNDI_Android_Sender* NDI_Sender;
			UTextureRenderTarget2D* InTRT2D;
			float InFPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTRT2D;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFPS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_NDI_Sender = { "NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_InTRT2D = { "InTRT2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, InTRT2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_InFPS = { "InFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, InFPS), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_InTRT2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_InFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "DisplayName", "NDI Android Send Texture Render Target 2D" },
		{ "Keywords", "ndi, android, send, video, frame, texture, render, target, 2d" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Send_TRT2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms
		{
			FString OutCode;
			UNDI_Android_Sender* Out_NDI_Sender;
			UNDI_Android* NDI_Object;
			FString In_Name_Stream;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_NDI_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Name_Stream;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_Out_NDI_Sender = { "Out_NDI_Sender", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, Out_NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_In_Name_Stream = { "In_Name_Stream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, In_Name_Stream), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_Out_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_In_Name_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "DisplayName", "NDI Android Create Sender" },
		{ "Keywords", "ndi, android, sender, create" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Sender_Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms
		{
			FString OutCode;
			UNDI_Android* NDI_Object;
			UNDI_Android_Sender* NDI_Sender;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Sender;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_NDI_Sender = { "NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms, NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "DisplayName", "NDI Android Release Sender" },
		{ "Keywords", "ndi, android, sender, release" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Sender_Release", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms
		{
			FString SourceName;
			FString SourceURL;
			FString SourceIP;
			UNDI_Android_Found* InFound;
			int32 SourceIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceURL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceIP;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFound;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceURL = { "SourceURL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceIP = { "SourceIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_InFound = { "InFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, InFound), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_InFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|System" },
		{ "DisplayName", "NDI Android Source Infos" },
		{ "Keywords", "ndi, android, source, infos" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Source_Infos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDI_AndroidBPLibrary);
	UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary_NoRegister()
	{
		return UNDI_AndroidBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find, "NDI_Android_Find" }, // 91229045
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init, "NDI_Android_Init" }, // 1021295118
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive, "NDI_Android_Receive" }, // 2337263355
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release, "NDI_Android_Release" }, // 325831627
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D, "NDI_Android_Send_T2D" }, // 2385259540
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D, "NDI_Android_Send_TRT2D" }, // 1915832233
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create, "NDI_Android_Sender_Create" }, // 2961661544
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release, "NDI_Android_Sender_Release" }, // 1905884189
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos, "NDI_Android_Source_Infos" }, // 2840968111
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NDI_AndroidBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDI_AndroidBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::ClassParams = {
		&UNDI_AndroidBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UNDI_AndroidBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDI_AndroidBPLibrary.OuterSingleton, Z_Construct_UClass_UNDI_AndroidBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDI_AndroidBPLibrary.OuterSingleton;
	}
	template<> NDI_ANDROID_API UClass* StaticClass<UNDI_AndroidBPLibrary>()
	{
		return UNDI_AndroidBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDI_AndroidBPLibrary);
	UNDI_AndroidBPLibrary::~UNDI_AndroidBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDI_Android, UNDI_Android::StaticClass, TEXT("UNDI_Android"), &Z_Registration_Info_UClass_UNDI_Android, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android), 1451583776U) },
		{ Z_Construct_UClass_UNDI_Android_Sender, UNDI_Android_Sender::StaticClass, TEXT("UNDI_Android_Sender"), &Z_Registration_Info_UClass_UNDI_Android_Sender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android_Sender), 174056774U) },
		{ Z_Construct_UClass_UNDI_Android_Found, UNDI_Android_Found::StaticClass, TEXT("UNDI_Android_Found"), &Z_Registration_Info_UClass_UNDI_Android_Found, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android_Found), 3038918707U) },
		{ Z_Construct_UClass_UNDI_AndroidBPLibrary, UNDI_AndroidBPLibrary::StaticClass, TEXT("UNDI_AndroidBPLibrary"), &Z_Registration_Info_UClass_UNDI_AndroidBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_AndroidBPLibrary), 2939623735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_2988343164(TEXT("/Script/NDI_Android"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
