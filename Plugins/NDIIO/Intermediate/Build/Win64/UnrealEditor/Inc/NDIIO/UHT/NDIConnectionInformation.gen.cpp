// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Structures/NDIConnectionInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIConnectionInformation() {}

// Begin Cross Module References
NDIIO_API UEnum* Z_Construct_UEnum_NDIIO_ENDISourceBandwidth();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin ScriptStruct FNDIConnectionInformation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIConnectionInformation;
class UScriptStruct* FNDIConnectionInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIConnectionInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIConnectionInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIConnectionInformation, (UObject*)Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIConnectionInformation"));
	}
	return Z_Registration_Info_UScriptStruct_NDIConnectionInformation.OuterSingleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIConnectionInformation>()
{
	return FNDIConnectionInformation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Describes essential properties used for connection objects over NDI\n*/" },
#endif
		{ "DisplayName", "NDI Connection Information" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes essential properties used for connection objects over NDI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A user-friendly name of the source */" },
#endif
		{ "DisplayName", "Source Name" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A user-friendly name of the source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The machine name of the source */" },
#endif
		{ "DisplayName", "Machine Name" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The machine name of the source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamName_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The stream name of the source */" },
#endif
		{ "DisplayName", "Stream Name" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The stream name of the source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A location on the network for which this source exists */" },
#endif
		{ "DisplayName", "Url" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A location on the network for which this source exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the current bandwidth mode used for this connection */" },
#endif
		{ "DisplayName", "Bandwidth" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the current bandwidth mode used for this connection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMuteAudio_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Mute Audio" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMuteVideo_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Mute Video" },
		{ "ModuleRelativePath", "Public/Structures/NDIConnectionInformation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MachineName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bandwidth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Bandwidth;
	static void NewProp_bMuteAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteAudio;
	static void NewProp_bMuteVideo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteVideo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIConnectionInformation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIConnectionInformation, SourceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceName_MetaData), NewProp_SourceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIConnectionInformation, MachineName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MachineName_MetaData), NewProp_MachineName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName = { "StreamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIConnectionInformation, StreamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamName_MetaData), NewProp_StreamName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIConnectionInformation, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIConnectionInformation, Bandwidth), Z_Construct_UEnum_NDIIO_ENDISourceBandwidth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bandwidth_MetaData), NewProp_Bandwidth_MetaData) }; // 1788040182
void Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteAudio_SetBit(void* Obj)
{
	((FNDIConnectionInformation*)Obj)->bMuteAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteAudio = { "bMuteAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIConnectionInformation), &Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMuteAudio_MetaData), NewProp_bMuteAudio_MetaData) };
void Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteVideo_SetBit(void* Obj)
{
	((FNDIConnectionInformation*)Obj)->bMuteVideo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteVideo = { "bMuteVideo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNDIConnectionInformation), &Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteVideo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMuteVideo_MetaData), NewProp_bMuteVideo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_MachineName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_StreamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_Bandwidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewProp_bMuteVideo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	nullptr,
	&NewStructOps,
	"NDIConnectionInformation",
	Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::PropPointers),
	sizeof(FNDIConnectionInformation),
	alignof(FNDIConnectionInformation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation()
{
	if (!Z_Registration_Info_UScriptStruct_NDIConnectionInformation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIConnectionInformation.InnerSingleton, Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIConnectionInformation.InnerSingleton;
}
// End ScriptStruct FNDIConnectionInformation

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIConnectionInformation::StaticStruct, Z_Construct_UScriptStruct_FNDIConnectionInformation_Statics::NewStructOps, TEXT("NDIConnectionInformation"), &Z_Registration_Info_UScriptStruct_NDIConnectionInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIConnectionInformation), 1635080544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Structures_NDIConnectionInformation_h_830168872(TEXT("/Script/NDIIO"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Structures_NDIConnectionInformation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
