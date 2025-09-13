// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Actors/NDIBroadcastActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIBroadcastActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_ANDIBroadcastActor();
NDIIO_API UClass* Z_Construct_UClass_ANDIBroadcastActor_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIViewportCaptureComponent_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UPTZControllableInterface_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UPTZController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Class ANDIBroadcastActor
void ANDIBroadcastActor::StaticRegisterNativesANDIBroadcastActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANDIBroadcastActor);
UClass* Z_Construct_UClass_ANDIBroadcastActor_NoRegister()
{
	return ANDIBroadcastActor::StaticClass();
}
struct Z_Construct_UClass_ANDIBroadcastActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""A quick and easy way to capture the from the perspective of a camera that starts broadcasting the viewport\n\x09immediate upon 'BeginPlay'\n*/" },
#endif
		{ "DisplayName", "NDI Broadcast Actor" },
		{ "IncludePath", "Actors/NDIBroadcastActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A quick and easy way to capture the from the perspective of a camera that starts broadcasting the viewport\nimmediate upon 'BeginPlay'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata\n\x09*/" },
#endif
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""A component used to capture an additional viewport for broadcasting over NDI\n\x09*/" },
#endif
		{ "DisplayName", "Viewport Capture Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component used to capture an additional viewport for broadcasting over NDI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixCapture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "Audio Submix Capture" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Component used for PTZ control\n\x09*/" },
#endif
		{ "DisplayName", "PTZ Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIBroadcastActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component used for PTZ control" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportCaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PTZController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANDIBroadcastActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIBroadcastActor, NDIMediaSource), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIMediaSource_MetaData), NewProp_NDIMediaSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent = { "ViewportCaptureComponent", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIBroadcastActor, ViewportCaptureComponent), Z_Construct_UClass_UNDIViewportCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportCaptureComponent_MetaData), NewProp_ViewportCaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_SubmixCapture = { "SubmixCapture", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIBroadcastActor, SubmixCapture), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixCapture_MetaData), NewProp_SubmixCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_PTZController = { "PTZController", nullptr, (EPropertyFlags)0x004000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIBroadcastActor, PTZController), Z_Construct_UClass_UPTZController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZController_MetaData), NewProp_PTZController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_NDIMediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_ViewportCaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_SubmixCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIBroadcastActor_Statics::NewProp_PTZController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANDIBroadcastActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANDIBroadcastActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPTZControllableInterface_NoRegister, (int32)VTABLE_OFFSET(ANDIBroadcastActor, IPTZControllableInterface), false },  // 2580965254
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANDIBroadcastActor_Statics::ClassParams = {
	&ANDIBroadcastActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANDIBroadcastActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANDIBroadcastActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANDIBroadcastActor()
{
	if (!Z_Registration_Info_UClass_ANDIBroadcastActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANDIBroadcastActor.OuterSingleton, Z_Construct_UClass_ANDIBroadcastActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANDIBroadcastActor.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<ANDIBroadcastActor>()
{
	return ANDIBroadcastActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANDIBroadcastActor);
ANDIBroadcastActor::~ANDIBroadcastActor() {}
// End Class ANDIBroadcastActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANDIBroadcastActor, ANDIBroadcastActor::StaticClass, TEXT("ANDIBroadcastActor"), &Z_Registration_Info_UClass_ANDIBroadcastActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANDIBroadcastActor), 1531080306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIBroadcastActor_h_1061224603(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIBroadcastActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
