// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/MvnLiveLinkMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMvnLiveLinkMessages() {}

// Begin Cross Module References
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage();
LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage();
LIVELINKMVNPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage();
LIVELINKMVNPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin ScriptStruct FMvnLiveLinkPingMessage
static_assert(std::is_polymorphic<FMvnLiveLinkPingMessage>() == std::is_polymorphic<FLiveLinkPingMessage>(), "USTRUCT FMvnLiveLinkPingMessage cannot be polymorphic unless super FLiveLinkPingMessage is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage;
class UScriptStruct* FMvnLiveLinkPingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("MvnLiveLinkPingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UScriptStruct* StaticStruct<FMvnLiveLinkPingMessage>()
{
	return FMvnLiveLinkPingMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MvnLiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XSensVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/MvnLiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/MvnLiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_XSensVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMvnLiveLinkPingMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::NewProp_XSensVersion = { "XSensVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMvnLiveLinkPingMessage, XSensVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XSensVersion_MetaData), NewProp_XSensVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::NewProp_UnrealVersion = { "UnrealVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMvnLiveLinkPingMessage, UnrealVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealVersion_MetaData), NewProp_UnrealVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::NewProp_XSensVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::NewProp_UnrealVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	Z_Construct_UScriptStruct_FLiveLinkPingMessage,
	&NewStructOps,
	"MvnLiveLinkPingMessage",
	Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::PropPointers),
	sizeof(FMvnLiveLinkPingMessage),
	alignof(FMvnLiveLinkPingMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage()
{
	if (!Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage.InnerSingleton, Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage.InnerSingleton;
}
// End ScriptStruct FMvnLiveLinkPingMessage

// Begin ScriptStruct FMvnLiveLinkPongMessage
static_assert(std::is_polymorphic<FMvnLiveLinkPongMessage>() == std::is_polymorphic<FLiveLinkPongMessage>(), "USTRUCT FMvnLiveLinkPongMessage cannot be polymorphic unless super FLiveLinkPongMessage is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage;
class UScriptStruct* FMvnLiveLinkPongMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("MvnLiveLinkPongMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UScriptStruct* StaticStruct<FMvnLiveLinkPongMessage>()
{
	return FMvnLiveLinkPongMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MvnLiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XSensVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/MvnLiveLinkMessages.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnrealVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/MvnLiveLinkMessages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_XSensVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMvnLiveLinkPongMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::NewProp_XSensVersion = { "XSensVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMvnLiveLinkPongMessage, XSensVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XSensVersion_MetaData), NewProp_XSensVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::NewProp_UnrealVersion = { "UnrealVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMvnLiveLinkPongMessage, UnrealVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnrealVersion_MetaData), NewProp_UnrealVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::NewProp_XSensVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::NewProp_UnrealVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	Z_Construct_UScriptStruct_FLiveLinkPongMessage,
	&NewStructOps,
	"MvnLiveLinkPongMessage",
	Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::PropPointers),
	sizeof(FMvnLiveLinkPongMessage),
	alignof(FMvnLiveLinkPongMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage()
{
	if (!Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage.InnerSingleton, Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage.InnerSingleton;
}
// End ScriptStruct FMvnLiveLinkPongMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_MvnLiveLinkMessages_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMvnLiveLinkPingMessage::StaticStruct, Z_Construct_UScriptStruct_FMvnLiveLinkPingMessage_Statics::NewStructOps, TEXT("MvnLiveLinkPingMessage"), &Z_Registration_Info_UScriptStruct_MvnLiveLinkPingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMvnLiveLinkPingMessage), 4248617709U) },
		{ FMvnLiveLinkPongMessage::StaticStruct, Z_Construct_UScriptStruct_FMvnLiveLinkPongMessage_Statics::NewStructOps, TEXT("MvnLiveLinkPongMessage"), &Z_Registration_Info_UScriptStruct_MvnLiveLinkPongMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMvnLiveLinkPongMessage), 277912037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_MvnLiveLinkMessages_h_1143139910(TEXT("/Script/LiveLinkMvnPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_MvnLiveLinkMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_MvnLiveLinkMessages_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
