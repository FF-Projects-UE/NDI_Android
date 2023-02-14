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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Found();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Found_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Receiver();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Receiver_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Sender();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Sender_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_AndroidBPLibrary_NoRegister();
	NDI_ANDROID_API UEnum* Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse();
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NDI_Android();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDI_KVM_Mouse;
	static UEnum* ENDI_KVM_Mouse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDI_KVM_Mouse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDI_KVM_Mouse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse, Z_Construct_UPackage__Script_NDI_Android(), TEXT("ENDI_KVM_Mouse"));
		}
		return Z_Registration_Info_UEnum_ENDI_KVM_Mouse.OuterSingleton;
	}
	template<> NDI_ANDROID_API UEnum* StaticEnum<ENDI_KVM_Mouse>()
	{
		return ENDI_KVM_Mouse_StaticEnum();
	}
	struct Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::Enumerators[] = {
		{ "ENDI_KVM_Mouse::Mouse_Left", (int64)ENDI_KVM_Mouse::Mouse_Left },
		{ "ENDI_KVM_Mouse::Mouse_Middle", (int64)ENDI_KVM_Mouse::Mouse_Middle },
		{ "ENDI_KVM_Mouse::Mouse_Right", (int64)ENDI_KVM_Mouse::Mouse_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
		{ "Mouse_Left.DisplayName", "Anonymous" },
		{ "Mouse_Left.Name", "ENDI_KVM_Mouse::Mouse_Left" },
		{ "Mouse_Middle.DisplayName", "Username" },
		{ "Mouse_Middle.Name", "ENDI_KVM_Mouse::Mouse_Middle" },
		{ "Mouse_Right.DisplayName", "Certificate" },
		{ "Mouse_Right.Name", "ENDI_KVM_Mouse::Mouse_Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NDI_Android,
		nullptr,
		"ENDI_KVM_Mouse",
		"ENDI_KVM_Mouse",
		Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse()
	{
		if (!Z_Registration_Info_UEnum_ENDI_KVM_Mouse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDI_KVM_Mouse.InnerSingleton, Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDI_KVM_Mouse.InnerSingleton;
	}
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
	void UNDI_Android_Receiver::StaticRegisterNativesUNDI_Android_Receiver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDI_Android_Receiver);
	UClass* Z_Construct_UClass_UNDI_Android_Receiver_NoRegister()
	{
		return UNDI_Android_Receiver::StaticClass();
	}
	struct Z_Construct_UClass_UNDI_Android_Receiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDI_Android_Receiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDI_Android_Receiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NDI_AndroidBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDI_Android_Receiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDI_Android_Receiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDI_Android_Receiver_Statics::ClassParams = {
		&UNDI_Android_Receiver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNDI_Android_Receiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDI_Android_Receiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDI_Android_Receiver()
	{
		if (!Z_Registration_Info_UClass_UNDI_Android_Receiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDI_Android_Receiver.OuterSingleton, Z_Construct_UClass_UNDI_Android_Receiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDI_Android_Receiver.OuterSingleton;
	}
	template<> NDI_ANDROID_API UClass* StaticClass<UNDI_Android_Receiver>()
	{
		return UNDI_Android_Receiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDI_Android_Receiver);
	UNDI_Android_Receiver::~UNDI_Android_Receiver() {}
	struct Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics
	{
		struct _Script_NDI_Android_eventDelegateNdiFound_Parms
		{
			bool bIsSuccessfull;
			UNDI_Android_Found* Out_Founds;
			FString Out_Code;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Founds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NDI_Android_eventDelegateNdiFound_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_Out_Founds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature_Statics::NewProp_Out_Code,
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
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_KVM_Mouse_Position)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_In_NDI_Receiver);
		P_GET_STRUCT(FVector2f,Z_Param_In_Mouse_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Position(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Receiver,Z_Param_In_Mouse_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_KVM_Mouse_Release)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_In_NDI_Receiver);
		P_GET_ENUM(ENDI_KVM_Mouse,Z_Param_MouseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Release(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Receiver,ENDI_KVM_Mouse(Z_Param_MouseButton));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_KVM_Mouse_Send)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_In_NDI_Receiver);
		P_GET_ENUM(ENDI_KVM_Mouse,Z_Param_MouseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_KVM_Mouse_Send(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Receiver,ENDI_KVM_Mouse(Z_Param_MouseButton));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Receive_Audio)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_In_NDI_Receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Receive_Audio(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Receive_Frames)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Out_Frame);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_In_NDI_Receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Receive_Frames(Z_Param_Out_Out_Frame,Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Receiver_Release)
	{
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_In_NDI_Receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Receiver_Release(Z_Param_Out_In_NDI_Receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Receiver_Create)
	{
		P_GET_OBJECT_REF(UNDI_Android_Receiver,Z_Param_Out_Out_Receiver);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Found,Z_Param_Out_In_NDI_Found);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_Source_Index);
		P_GET_UBOOL(Z_Param_bAllowVideoField);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Receiver_Create(Z_Param_Out_Out_Receiver,Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Found,Z_Param_In_Source_Index,Z_Param_bAllowVideoField);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Find)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateNdiFound);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_ExtraIps);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Group);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Find(FDelegateNdiFound(Z_Param_DelegateNdiFound),Z_Param_In_ExtraIps,Z_Param_In_Group);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_MT)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_In_NDI_Sender);
		P_GET_OBJECT(UMediaTexture,Z_Param_In_MT);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_MT(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Sender,Z_Param_In_MT,Z_Param_In_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_TRT2D)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_In_NDI_Sender);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_In_TRT2D);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_TRT2D(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Sender,Z_Param_In_TRT2D,Z_Param_In_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_T2D)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_In_NDI_Sender);
		P_GET_OBJECT(UTexture2D,Z_Param_In_Texture2D);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_T2D(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Sender,Z_Param_In_Texture2D,Z_Param_In_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Sender_Release)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_In_NDI_Sender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Sender_Release(Z_Param_Out_Out_Code,Z_Param_Out_In_NDI_Sender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Sender_Create)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_OBJECT_REF(UNDI_Android_Sender,Z_Param_Out_Out_NDI_Sender);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_Name_Stream);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Sender_Create(Z_Param_Out_Out_Code,Z_Param_Out_Out_NDI_Sender,Z_Param_In_Name_Stream,Z_Param_In_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Send_Rate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Send_Rate(Z_Param_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Source_Infos)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceIP);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceURL);
		P_GET_OBJECT(UNDI_Android_Found,Z_Param_In_Found);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_Source_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNDI_AndroidBPLibrary::NDI_Android_Source_Infos(Z_Param_Out_SourceIP,Z_Param_Out_SourceName,Z_Param_Out_SourceURL,Z_Param_In_Found,Z_Param_In_Source_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Release)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDI_AndroidBPLibrary::execNDI_Android_Init)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNDI_AndroidBPLibrary::NDI_Android_Init(Z_Param_Out_Out_Code);
		P_NATIVE_END;
	}
	void UNDI_AndroidBPLibrary::StaticRegisterNativesUNDI_AndroidBPLibrary()
	{
		UClass* Class = UNDI_AndroidBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NDI_Android_Find", &UNDI_AndroidBPLibrary::execNDI_Android_Find },
			{ "NDI_Android_Init", &UNDI_AndroidBPLibrary::execNDI_Android_Init },
			{ "NDI_Android_KVM_Mouse_Position", &UNDI_AndroidBPLibrary::execNDI_Android_KVM_Mouse_Position },
			{ "NDI_Android_KVM_Mouse_Release", &UNDI_AndroidBPLibrary::execNDI_Android_KVM_Mouse_Release },
			{ "NDI_Android_KVM_Mouse_Send", &UNDI_AndroidBPLibrary::execNDI_Android_KVM_Mouse_Send },
			{ "NDI_Android_Receive_Audio", &UNDI_AndroidBPLibrary::execNDI_Android_Receive_Audio },
			{ "NDI_Android_Receive_Frames", &UNDI_AndroidBPLibrary::execNDI_Android_Receive_Frames },
			{ "NDI_Android_Receiver_Create", &UNDI_AndroidBPLibrary::execNDI_Android_Receiver_Create },
			{ "NDI_Android_Receiver_Release", &UNDI_AndroidBPLibrary::execNDI_Android_Receiver_Release },
			{ "NDI_Android_Release", &UNDI_AndroidBPLibrary::execNDI_Android_Release },
			{ "NDI_Android_Send_MT", &UNDI_AndroidBPLibrary::execNDI_Android_Send_MT },
			{ "NDI_Android_Send_Rate", &UNDI_AndroidBPLibrary::execNDI_Android_Send_Rate },
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
			FString In_ExtraIps;
			FString In_Group;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateNdiFound;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_ExtraIps;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_DelegateNdiFound = { "DelegateNdiFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, DelegateNdiFound), Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1512335300
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_In_ExtraIps = { "In_ExtraIps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, In_ExtraIps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_In_Group = { "In_Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms, In_Group), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_DelegateNdiFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_In_ExtraIps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NewProp_In_Group,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "CPP_Default_In_Group", "Public" },
		{ "DisplayName", "NDI Android Find Sources" },
		{ "Keywords", "ndi, android, receive, receiver, source, find, video, frame" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Find", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Find_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find_Statics::Function_MetaDataParams)) };
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
			FString Out_Code;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Init_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init_Statics::NewProp_Out_Code,
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
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms
		{
			FString Out_Code;
			UNDI_Android_Receiver* In_NDI_Receiver;
			FVector2f In_Mouse_Position;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Receiver;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Mouse_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_In_NDI_Receiver = { "In_NDI_Receiver", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms, In_NDI_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_In_Mouse_Position = { "In_Mouse_Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms, In_Mouse_Position), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_In_NDI_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_In_Mouse_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|KVM" },
		{ "DisplayName", "NDI Android Send Mouse Position" },
		{ "Keywords", "ndi, android, kvm, mouse, position" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_KVM_Mouse_Position", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Position_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms
		{
			FString Out_Code;
			UNDI_Android_Receiver* In_NDI_Receiver;
			ENDI_KVM_Mouse MouseButton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Receiver;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseButton_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseButton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_In_NDI_Receiver = { "In_NDI_Receiver", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms, In_NDI_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_MouseButton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms, MouseButton), Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse, METADATA_PARAMS(nullptr, 0) }; // 3644143910
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_In_NDI_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_MouseButton_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_MouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|KVM" },
		{ "DisplayName", "NDI Android Release Mouse Button" },
		{ "Keywords", "ndi, android, kvm, mouse, release" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_KVM_Mouse_Release", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Release_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms
		{
			FString Out_Code;
			UNDI_Android_Receiver* In_NDI_Receiver;
			ENDI_KVM_Mouse MouseButton;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Receiver;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseButton_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseButton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_In_NDI_Receiver = { "In_NDI_Receiver", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms, In_NDI_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_MouseButton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms, MouseButton), Z_Construct_UEnum_NDI_Android_ENDI_KVM_Mouse, METADATA_PARAMS(nullptr, 0) }; // 3644143910
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_In_NDI_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_MouseButton_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_MouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|KVM" },
		{ "DisplayName", "NDI Android Send Mouse Button" },
		{ "Keywords", "ndi, android, kvm, mouse, send" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_KVM_Mouse_Send", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::NDI_AndroidBPLibrary_eventNDI_Android_KVM_Mouse_Send_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Receive_Audio_Parms
		{
			FString Out_Code;
			UNDI_Android_Receiver* In_NDI_Receiver;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Receiver;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Audio_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_In_NDI_Receiver = { "In_NDI_Receiver", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Audio_Parms, In_NDI_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Receive_Audio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Audio_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_In_NDI_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "DisplayName", "NDI Android Receive Audio (Exprimental)" },
		{ "Keywords", "ndi, android, receive, receiver, video, frame" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Receive_Audio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Receive_Audio_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms
		{
			UTexture2D* Out_Frame;
			FString Out_Code;
			UNDI_Android_Receiver* In_NDI_Receiver;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Frame;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Receiver;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_Out_Frame = { "Out_Frame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms, Out_Frame), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_In_NDI_Receiver = { "In_NDI_Receiver", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms, In_NDI_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_Out_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_In_NDI_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "DisplayName", "NDI Android Receive Frames" },
		{ "Keywords", "ndi, android, receive, receiver, video, frame" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Receive_Frames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Receive_Frames_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms
		{
			UNDI_Android_Receiver* Out_Receiver;
			FString Out_Code;
			UNDI_Android_Found* In_NDI_Found;
			int32 In_Source_Index;
			bool bAllowVideoField;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Receiver;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Found;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_Source_Index;
		static void NewProp_bAllowVideoField_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVideoField;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_Out_Receiver = { "Out_Receiver", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms, Out_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_In_NDI_Found = { "In_NDI_Found", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms, In_NDI_Found), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_In_Source_Index = { "In_Source_Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms, In_Source_Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_bAllowVideoField_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms*)Obj)->bAllowVideoField = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_bAllowVideoField = { "bAllowVideoField", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_bAllowVideoField_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_Out_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_In_NDI_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_In_Source_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_bAllowVideoField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "CPP_Default_bAllowVideoField", "false" },
		{ "CPP_Default_In_Source_Index", "-1" },
		{ "DisplayName", "NDI Android Receiver Create" },
		{ "Keywords", "ndi, android, receive, receiver, start, create" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Receiver_Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Create_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Release_Parms
		{
			UNDI_Android_Receiver* In_NDI_Receiver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Receiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::NewProp_In_NDI_Receiver = { "In_NDI_Receiver", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Release_Parms, In_NDI_Receiver), Z_Construct_UClass_UNDI_Android_Receiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::NewProp_In_NDI_Receiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "DisplayName", "NDI Android Receiver Release" },
		{ "Keywords", "ndi, android, receive, receiver, stop, release, video, frame" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Receiver_Release", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Receiver_Release_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers[] = {
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Release", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Release_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms
		{
			FString Out_Code;
			UNDI_Android_Sender* In_NDI_Sender;
			UMediaTexture* In_MT;
			int32 In_FPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_MT;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_FPS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_In_NDI_Sender = { "In_NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms, In_NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_In_MT = { "In_MT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms, In_MT), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_In_FPS = { "In_FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms, In_FPS), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_In_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_In_MT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_In_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "CPP_Default_In_FPS", "30" },
		{ "DisplayName", "NDI Android Send Media Texture" },
		{ "Keywords", "ndi, android, send, video, frame, texture, media" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Send_MT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Send_MT_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Send_Rate_Parms
		{
			int32 FPS;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FPS;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_Rate_Parms, FPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_Rate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|System" },
		{ "DisplayName", "NDI Android Send Rate" },
		{ "Keywords", "ndi, android, send, sender, rate" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDI_AndroidBPLibrary, nullptr, "NDI_Android_Send_Rate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::NDI_AndroidBPLibrary_eventNDI_Android_Send_Rate_Parms), Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics
	{
		struct NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms
		{
			FString Out_Code;
			UNDI_Android_Sender* In_NDI_Sender;
			UTexture2D* In_Texture2D;
			int32 In_FPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Texture2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_FPS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_In_NDI_Sender = { "In_NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, In_NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_In_Texture2D = { "In_Texture2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, In_Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_In_FPS = { "In_FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms, In_FPS), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Send_T2D_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_In_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_In_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_In_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "CPP_Default_In_FPS", "30" },
		{ "DisplayName", "NDI Android Send Texture2D" },
		{ "Keywords", "ndi, android, send, video, frame, texture, 2d" },
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
			FString Out_Code;
			UNDI_Android_Sender* In_NDI_Sender;
			UTextureRenderTarget2D* In_TRT2D;
			int32 In_FPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Sender;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_TRT2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_FPS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_In_NDI_Sender = { "In_NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, In_NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_In_TRT2D = { "In_TRT2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, In_TRT2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_In_FPS = { "In_FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms, In_FPS), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Send_TRT2D_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_In_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_In_TRT2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_In_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "CPP_Default_In_FPS", "30" },
		{ "DisplayName", "NDI Android Send Texture Render Target 2D" },
		{ "Keywords", "ndi, android, send, video, frame, texture, 2d, render, target" },
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
			FString Out_Code;
			UNDI_Android_Sender* Out_NDI_Sender;
			FString In_Name_Stream;
			int32 In_Port;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_NDI_Sender;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_Name_Stream;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_Out_NDI_Sender = { "Out_NDI_Sender", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, Out_NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_In_Name_Stream = { "In_Name_Stream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, In_Name_Stream), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_In_Port = { "In_Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms, In_Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Create_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_Out_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_In_Name_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_In_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "Comment", "/**\n\x09* @param In_Port use 1522 or 5960\n\x09*/" },
		{ "CPP_Default_In_Name_Stream", "UE5_Android_NDI" },
		{ "CPP_Default_In_Port", "1522" },
		{ "DisplayName", "NDI Android Sender Create" },
		{ "Keywords", "ndi, android, send, sender, start, create, video, frame" },
		{ "ModuleRelativePath", "Public/NDI_AndroidBPLibrary.h" },
		{ "ToolTip", "@param In_Port use 1522 or 5960" },
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
			FString Out_Code;
			UNDI_Android_Sender* In_NDI_Sender;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Sender;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_In_NDI_Sender = { "In_NDI_Sender", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms, In_NDI_Sender), Z_Construct_UClass_UNDI_Android_Sender_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NDI_AndroidBPLibrary_eventNDI_Android_Sender_Release_Parms), &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_In_NDI_Sender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Send" },
		{ "DisplayName", "NDI Android Sender Release" },
		{ "Keywords", "ndi, android, send, sender, stop, release, video, frame" },
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
			FString SourceIP;
			FString SourceName;
			FString SourceURL;
			UNDI_Android_Found* In_Found;
			int32 In_Source_Index;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceIP;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceURL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Found;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_Source_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceIP = { "SourceIP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceURL = { "SourceURL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, SourceURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_In_Found = { "In_Found", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, In_Found), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_In_Source_Index = { "In_Source_Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NDI_AndroidBPLibrary_eventNDI_Android_Source_Infos_Parms, In_Source_Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_SourceURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_In_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos_Statics::NewProp_In_Source_Index,
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
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Find, "NDI_Android_Find" }, // 1893408504
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Init, "NDI_Android_Init" }, // 643413139
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Position, "NDI_Android_KVM_Mouse_Position" }, // 3775737923
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Release, "NDI_Android_KVM_Mouse_Release" }, // 2281603277
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_KVM_Mouse_Send, "NDI_Android_KVM_Mouse_Send" }, // 220951594
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Audio, "NDI_Android_Receive_Audio" }, // 166675824
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receive_Frames, "NDI_Android_Receive_Frames" }, // 1424599975
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Create, "NDI_Android_Receiver_Create" }, // 1033854337
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Receiver_Release, "NDI_Android_Receiver_Release" }, // 3722543609
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Release, "NDI_Android_Release" }, // 2380939505
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_MT, "NDI_Android_Send_MT" }, // 1397395895
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_Rate, "NDI_Android_Send_Rate" }, // 4034389062
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_T2D, "NDI_Android_Send_T2D" }, // 4111294135
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Send_TRT2D, "NDI_Android_Send_TRT2D" }, // 2461809212
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Create, "NDI_Android_Sender_Create" }, // 4086689719
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Sender_Release, "NDI_Android_Sender_Release" }, // 3786986968
		{ &Z_Construct_UFunction_UNDI_AndroidBPLibrary_NDI_Android_Source_Infos, "NDI_Android_Source_Infos" }, // 2530200141
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::EnumInfo[] = {
		{ ENDI_KVM_Mouse_StaticEnum, TEXT("ENDI_KVM_Mouse"), &Z_Registration_Info_UEnum_ENDI_KVM_Mouse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3644143910U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDI_Android_Sender, UNDI_Android_Sender::StaticClass, TEXT("UNDI_Android_Sender"), &Z_Registration_Info_UClass_UNDI_Android_Sender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android_Sender), 174056774U) },
		{ Z_Construct_UClass_UNDI_Android_Found, UNDI_Android_Found::StaticClass, TEXT("UNDI_Android_Found"), &Z_Registration_Info_UClass_UNDI_Android_Found, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android_Found), 3038918707U) },
		{ Z_Construct_UClass_UNDI_Android_Receiver, UNDI_Android_Receiver::StaticClass, TEXT("UNDI_Android_Receiver"), &Z_Registration_Info_UClass_UNDI_Android_Receiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_Android_Receiver), 3570776348U) },
		{ Z_Construct_UClass_UNDI_AndroidBPLibrary, UNDI_AndroidBPLibrary::StaticClass, TEXT("UNDI_AndroidBPLibrary"), &Z_Registration_Info_UClass_UNDI_AndroidBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDI_AndroidBPLibrary), 3053869449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_1802245216(TEXT("/Script/NDI_Android"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_NDI_Android_Source_NDI_Android_Public_NDI_AndroidBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
