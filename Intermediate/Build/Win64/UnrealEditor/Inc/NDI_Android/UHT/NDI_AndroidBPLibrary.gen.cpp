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
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary_NoRegister();
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature();
	NDI_ANDROID_API UScriptStruct* Z_Construct_UScriptStruct_FNDI_Android_Found_Array();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDI_Source_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NDI_Source_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDI_Source_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NDI_Source_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDI_Source_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NDI_Source_URL;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Name_MetaData[] = {
		{ "Category", "NDI_Android_Found" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Name = { "NDI_Source_Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDI_Android_Found, NDI_Source_Name), METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Metadata_MetaData[] = {
		{ "Category", "NDI_Android_Found" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Metadata = { "NDI_Source_Metadata", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDI_Android_Found, NDI_Source_Metadata), METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Metadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_URL_MetaData[] = {
		{ "Category", "NDI_Android_Found" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_URL = { "NDI_Source_URL", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDI_Android_Found, NDI_Source_URL), METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_URL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDI_Android_Found_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDI_Android_Found_Statics::NewProp_NDI_Source_URL,
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array;
class UScriptStruct* FNDI_Android_Found_Array::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDI_Android_Found_Array, Z_Construct_UPackage__Script_NDI_Android(), TEXT("NDI_Android_Found_Array"));
	}
	return Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array.OuterSingleton;
}
template<> NDI_ANDROID_API UScriptStruct* StaticStruct<FNDI_Android_Found_Array>()
{
	return FNDI_Android_Found_Array::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Array_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array_Sources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDI_Android_Found_Array>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources_Inner = { "Array_Sources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources_MetaData[] = {
		{ "Category", "NDI_Android_Found_Array" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources = { "Array_Sources", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDI_Android_Found_Array, Array_Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewProp_Array_Sources,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
		nullptr,
		&NewStructOps,
		"NDI_Android_Found_Array",
		sizeof(FNDI_Android_Found_Array),
		alignof(FNDI_Android_Found_Array),
		Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDI_Android_Found_Array()
	{
		if (!Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array.InnerSingleton, Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics
	{
		struct _Script_NDI_Android_eventDelegateNdiFound_Parms
		{
			bool bIsSuccessfull;
			FNDI_Android_Found_Array Out_Founds;
			FString OutCode;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out_Founds;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_Out_Founds = { "Out_Founds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDI_Android_eventDelegateNdiFound_Parms, Out_Founds), Z_Construct_UScriptStruct_FNDI_Android_Found_Array, METADATA_PARAMS(nullptr, 0) }; // 1457124021
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
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Find)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateNdiFound);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Find(FDelegateNdiFound(Z_Param_DelegateNdiFound),Z_Param_Out_NDI_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_TRT2D)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InTRT2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object,Z_Param_InTRT2D,Z_Param_InFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_T2D)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture2D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(Z_Param_Out_OutCode,Z_Param_Out_NDI_Object,Z_Param_InTexture2D,Z_Param_InFPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Release)
	{
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Release(Z_Param_Out_NDI_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Init)
	{
		P_GET_OBJECT_REF(UNDI_Android,Z_Param_Out_NDI_Object);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Name_Stream);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Name_Group);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Init(Z_Param_Out_NDI_Object,Z_Param_Out_OutCode,Z_Param_In_Name_Stream,Z_Param_In_Name_Group);
		P_NATIVE_END;
	}
	void UNDI_AndroidBPLibrary::StaticRegisterNativesUNDI_AndroidBPLibrary()
	{
		UClass* Class = UNDI_AndroidBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NDI_Android_Find", &UNDI_AndroidBPLibrary::execNDI_Android_Find },
			{ "NDI_Android_Init", &UNDI_AndroidBPLibrary::execNDI_Android_Init },
			{ "NDI_Android_Release", &UNDI_AndroidBPLibrary::execNDI_Android_Release },
			{ "NDI_Android_Send_T2D", &UNDI_AndroidBPLibrary::execNDI_Android_Send_T2D },
			{ "NDI_Android_Send_TRT2D", &UNDI_AndroidBPLibrary::execNDI_Android_Send_TRT2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms
		{
			FScriptDelegate DelegateNdiFound;
			UNDI_Android* NDI_Object;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateNdiFound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_DelegateNdiFound = { "DelegateNdiFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, DelegateNdiFound), Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2671311569
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_DelegateNdiFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_NDI_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
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
			UNDI_Android* NDI_Object;
			FString OutCode;
			FString In_Name_Stream;
			FString In_Name_Group;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Name_Stream;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Name_Group;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_OutCode = { "OutCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, OutCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_In_Name_Stream = { "In_Name_Stream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, In_Name_Stream), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_In_Name_Group = { "In_Name_Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, In_Name_Group), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_In_Name_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_In_Name_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|System" },
		{ "Comment", "/**\n\x09* Return -1 is \"CPU doesn't support NDI\"\n\x09* Return 0 is \"Unable to initialize NDIlib\"\n\x09* Return 1 is \"Successful\"\n\x09*/" },
		{ "CPP_Default_In_Name_Group", "Android" },
		{ "CPP_Default_In_Name_Stream", "UE5_Android" },
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
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms
		{
			UNDI_Android* NDI_Object;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_NDI_Object = { "NDI_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms, NDI_Object), Z_Construct_UClass_UNDI_Android_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers[] = {
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
			UTexture2D* InTexture2D;
			float InFPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
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
			UTextureRenderTarget2D* InTRT2D;
			float InFPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
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
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find, "NDI_Android_Find" }, // 2727662900
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init, "NDI_Android_Init" }, // 1980635496
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release, "NDI_Android_Release" }, // 3099215188
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D, "NDI_Android_Send_T2D" }, // 639111347
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D, "NDI_Android_Send_TRT2D" }, // 3401883349
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FNDI_Android_Found_Array::StaticStruct, Z_Construct_UScriptStruct_FNDI_Android_Found_Array_Statics::NewStructOps, TEXT("NDI_Android_Found_Array"), &Z_Registration_Info_UScriptStruct_NDI_Android_Found_Array, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDI_Android_Found_Array), 1457124021U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDI_Android, UNDI_Android::StaticClass, TEXT("UNDI_Android"), &Z_Registration_Info_UClass_UNDI_Android, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android), 1451583776U) },
		{ Z_Construct_UClass_UNDI_Android_Found, UNDI_Android_Found::StaticClass, TEXT("UNDI_Android_Found"), &Z_Registration_Info_UClass_UNDI_Android_Found, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android_Found), 75299201U) },
		{ Z_Construct_UClass_UNDI_AndroidBPLibrary, UNDI_AndroidBPLibrary::StaticClass, TEXT("UNDI_AndroidBPLibrary"), &Z_Registration_Info_UClass_UNDI_AndroidBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_AndroidBPLibrary), 717165570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_441048324(TEXT("/Script/NDI_Android"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
