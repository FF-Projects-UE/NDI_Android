// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDI_Android/Public/AC_NDI_Receiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_NDI_Receiver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UAC_NDI_Receiver();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UAC_NDI_Receiver_NoRegister();
	NDI_ANDROID_API UClass* Z_Construct_UClass_UNDI_Android_Found_NoRegister();
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NDI_Android();
// End Cross Module References
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
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
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
	DEFINE_FUNCTION(UAC_NDI_Receiver::execCreate_Receiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Create_Receiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAC_NDI_Receiver::execReceive_Frames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Receive_Frames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAC_NDI_Receiver::execNDI_Android_Receive_Stop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NDI_Android_Receive_Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAC_NDI_Receiver::execNDI_Android_Receive_Start)
	{
		P_GET_OBJECT(UNDI_Android_Found,Z_Param_In_NDI_Found);
		P_GET_PROPERTY(FIntProperty,Z_Param_In_Source_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NDI_Android_Receive_Start(Z_Param_In_NDI_Found,Z_Param_In_Source_Index);
		P_NATIVE_END;
	}
	void UAC_NDI_Receiver::StaticRegisterNativesUAC_NDI_Receiver()
	{
		UClass* Class = UAC_NDI_Receiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create_Receiver", &UAC_NDI_Receiver::execCreate_Receiver },
			{ "NDI_Android_Receive_Start", &UAC_NDI_Receiver::execNDI_Android_Receive_Start },
			{ "NDI_Android_Receive_Stop", &UAC_NDI_Receiver::execNDI_Android_Receive_Stop },
			{ "Receive_Frames", &UAC_NDI_Receiver::execReceive_Frames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics
	{
		struct AC_NDI_Receiver_eventCreate_Receiver_Parms
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
	void Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AC_NDI_Receiver_eventCreate_Receiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_NDI_Receiver_eventCreate_Receiver_Parms), &Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_NDI_Receiver, nullptr, "Create_Receiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::AC_NDI_Receiver_eventCreate_Receiver_Parms), Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics
	{
		struct AC_NDI_Receiver_eventNDI_Android_Receive_Start_Parms
		{
			UNDI_Android_Found* In_NDI_Found;
			int32 In_Source_Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_NDI_Found;
		static const UECodeGen_Private::FIntPropertyParams NewProp_In_Source_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_In_NDI_Found = { "In_NDI_Found", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_NDI_Receiver_eventNDI_Android_Receive_Start_Parms, In_NDI_Found), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_In_Source_Index = { "In_Source_Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AC_NDI_Receiver_eventNDI_Android_Receive_Start_Parms, In_Source_Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AC_NDI_Receiver_eventNDI_Android_Receive_Start_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_NDI_Receiver_eventNDI_Android_Receive_Start_Parms), &Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_In_NDI_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_In_Source_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "CPP_Default_In_Source_Index", "-1" },
		{ "DisplayName", "NDI Android Receive Start" },
		{ "Keywords", "ndi, android, receive, video, frame, start" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_NDI_Receiver, nullptr, "NDI_Android_Receive_Start", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::AC_NDI_Receiver_eventNDI_Android_Receive_Start_Parms), Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI_Android|Receive" },
		{ "DisplayName", "NDI Android Receive Stop" },
		{ "Keywords", "ndi, android, receive, video, frame, stop" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_NDI_Receiver, nullptr, "NDI_Android_Receive_Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics
	{
		struct AC_NDI_Receiver_eventReceive_Frames_Parms
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
	void Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AC_NDI_Receiver_eventReceive_Frames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AC_NDI_Receiver_eventReceive_Frames_Parms), &Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_NDI_Receiver, nullptr, "Receive_Frames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::AC_NDI_Receiver_eventReceive_Frames_Parms), Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_NDI_Receiver);
	UClass* Z_Construct_UClass_UAC_NDI_Receiver_NoRegister()
	{
		return UAC_NDI_Receiver::StaticClass();
	}
	struct Z_Construct_UClass_UAC_NDI_Receiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Received_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Received_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Receive_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Receive_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDI_Found_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NDI_Found;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Source_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_NDI_Receiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NDI_Android,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAC_NDI_Receiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_NDI_Receiver_Create_Receiver, "Create_Receiver" }, // 2147230725
		{ &Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Start, "NDI_Android_Receive_Start" }, // 4274344009
		{ &Z_Construct_UFunction_UAC_NDI_Receiver_NDI_Android_Receive_Stop, "NDI_Android_Receive_Stop" }, // 2430609845
		{ &Z_Construct_UFunction_UAC_NDI_Receiver_Receive_Frames, "Receive_Frames" }, // 413184655
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_NDI_Receiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_NDI_Receiver.h" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Received_Frame_MetaData[] = {
		{ "Category", "AC_NDI_Receiver" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Received_Frame = { "Received_Frame", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_NDI_Receiver, Received_Frame), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Received_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Received_Frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Receive_Rate_MetaData[] = {
		{ "Category", "AC_NDI_Receiver" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
		{ "ToolTip", "Use seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Receive_Rate = { "Receive_Rate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_NDI_Receiver, Receive_Rate), METADATA_PARAMS(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Receive_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Receive_Rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_NDI_Found_MetaData[] = {
		{ "Category", "AC_NDI_Receiver" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_NDI_Found = { "NDI_Found", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_NDI_Receiver, NDI_Found), Z_Construct_UClass_UNDI_Android_Found_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_NDI_Found_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_NDI_Found_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Source_Index_MetaData[] = {
		{ "Category", "AC_NDI_Receiver" },
		{ "ModuleRelativePath", "Public/AC_NDI_Receiver.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Source_Index = { "Source_Index", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAC_NDI_Receiver, Source_Index), METADATA_PARAMS(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Source_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Source_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_NDI_Receiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Received_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Receive_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_NDI_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_NDI_Receiver_Statics::NewProp_Source_Index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_NDI_Receiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_NDI_Receiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_NDI_Receiver_Statics::ClassParams = {
		&UAC_NDI_Receiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAC_NDI_Receiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAC_NDI_Receiver_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAC_NDI_Receiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_NDI_Receiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAC_NDI_Receiver()
	{
		if (!Z_Registration_Info_UClass_UAC_NDI_Receiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_NDI_Receiver.OuterSingleton, Z_Construct_UClass_UAC_NDI_Receiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAC_NDI_Receiver.OuterSingleton;
	}
	template<> NDI_ANDROID_API UClass* StaticClass<UAC_NDI_Receiver>()
	{
		return UAC_NDI_Receiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_NDI_Receiver);
	UAC_NDI_Receiver::~UAC_NDI_Receiver() {}
	struct Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAC_NDI_Receiver, UAC_NDI_Receiver::StaticClass, TEXT("UAC_NDI_Receiver"), &Z_Registration_Info_UClass_UAC_NDI_Receiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_NDI_Receiver), 1282491374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_1300670915(TEXT("/Script/NDI_Android"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_NDI_Android_Source_NDI_Android_Public_AC_NDI_Receiver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
