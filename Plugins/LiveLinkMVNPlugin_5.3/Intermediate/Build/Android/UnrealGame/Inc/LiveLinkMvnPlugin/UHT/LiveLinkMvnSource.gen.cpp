// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnSource() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References
	void ULiveLinkMvnSourceSettings::StaticRegisterNativesULiveLinkMvnSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings_NoRegister()
	{
		return ULiveLinkMvnSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PortNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source */" },
#endif
		{ "IncludePath", "LiveLinkMvnSource.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnSourceSettings, PortNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber_MetaData), Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::ClassParams = {
		&ULiveLinkMvnSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings.OuterSingleton;
	}
	template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkMvnSourceSettings>()
	{
		return ULiveLinkMvnSourceSettings::StaticClass();
	}
	ULiveLinkMvnSourceSettings::ULiveLinkMvnSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnSourceSettings);
	ULiveLinkMvnSourceSettings::~ULiveLinkMvnSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnSourceSettings, ULiveLinkMvnSourceSettings::StaticClass, TEXT("ULiveLinkMvnSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnSourceSettings), 2245780877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_581980091(TEXT("/Script/LiveLinkMvnPlugin"),
		Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
