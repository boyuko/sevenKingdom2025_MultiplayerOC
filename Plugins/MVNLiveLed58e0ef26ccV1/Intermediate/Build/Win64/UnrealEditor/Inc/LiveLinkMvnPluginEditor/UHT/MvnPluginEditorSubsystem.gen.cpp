// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPluginEditor/Private/MvnPluginEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMvnPluginEditorSubsystem() {}

// Begin Cross Module References
LIVELINKMVNPLUGINEDITOR_API UClass* Z_Construct_UClass_UMvnPluginEditorSubsystem();
LIVELINKMVNPLUGINEDITOR_API UClass* Z_Construct_UClass_UMvnPluginEditorSubsystem_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UUnrealEditorSubsystem();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPluginEditor();
// End Cross Module References

// Begin Class UMvnPluginEditorSubsystem
void UMvnPluginEditorSubsystem::StaticRegisterNativesUMvnPluginEditorSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMvnPluginEditorSubsystem);
UClass* Z_Construct_UClass_UMvnPluginEditorSubsystem_NoRegister()
{
	return UMvnPluginEditorSubsystem::StaticClass();
}
struct Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MvnPluginEditorSubsystem.h" },
		{ "ModuleRelativePath", "Private/MvnPluginEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMvnPluginEditorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUnrealEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics::ClassParams = {
	&UMvnPluginEditorSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMvnPluginEditorSubsystem()
{
	if (!Z_Registration_Info_UClass_UMvnPluginEditorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMvnPluginEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMvnPluginEditorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMvnPluginEditorSubsystem.OuterSingleton;
}
template<> LIVELINKMVNPLUGINEDITOR_API UClass* StaticClass<UMvnPluginEditorSubsystem>()
{
	return UMvnPluginEditorSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMvnPluginEditorSubsystem);
// End Class UMvnPluginEditorSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPluginEditor_Private_MvnPluginEditorSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMvnPluginEditorSubsystem, UMvnPluginEditorSubsystem::StaticClass, TEXT("UMvnPluginEditorSubsystem"), &Z_Registration_Info_UClass_UMvnPluginEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMvnPluginEditorSubsystem), 3222421834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPluginEditor_Private_MvnPluginEditorSubsystem_h_1287387682(TEXT("/Script/LiveLinkMvnPluginEditor"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPluginEditor_Private_MvnPluginEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPluginEditor_Private_MvnPluginEditorSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
