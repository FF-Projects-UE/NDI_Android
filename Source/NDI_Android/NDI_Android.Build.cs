// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class NDI_Android : ModuleRules
{
	public NDI_Android(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        if (UnrealTargetPlatform.Win64 == Target.Platform)
        {
            string Location_NDI = "../Source/NDI_Android/ThirdParty/NDI/Windows/include";
            PrivateIncludePaths.Add(Location_NDI);

            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "NDI", "Windows", "lib", "Processing.NDI.Lib.Advanced.x64.lib"));
            RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "ThirdParty", "NDI", "Windows", "lib", "Processing.NDI.Lib.Advanced.x64.dll"));
            PublicDelayLoadDLLs.Add("Processing.NDI.Lib.Advanced.x64.dll");
            
			PublicDefinitions.Add("NDI_SDK_ENABLED");
        }

        if (UnrealTargetPlatform.Android == Target.Platform)
        {
            string Location_NDI = "../Source/NDI_Android/ThirdParty/NDI/Android/include";
            PrivateIncludePaths.Add(Location_NDI);

            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "ThirdParty", "NDI", "Android", "lib", "arm64-v8a", "libndi.so"));

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "NDI_UPL_Android.xml"));

            PublicDefinitions.Add("NDI_SDK_ENABLED");
        }


        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "Projects",
                "MediaUtils",
                "MediaAssets"
				
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
