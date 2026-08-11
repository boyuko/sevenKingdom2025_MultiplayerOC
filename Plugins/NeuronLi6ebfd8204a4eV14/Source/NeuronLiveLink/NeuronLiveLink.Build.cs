// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class NeuronLiveLink : ModuleRules
{

    public NeuronLiveLink(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        //if (!System.IO.Directory.Exists(System.IO.Path.Combine(ModuleDirectory, @"Private")))
        if (!System.IO.File.Exists(System.IO.Path.Combine(ModuleDirectory, @"Private", @"NeuronLiveLink.cpp")))
        {
            bUsePrecompiled = true;
        }
        else
        {
            bPrecompile = true;
        }

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
            }
            );
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
                Path.Combine(ModuleDirectory, "../ThirdParty/MocapApi", "include"),
            }
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "LiveLinkInterface",
                "LiveLink",
                "Networking",
                "AnimGraphRuntime",
                // ... add other public dependencies that you statically link with here ...
            }
            );

        if (Target.Version.MajorVersion > 4)
        {
            PublicDependencyModuleNames.Add("LiveLinkAnimationCore");
        }

        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "Sockets",
                "InputCore",
                "Projects",
				// ... add private dependencies that you statically link with here ...	
			}
            );
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);


        /*
        // Add the import library
        string lib_folder_path = Path.Combine(ModuleDirectory, "../ThirdParty/MocapApi", "bin/x64");
        PublicAdditionalLibraries.Add(Path.Combine(lib_folder_path, "MocapApi.lib"));

        // Delay-load the DLL, so we can load it from the right place first
        PublicDelayLoadDLLs.Add("MocapApi.dll");

        // Runtime Dependencies for Project Package
        RuntimeDependencies.Add(Path.Combine(lib_folder_path, "MocapApi.dll"));
        */
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string lib_folder_path = Path.Combine(
                ModuleDirectory,
                "../ThirdParty/MocapApi",
                "bin/x64"
            );

            // Import library
            PublicAdditionalLibraries.Add(
                Path.Combine(lib_folder_path, "MocapApi.lib")
            );

            // Delay-load DLL
            PublicDelayLoadDLLs.Add("MocapApi.dll");

            // Runtime Dependencies
            RuntimeDependencies.Add(
                Path.Combine(lib_folder_path, "MocapApi.dll")
            );
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            string lib_folder_path = Path.Combine(
                ModuleDirectory,
                "../ThirdParty/MocapApi",
                "bin/android/arm64-v8a"
            );

            string libMocapApi = Path.Combine(
                lib_folder_path,
                "libMocapApi.so"
            );

            // Link Android shared library so the linker can resolve MCPGetGenericInterface
            // at link time. NOTE: this alone is NOT enough to guarantee the .so actually
            // ends up inside the packaged APK's jniLibs under UE5's Gradle pipeline - the
            // APL xml below has an explicit <resourceCopies> step that force-copies it in
            // (without that, you'll link fine but crash at startup on-device with
            // java.lang.UnsatisfiedLinkError: library "libMocapApi.so" not found).
            PublicAdditionalLibraries.Add(libMocapApi);

            // Register an APL (Android Plugin Language) xml: adds the manifest permissions
            // MocapApi needs to talk to Axis Studio over the LAN, AND force-copies the .so
            // into the APK (see NOTE above).
            string APLFilePath = Path.Combine(ModuleDirectory, "NeuronLiveLink_APL.xml");
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", APLFilePath);
        }
    }
}
