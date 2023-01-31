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
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary_NoRegister();
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
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Init(Z_Param_Out_NDI_Object,Z_Param_Out_OutCode,Z_Param_In_Name_Stream,Z_Param_In_Name_Group);
		P_NATIVE_END;
	}
	void UNDI_AndroidBPLibrary::StaticRegisterNativesUNDI_AndroidBPLibrary()
	{
		UClass* Class = UNDI_AndroidBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NDI_Android_Init", &UNDI_AndroidBPLibrary::execNDI_Android_Init },
			{ "NDI_Android_Release", &UNDI_AndroidBPLibrary::execNDI_Android_Release },
			{ "NDI_Android_Send_T2D", &UNDI_AndroidBPLibrary::execNDI_Android_Send_T2D },
			{ "NDI_Android_Send_TRT2D", &UNDI_AndroidBPLibrary::execNDI_Android_Send_TRT2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms
		{
			UNDI_Android* NDI_Object;
			FString OutCode;
			FString In_Name_Stream;
			FString In_Name_Group;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutCode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Name_Stream;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Name_Group;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_NDI_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_OutCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_In_Name_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_In_Name_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android" },
		{ "CPP_Default_In_Name_Group", "Android" },
		{ "CPP_Default_In_Name_Stream", "UE5_Android" },
		{ "DisplayName", "NDI Android Init" },
		{ "Keywords", "ndi, android, init, initialize" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
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
		{ "Category", "NDI_Android" },
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
		{ "Category", "NDI_Android" },
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
		{ "Category", "NDI_Android" },
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
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init, "NDI_Android_Init" }, // 3064306617
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release, "NDI_Android_Release" }, // 3288285424
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D, "NDI_Android_Send_T2D" }, // 1674719177
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D, "NDI_Android_Send_TRT2D" }, // 4159246605
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
		{ Z_Construct_UClass_UNDI_AndroidBPLibrary, UNDI_AndroidBPLibrary::StaticClass, TEXT("UNDI_AndroidBPLibrary"), &Z_Registration_Info_UClass_UNDI_AndroidBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_AndroidBPLibrary), 1957319231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_2334192321(TEXT("/Script/NDI_Android"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
