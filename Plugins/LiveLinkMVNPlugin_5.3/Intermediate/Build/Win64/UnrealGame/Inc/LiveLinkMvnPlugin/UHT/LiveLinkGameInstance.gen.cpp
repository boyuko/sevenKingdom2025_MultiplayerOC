// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkGameInstance();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References
	void ULiveLinkGameInstance::StaticRegisterNativesULiveLinkGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkGameInstance);
	UClass* Z_Construct_UClass_ULiveLinkGameInstance_NoRegister()
	{
		return ULiveLinkGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_PortNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkGameInstance.h" },
		{ "ModuleRelativePath", "Public/LiveLinkGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkGameInstance_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ULiveLinkGameInstance_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkGameInstance, PortNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkGameInstance_Statics::NewProp_PortNumber_MetaData), Z_Construct_UClass_ULiveLinkGameInstance_Statics::NewProp_PortNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkGameInstance_Statics::NewProp_PortNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkGameInstance_Statics::ClassParams = {
		&ULiveLinkGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULiveLinkGameInstance()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkGameInstance.OuterSingleton, Z_Construct_UClass_ULiveLinkGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkGameInstance.OuterSingleton;
	}
	template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkGameInstance>()
	{
		return ULiveLinkGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkGameInstance);
	ULiveLinkGameInstance::~ULiveLinkGameInstance() {}
	struct Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkGameInstance, ULiveLinkGameInstance::StaticClass, TEXT("ULiveLinkGameInstance"), &Z_Registration_Info_UClass_ULiveLinkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkGameInstance), 566463325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkGameInstance_h_2681631441(TEXT("/Script/LiveLinkMvnPlugin"),
		Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
