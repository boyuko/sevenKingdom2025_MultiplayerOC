// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/Factories/NDIMediaSenderFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSenderFactory() {}

// Begin Cross Module References
NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSenderFactory();
NDIIOEDITOR_API UClass* Z_Construct_UClass_UNDIMediaSenderFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NDIIOEditor();
// End Cross Module References

// Begin Class UNDIMediaSenderFactory
void UNDIMediaSenderFactory::StaticRegisterNativesUNDIMediaSenderFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaSenderFactory);
UClass* Z_Construct_UClass_UNDIMediaSenderFactory_NoRegister()
{
	return UNDIMediaSenderFactory::StaticClass();
}
struct Z_Construct_UClass_UNDIMediaSenderFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Factory Class used to create assets via content browser for NDI Sender objects\n*/" },
#endif
		{ "IncludePath", "Factories/NDIMediaSenderFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/NDIMediaSenderFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory Class used to create assets via content browser for NDI Sender objects" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSenderFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIMediaSenderFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIOEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSenderFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSenderFactory_Statics::ClassParams = {
	&UNDIMediaSenderFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSenderFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaSenderFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaSenderFactory()
{
	if (!Z_Registration_Info_UClass_UNDIMediaSenderFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSenderFactory.OuterSingleton, Z_Construct_UClass_UNDIMediaSenderFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaSenderFactory.OuterSingleton;
}
template<> NDIIOEDITOR_API UClass* StaticClass<UNDIMediaSenderFactory>()
{
	return UNDIMediaSenderFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSenderFactory);
UNDIMediaSenderFactory::~UNDIMediaSenderFactory() {}
// End Class UNDIMediaSenderFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSenderFactory, UNDIMediaSenderFactory::StaticClass, TEXT("UNDIMediaSenderFactory"), &Z_Registration_Info_UClass_UNDIMediaSenderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSenderFactory), 4146368948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_3130906319(TEXT("/Script/NDIIOEditor"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Editor_Public_Factories_NDIMediaSenderFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
