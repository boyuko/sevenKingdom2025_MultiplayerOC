// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaReceiverFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaReceiverFactory() {}

// Begin Cross Module References
NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaReceiverFactory();
NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaReceiverFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References

// Begin Class UNDIMediaReceiverFactory
void UNDIMediaReceiverFactory::StaticRegisterNativesUNDIMediaReceiverFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaReceiverFactory);
UClass* Z_Construct_UClass_UNDIMediaReceiverFactory_NoRegister()
{
	return UNDIMediaReceiverFactory::StaticClass();
}
struct Z_Construct_UClass_UNDIMediaReceiverFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09""Factory Class used to create assets via content browser for NDI Receiver objects\n*/" },
#endif
		{ "IncludePath", "Factories/NDIMediaReceiverFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaReceiverFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Receiver objects" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaReceiverFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::ClassParams = {
	&UNDIMediaReceiverFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaReceiverFactory()
{
	if (!Z_Registration_Info_UClass_UNDIMediaReceiverFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaReceiverFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaReceiverFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaReceiverFactory.OuterSingleton;
}
template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaReceiverFactory>()
{
	return UNDIMediaReceiverFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaReceiverFactory);
UNDIMediaReceiverFactory::~UNDIMediaReceiverFactory() {}
// End Class UNDIMediaReceiverFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaReceiverFactory, UNDIMediaReceiverFactory::StaticClass, TEXT("UNDIMediaReceiverFactory"), &Z_Registration_Info_UClass_UNDIMediaReceiverFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaReceiverFactory), 2489281291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_2643817203(TEXT("/Script/NDIIOEditor"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaReceiverFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
