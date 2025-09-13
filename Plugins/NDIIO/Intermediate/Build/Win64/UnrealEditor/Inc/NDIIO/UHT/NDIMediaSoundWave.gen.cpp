// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaSoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaSoundWave() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Class UNDIMediaSoundWave
void UNDIMediaSoundWave::StaticRegisterNativesUNDIMediaSoundWave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaSoundWave);
UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister()
{
	return UNDIMediaSoundWave::StaticClass();
}
struct Z_Construct_UClass_UNDIMediaSoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Defines a SoundWave object used by an NDI Media Receiver object for capturing audio from\n\x09""a network source\n*/" },
#endif
		{ "DisplayName", "NDI Media Sound Wave" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaSoundWave.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaSoundWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a SoundWave object used by an NDI Media Receiver object for capturing audio from\na network source" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaSoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIMediaSoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaSoundWave_Statics::ClassParams = {
	&UNDIMediaSoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaSoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaSoundWave()
{
	if (!Z_Registration_Info_UClass_UNDIMediaSoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaSoundWave.OuterSingleton, Z_Construct_UClass_UNDIMediaSoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaSoundWave.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UNDIMediaSoundWave>()
{
	return UNDIMediaSoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaSoundWave);
UNDIMediaSoundWave::~UNDIMediaSoundWave() {}
// End Class UNDIMediaSoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaSoundWave, UNDIMediaSoundWave::StaticClass, TEXT("UNDIMediaSoundWave"), &Z_Registration_Info_UClass_UNDIMediaSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaSoundWave), 1710421812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_1774715762(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaSoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
