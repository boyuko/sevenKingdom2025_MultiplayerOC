// Copyright Epic Games, Inc. All Rights Reserved.

#include "NeuronLiveLink.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Misc/MessageDialog.h"
#include "Misc/SecureHash.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "FNeuronLiveLinkModule"

void FNeuronLiveLinkModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString ThisPlugin = TEXT("NeuronLiveLink");
	FString BaseDir = IPluginManager::Get().FindPlugin(ThisPlugin)->GetBaseDir();
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/MocapApi/bin/x64/MocapApi.dll"));
#elif PLATFORM_ANDROID
	// On Android the .so is registered via PublicAdditionalLibraries in the .Build.cs,
	// which means UBT links the main game .so directly against it (it ends up as a
	// DT_NEEDED entry) and packages it into the APK's jniLibs folder. It is therefore
	// already resident by the time this module starts up, so we just need a handle to
	// it via its bare name rather than a full path.
	LibraryPath = TEXT("libMocapApi.so");
#endif

	MocapApiLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (MocapApiLibraryHandle)
	{
		UE_LOG(LogTemp, Log, TEXT("MocapApi lib loaded success."));
#if PLATFORM_WINDOWS
		FMD5Hash hash = FMD5Hash::HashFile(*LibraryPath);
		UE_LOG(LogTemp, Log, TEXT("MocapApi.dll Hash: %s"), *LexToString(hash));
#endif // PLATFORM_WINDOWS
	}
	else
	{
#if PLATFORM_WINDOWS
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load MocapApi.dll."));
#else
		UE_LOG(LogTemp, Error, TEXT("Failed to load MocapApi native library."));
#endif
	}
}

void FNeuronLiveLinkModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (MocapApiLibraryHandle)
	{
		FPlatformProcess::FreeDllHandle(MocapApiLibraryHandle);
		MocapApiLibraryHandle = nullptr;
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNeuronLiveLinkModule, NeuronLiveLink)