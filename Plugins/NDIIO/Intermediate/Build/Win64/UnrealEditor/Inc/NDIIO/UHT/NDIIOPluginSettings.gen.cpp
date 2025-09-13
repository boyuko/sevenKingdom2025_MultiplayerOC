// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/NDIIOPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIIOPluginSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
NDIIO_API UClass* Z_Construct_UClass_UNDIIOPluginSettings();
NDIIO_API UClass* Z_Construct_UClass_UNDIIOPluginSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Class UNDIIOPluginSettings
void UNDIIOPluginSettings::StaticRegisterNativesUNDIIOPluginSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIIOPluginSettings);
UClass* Z_Construct_UClass_UNDIIOPluginSettings_NoRegister()
{
	return UNDIIOPluginSettings::StaticClass();
}
struct Z_Construct_UClass_UNDIIOPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Settings for the Broadcasting of the Active Viewport configurable in the running editor of the application\n*/" },
#endif
		{ "IncludePath", "NDIIOPluginSettings.h" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for the Broadcasting of the Active Viewport configurable in the running editor of the application" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decription_MetaData[] = {
		{ "Category", "NDI IO" },
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationStreamName_MetaData[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default name to use when broadcasting the Currently Active Viewport over NDI. */" },
#endif
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default name to use when broadcasting the Currently Active Viewport over NDI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastRate_MetaData[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the preferred frame rate to broadcast the Currently Active Viewport over NDI. */" },
#endif
		{ "DisplayName", "Broadcast Rate" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the preferred frame rate to broadcast the Currently Active Viewport over NDI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredFrameSize_MetaData[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates the preferred frame size to broadcast the Currently Active Viewport over NDI. */" },
#endif
		{ "DisplayName", "Preferred Broadcast Framesize" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the preferred frame size to broadcast the Currently Active Viewport over NDI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBeginBroadcastOnPlay_MetaData[] = {
		{ "Category", "NDI IO" },
		{ "DisplayName", "Begin Broadcast On Play" },
		{ "ModuleRelativePath", "Public/NDIIOPluginSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Decription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApplicationStreamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BroadcastRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredFrameSize;
	static void NewProp_bBeginBroadcastOnPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeginBroadcastOnPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIIOPluginSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription = { "Decription", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIIOPluginSettings, Decription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decription_MetaData), NewProp_Decription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName = { "ApplicationStreamName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIIOPluginSettings, ApplicationStreamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationStreamName_MetaData), NewProp_ApplicationStreamName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate = { "BroadcastRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIIOPluginSettings, BroadcastRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastRate_MetaData), NewProp_BroadcastRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize = { "PreferredFrameSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIIOPluginSettings, PreferredFrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredFrameSize_MetaData), NewProp_PreferredFrameSize_MetaData) };
void Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_bBeginBroadcastOnPlay_SetBit(void* Obj)
{
	((UNDIIOPluginSettings*)Obj)->bBeginBroadcastOnPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_bBeginBroadcastOnPlay = { "bBeginBroadcastOnPlay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIIOPluginSettings), &Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_bBeginBroadcastOnPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBeginBroadcastOnPlay_MetaData), NewProp_bBeginBroadcastOnPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_Decription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_ApplicationStreamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_BroadcastRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_PreferredFrameSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIIOPluginSettings_Statics::NewProp_bBeginBroadcastOnPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIIOPluginSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIIOPluginSettings_Statics::ClassParams = {
	&UNDIIOPluginSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIIOPluginSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIIOPluginSettings()
{
	if (!Z_Registration_Info_UClass_UNDIIOPluginSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIIOPluginSettings.OuterSingleton, Z_Construct_UClass_UNDIIOPluginSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIIOPluginSettings.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UNDIIOPluginSettings>()
{
	return UNDIIOPluginSettings::StaticClass();
}
UNDIIOPluginSettings::UNDIIOPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIIOPluginSettings);
UNDIIOPluginSettings::~UNDIIOPluginSettings() {}
// End Class UNDIIOPluginSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_NDIIOPluginSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIIOPluginSettings, UNDIIOPluginSettings::StaticClass, TEXT("UNDIIOPluginSettings"), &Z_Registration_Info_UClass_UNDIIOPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIIOPluginSettings), 415106192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_NDIIOPluginSettings_h_3315455131(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_NDIIOPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_NDIIOPluginSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
