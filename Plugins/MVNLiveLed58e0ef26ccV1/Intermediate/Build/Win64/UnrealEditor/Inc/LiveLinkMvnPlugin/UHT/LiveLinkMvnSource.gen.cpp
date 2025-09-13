// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnSource() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings();
LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnSourceSettings_NoRegister();
LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes();
UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References

// Begin Enum SegmentIndexes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SegmentIndexes;
static UEnum* SegmentIndexes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SegmentIndexes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SegmentIndexes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("SegmentIndexes"));
	}
	return Z_Registration_Info_UEnum_SegmentIndexes.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UEnum* StaticEnum<SegmentIndexes>()
{
	return SegmentIndexes_StaticEnum();
}
struct Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Head.Name", "Head" },
		{ "L3.Name", "L3" },
		{ "L5.Name", "L5" },
		{ "LeftFoot.Name", "LeftFoot" },
		{ "LeftForearm.Name", "LeftForearm" },
		{ "LeftHand.Name", "LeftHand" },
		{ "LeftLowerLeg.Name", "LeftLowerLeg" },
		{ "LeftShoulder.Name", "LeftShoulder" },
		{ "LeftToe.Name", "LeftToe" },
		{ "LeftUpperArm.Name", "LeftUpperArm" },
		{ "LeftUpperLeg.Name", "LeftUpperLeg" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
		{ "Neck.Name", "Neck" },
		{ "Pelvis.Name", "Pelvis" },
		{ "Prop1.Name", "Prop1" },
		{ "Prop2.Name", "Prop2" },
		{ "Prop3.Name", "Prop3" },
		{ "Prop4.Name", "Prop4" },
		{ "RightFoot.Name", "RightFoot" },
		{ "RightForearm.Name", "RightForearm" },
		{ "RightHand.Name", "RightHand" },
		{ "RightLowerLeg.Name", "RightLowerLeg" },
		{ "RightShoulder.Name", "RightShoulder" },
		{ "RightToe.Name", "RightToe" },
		{ "RightUpperArm.Name", "RightUpperArm" },
		{ "RightUpperLeg.Name", "RightUpperLeg" },
		{ "T12.Name", "T12" },
		{ "T8.Name", "T8" },
		{ "XS_SEG_NUM.Name", "XS_SEG_NUM" },
		{ "XS_SEG_NUM_FINGERS.Comment", "//number of segments\n" },
		{ "XS_SEG_NUM_FINGERS.Name", "XS_SEG_NUM_FINGERS" },
		{ "XS_SEG_NUM_FINGERS.ToolTip", "number of segments" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Pelvis", (int64)Pelvis },
		{ "L5", (int64)L5 },
		{ "L3", (int64)L3 },
		{ "T12", (int64)T12 },
		{ "T8", (int64)T8 },
		{ "Neck", (int64)Neck },
		{ "Head", (int64)Head },
		{ "RightShoulder", (int64)RightShoulder },
		{ "RightUpperArm", (int64)RightUpperArm },
		{ "RightForearm", (int64)RightForearm },
		{ "RightHand", (int64)RightHand },
		{ "LeftShoulder", (int64)LeftShoulder },
		{ "LeftUpperArm", (int64)LeftUpperArm },
		{ "LeftForearm", (int64)LeftForearm },
		{ "LeftHand", (int64)LeftHand },
		{ "RightUpperLeg", (int64)RightUpperLeg },
		{ "RightLowerLeg", (int64)RightLowerLeg },
		{ "RightFoot", (int64)RightFoot },
		{ "RightToe", (int64)RightToe },
		{ "LeftUpperLeg", (int64)LeftUpperLeg },
		{ "LeftLowerLeg", (int64)LeftLowerLeg },
		{ "LeftFoot", (int64)LeftFoot },
		{ "LeftToe", (int64)LeftToe },
		{ "Prop1", (int64)Prop1 },
		{ "Prop2", (int64)Prop2 },
		{ "Prop3", (int64)Prop3 },
		{ "Prop4", (int64)Prop4 },
		{ "XS_SEG_NUM", (int64)XS_SEG_NUM },
		{ "XS_SEG_NUM_FINGERS", (int64)XS_SEG_NUM_FINGERS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	nullptr,
	"SegmentIndexes",
	"SegmentIndexes",
	Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes()
{
	if (!Z_Registration_Info_UEnum_SegmentIndexes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SegmentIndexes.InnerSingleton, Z_Construct_UEnum_LiveLinkMvnPlugin_SegmentIndexes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SegmentIndexes.InnerSingleton;
}
// End Enum SegmentIndexes

// Begin Class ULiveLinkMvnSourceSettings
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source */" },
#endif
		{ "IncludePath", "LiveLinkMvnSource.h" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VirtualSubjectSource Settings to be able to differentiate from live sources and keep a name associated to the source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PortNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnSourceSettings, PortNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortNumber_MetaData), NewProp_PortNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::NewProp_PortNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics::DependentSingletons) < 16);
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
ULiveLinkMvnSourceSettings::ULiveLinkMvnSourceSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnSourceSettings);
ULiveLinkMvnSourceSettings::~ULiveLinkMvnSourceSettings() {}
// End Class ULiveLinkMvnSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ SegmentIndexes_StaticEnum, TEXT("SegmentIndexes"), &Z_Registration_Info_UEnum_SegmentIndexes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2476483759U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnSourceSettings, ULiveLinkMvnSourceSettings::StaticClass, TEXT("ULiveLinkMvnSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkMvnSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnSourceSettings), 645808952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_3930820938(TEXT("/Script/LiveLinkMvnPlugin"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
