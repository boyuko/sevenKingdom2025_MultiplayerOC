// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnTransformController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnTransformController() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnTransformController();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnTransformController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References
	void ULiveLinkMvnTransformController::StaticRegisterNativesULiveLinkMvnTransformController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnTransformController);
	UClass* Z_Construct_UClass_ULiveLinkMvnTransformController_NoRegister()
	{
		return ULiveLinkMvnTransformController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMvnTransformController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkMvnTransformController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnTransformController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex_MetaData[] = {
		{ "Category", "LiveLinkMVN" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnTransformController.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex = { "SegmentIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnTransformController, SegmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex_MetaData), Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::NewProp_SegmentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnTransformController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::ClassParams = {
		&ULiveLinkMvnTransformController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULiveLinkMvnTransformController()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMvnTransformController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnTransformController.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnTransformController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMvnTransformController.OuterSingleton;
	}
	template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkMvnTransformController>()
	{
		return ULiveLinkMvnTransformController::StaticClass();
	}
	ULiveLinkMvnTransformController::ULiveLinkMvnTransformController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnTransformController);
	ULiveLinkMvnTransformController::~ULiveLinkMvnTransformController() {}
	struct Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnTransformController, ULiveLinkMvnTransformController::StaticClass, TEXT("ULiveLinkMvnTransformController"), &Z_Registration_Info_UClass_ULiveLinkMvnTransformController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnTransformController), 972415542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_556637565(TEXT("/Script/LiveLinkMvnPlugin"),
		Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnTransformController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
