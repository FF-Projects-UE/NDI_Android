// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDI_Android_init() {}
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature();
	NDI_ANDROID_API UFunction* Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NDI_Android;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NDI_Android()
	{
		if (!Z_Registration_Info_UPackage__Script_NDI_Android.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NDI_Android_DelegateNdiFound__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NDI_Android_DelegateReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NDI_Android",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1579A7DA,
				0xFBB2C549,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NDI_Android.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NDI_Android.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NDI_Android(Z_Construct_UPackage__Script_NDI_Android, TEXT("/Script/NDI_Android"), Z_Registration_Info_UPackage__Script_NDI_Android, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1579A7DA, 0xFBB2C549));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
