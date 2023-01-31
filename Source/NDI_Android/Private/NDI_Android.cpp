// Copyright Epic Games, Inc. All Rights Reserved.

#include "NDI_Android.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FNDI_AndroidModule"

void FNDI_AndroidModule::StartupModule()
{

#ifdef _WIN64
		const FString DLL_Path = FPaths::Combine(*IPluginManager::Get().FindPlugin("NDI_ANDROID")->GetBaseDir(), TEXT("Source/NDI_Android/ThirdParty/NDI/Windows/lib/Processing.NDI.Lib.Advanced.x64.dll"));
		NDI_Android_Handle = FPlatformProcess::GetDllHandle(*DLL_Path);

		if (NDI_Android_Handle != nullptr)
		{
			UE_LOG(LogTemp, Log, TEXT("Processing.NDI.Lib.Advanced.x64.dll loaded successfully!"));
		}

		else
		{
			UE_LOG(LogTemp, Fatal, TEXT("Processing.NDI.Lib.Advanced.x64.dll failed to load!"));
		}
#endif
	
}

void FNDI_AndroidModule::ShutdownModule()
{
#ifdef _WIN64
	FPlatformProcess::FreeDllHandle(NDI_Android_Handle);
	NDI_Android_Handle = nullptr;
#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNDI_AndroidModule, NDI_Android)