// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Enumerations/NDISourceBandwidth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDISourceBandwidth() {}

// Begin Cross Module References
NDIIO_API UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Enum ENDISourceBandwidth
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISourceBandwidth;
static UEnum* ENDISourceBandwidth_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISourceBandwidth.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISourceBandwidth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth, (UObject*)Z_Construct_UPackage__Script_NDIIO(), TEXT("ENDISourceBandwidth"));
	}
	return Z_Registration_Info_UEnum_ENDISourceBandwidth.OuterSingleton;
}
template<> NDIIO_API UEnum* StaticEnum<ENDISourceBandwidth>()
{
	return ENDISourceBandwidth_StaticEnum();
}
struct Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AudioOnly.Comment", "/** Receive metadata, audio */" },
		{ "AudioOnly.DisplayName", "Audio Only" },
		{ "AudioOnly.Name", "ENDISourceBandwidth::AudioOnly" },
		{ "AudioOnly.ToolTip", "Receive metadata, audio" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Receiver Bandwidth modes\n*/" },
#endif
		{ "DisplayName", "NDI Source Bandwidth" },
		{ "Highest.Comment", "// Receive metadata, audio, video at full resolution.\n" },
		{ "Highest.DisplayName", "Highest" },
		{ "Highest.Name", "ENDISourceBandwidth::Highest" },
		{ "Highest.ToolTip", "Receive metadata, audio, video at full resolution." },
		{ "Lowest.Comment", "/** Receive metadata, audio, video at a lower bandwidth and resolution. */" },
		{ "Lowest.DisplayName", "Lowest" },
		{ "Lowest.Name", "ENDISourceBandwidth::Lowest" },
		{ "Lowest.ToolTip", "Receive metadata, audio, video at a lower bandwidth and resolution." },
		{ "MetadataOnly.Comment", "/** Receive metadata. */" },
		{ "MetadataOnly.DisplayName", "Metadata Only" },
		{ "MetadataOnly.Name", "ENDISourceBandwidth::MetadataOnly" },
		{ "MetadataOnly.ToolTip", "Receive metadata." },
		{ "ModuleRelativePath", "Public/Enumerations/NDISourceBandwidth.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Receiver Bandwidth modes" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISourceBandwidth::MetadataOnly", (int64)ENDISourceBandwidth::MetadataOnly },
		{ "ENDISourceBandwidth::AudioOnly", (int64)ENDISourceBandwidth::AudioOnly },
		{ "ENDISourceBandwidth::Lowest", (int64)ENDISourceBandwidth::Lowest },
		{ "ENDISourceBandwidth::Highest", (int64)ENDISourceBandwidth::Highest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NDIIO,
	nullptr,
	"ENDISourceBandwidth",
	"ENDISourceBandwidth",
	Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth()
{
	if (!Z_Registration_Info_UEnum_ENDISourceBandwidth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISourceBandwidth.InnerSingleton, Z_Construct_UEnum_NDIIO_ENDISourceBandwidth_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISourceBandwidth.InnerSingleton;
}
// End Enum ENDISourceBandwidth

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDISourceBandwidth_StaticEnum, TEXT("ENDISourceBandwidth"), &Z_Registration_Info_UEnum_ENDISourceBandwidth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1788040182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Enumerations_NDISourceBandwidth_h_1070174140(TEXT("/Script/NDIIO"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Enumerations_NDISourceBandwidth_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
