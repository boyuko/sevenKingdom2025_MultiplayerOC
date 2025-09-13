// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Actors/NDIReceiveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiveActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_ANDIReceiveActor();
NDIIO_API UClass* Z_Construct_UClass_ANDIReceiveActor_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSoundWave_NoRegister();
NDIIO_API UEnum* Z_Construct_UEnum_NDIIO_ENDIAudioChannels();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Class ANDIReceiveActor Function EnableAlpha
struct Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics
{
	struct NDIReceiveActor_eventEnableAlpha_Parms
	{
		bool Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((NDIReceiveActor_eventEnableAlpha_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIReceiveActor_eventEnableAlpha_Parms), &Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "EnableAlpha", nullptr, nullptr, Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::NDIReceiveActor_eventEnableAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::NDIReceiveActor_eventEnableAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANDIReceiveActor::execEnableAlpha)
{
	P_GET_UBOOL_REF(Z_Param_Out_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableAlpha(Z_Param_Out_Enabled);
	P_NATIVE_END;
}
// End Class ANDIReceiveActor Function EnableAlpha

// Begin Class ANDIReceiveActor Function EnableColor
struct Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics
{
	struct NDIReceiveActor_eventEnableColor_Parms
	{
		bool Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((NDIReceiveActor_eventEnableColor_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIReceiveActor_eventEnableColor_Parms), &Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "EnableColor", nullptr, nullptr, Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::NDIReceiveActor_eventEnableColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::NDIReceiveActor_eventEnableColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANDIReceiveActor_EnableColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_EnableColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANDIReceiveActor::execEnableColor)
{
	P_GET_UBOOL_REF(Z_Param_Out_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableColor(Z_Param_Out_Enabled);
	P_NATIVE_END;
}
// End Class ANDIReceiveActor Function EnableColor

// Begin Class ANDIReceiveActor Function SetFrameHeight
struct Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics
{
	struct NDIReceiveActor_eventSetFrameHeight_Parms
	{
		float InFrameHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFrameHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrameHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight = { "InFrameHeight", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiveActor_eventSetFrameHeight_Parms, InFrameHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFrameHeight_MetaData), NewProp_InFrameHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NewProp_InFrameHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "SetFrameHeight", nullptr, nullptr, Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NDIReceiveActor_eventSetFrameHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::NDIReceiveActor_eventSetFrameHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANDIReceiveActor::execSetFrameHeight)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InFrameHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameHeight(Z_Param_Out_InFrameHeight);
	P_NATIVE_END;
}
// End Class ANDIReceiveActor Function SetFrameHeight

// Begin Class ANDIReceiveActor Function SetFrameWidth
struct Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics
{
	struct NDIReceiveActor_eventSetFrameWidth_Parms
	{
		float InFrameWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFrameWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrameWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth = { "InFrameWidth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiveActor_eventSetFrameWidth_Parms, InFrameWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFrameWidth_MetaData), NewProp_InFrameWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NewProp_InFrameWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "SetFrameWidth", nullptr, nullptr, Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NDIReceiveActor_eventSetFrameWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::NDIReceiveActor_eventSetFrameWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANDIReceiveActor::execSetFrameWidth)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_InFrameWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameWidth(Z_Param_Out_InFrameWidth);
	P_NATIVE_END;
}
// End Class ANDIReceiveActor Function SetFrameWidth

// Begin Class ANDIReceiveActor Function UpdateAudioPlayback
struct Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics
{
	struct NDIReceiveActor_eventUpdateAudioPlayback_Parms
	{
		bool Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((NDIReceiveActor_eventUpdateAudioPlayback_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIReceiveActor_eventUpdateAudioPlayback_Parms), &Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "UpdateAudioPlayback", nullptr, nullptr, Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NDIReceiveActor_eventUpdateAudioPlayback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::NDIReceiveActor_eventUpdateAudioPlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANDIReceiveActor::execUpdateAudioPlayback)
{
	P_GET_UBOOL_REF(Z_Param_Out_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAudioPlayback(Z_Param_Out_Enabled);
	P_NATIVE_END;
}
// End Class ANDIReceiveActor Function UpdateAudioPlayback

// Begin Class ANDIReceiveActor Function UpdateAudioPlaybackChannels
struct Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics
{
	struct NDIReceiveActor_eventUpdateAudioPlaybackChannels_Parms
	{
		ENDIAudioChannels Channels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channels_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::NewProp_Channels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiveActor_eventUpdateAudioPlaybackChannels_Parms, Channels), Z_Construct_UEnum_NDIIO_ENDIAudioChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channels_MetaData), NewProp_Channels_MetaData) }; // 1206563655
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::NewProp_Channels_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::NewProp_Channels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDIReceiveActor, nullptr, "UpdateAudioPlaybackChannels", nullptr, nullptr, Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::NDIReceiveActor_eventUpdateAudioPlaybackChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::NDIReceiveActor_eventUpdateAudioPlaybackChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANDIReceiveActor::execUpdateAudioPlaybackChannels)
{
	P_GET_ENUM_REF(ENDIAudioChannels,Z_Param_Out_Channels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAudioPlaybackChannels((ENDIAudioChannels&)(Z_Param_Out_Channels));
	P_NATIVE_END;
}
// End Class ANDIReceiveActor Function UpdateAudioPlaybackChannels

// Begin Class ANDIReceiveActor
void ANDIReceiveActor::StaticRegisterNativesANDIReceiveActor()
{
	UClass* Class = ANDIReceiveActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableAlpha", &ANDIReceiveActor::execEnableAlpha },
		{ "EnableColor", &ANDIReceiveActor::execEnableColor },
		{ "SetFrameHeight", &ANDIReceiveActor::execSetFrameHeight },
		{ "SetFrameWidth", &ANDIReceiveActor::execSetFrameWidth },
		{ "UpdateAudioPlayback", &ANDIReceiveActor::execUpdateAudioPlayback },
		{ "UpdateAudioPlaybackChannels", &ANDIReceiveActor::execUpdateAudioPlaybackChannels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANDIReceiveActor);
UClass* Z_Construct_UClass_ANDIReceiveActor_NoRegister()
{
	return ANDIReceiveActor::StaticClass();
}
struct Z_Construct_UClass_ANDIReceiveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI Receive Actor" },
		{ "HideCategories", "Activation Rendering AssetUserData Material Attachment Actor Input Cooking LOD StaticMesh Materials" },
		{ "IncludePath", "Actors/NDIReceiveActor.h" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "SetFrameWidth" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The desired width of the frame in cm, represented in the virtual scene */" },
#endif
		{ "DisplayName", "Frame Width" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired width of the frame in cm, represented in the virtual scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "SetFrameHeight" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The desired height of the frame in cm, represented in the virtual scene */" },
#endif
		{ "DisplayName", "Frame Height" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired height of the frame in cm, represented in the virtual scene" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAudioPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "UpdateAudioPlayback" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Indicates that this object should play the audio.\n\n\x09\x09*Note Audio played by this object will be played as a UI sound, and won't normalize the audio\n\x09\x09\x09  if the same 'MediaSource' object is being used as the audio source on multiple receivers.\n\x09*/" },
#endif
		{ "DisplayName", "Enable Audio Playback?" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates that this object should play the audio.\n\nNote Audio played by this object will be played as a UI sound, and won't normalize the audio\n          if the same 'MediaSource' object is being used as the audio source on multiple receivers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioPlaybackChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "UpdateAudioPlaybackChannels" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "Audio Playback Channels" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "EnableColor" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable/disable the use of the color channels (if there are any) */" },
#endif
		{ "DisplayName", "Enable Color?" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the use of the color channels (if there are any)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "EnableAlpha" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable/disable the use of the alpha channel (if there is one) */" },
#endif
		{ "DisplayName", "Enable Alpha?" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the use of the alpha channel (if there is one)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Receiver object used to get Audio, Video, and Metadata from on the network */" },
#endif
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Receiver object used to get Audio, Video, and Metadata from on the network" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoMeshComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The component used to display the video received from the Media Sender object */" },
#endif
		{ "DisplayName", "Video Mesh Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component used to display the video received from the Media Sender object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The component used to play the audio from the NDI Media source */" },
#endif
		{ "DisplayName", "Audio Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component used to play the audio from the NDI Media source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioSoundWave_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The audio sound wave which receives the audio from the NDI Media source */" },
#endif
		{ "DisplayName", "Soundwave" },
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio sound wave which receives the audio from the NDI Media source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The dynamic material to apply to the plane object of this actor */" },
#endif
		{ "ModuleRelativePath", "Public/Actors/NDIReceiveActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The dynamic material to apply to the plane object of this actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameHeight;
	static void NewProp_bEnableAudioPlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAudioPlayback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioPlaybackChannels_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioPlaybackChannels;
	static void NewProp_bEnableColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableColor;
	static void NewProp_bEnableAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAlpha;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioSoundWave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANDIReceiveActor_EnableAlpha, "EnableAlpha" }, // 3978395934
		{ &Z_Construct_UFunction_ANDIReceiveActor_EnableColor, "EnableColor" }, // 1350399752
		{ &Z_Construct_UFunction_ANDIReceiveActor_SetFrameHeight, "SetFrameHeight" }, // 2663077714
		{ &Z_Construct_UFunction_ANDIReceiveActor_SetFrameWidth, "SetFrameWidth" }, // 643286312
		{ &Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlayback, "UpdateAudioPlayback" }, // 3602387813
		{ &Z_Construct_UFunction_ANDIReceiveActor_UpdateAudioPlaybackChannels, "UpdateAudioPlaybackChannels" }, // 2327959745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANDIReceiveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth = { "FrameWidth", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, FrameWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameWidth_MetaData), NewProp_FrameWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight = { "FrameHeight", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, FrameHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameHeight_MetaData), NewProp_FrameHeight_MetaData) };
void Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_SetBit(void* Obj)
{
	((ANDIReceiveActor*)Obj)->bEnableAudioPlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback = { "bEnableAudioPlayback", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANDIReceiveActor), &Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAudioPlayback_MetaData), NewProp_bEnableAudioPlayback_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioPlaybackChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioPlaybackChannels = { "AudioPlaybackChannels", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, AudioPlaybackChannels), Z_Construct_UEnum_NDIIO_ENDIAudioChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioPlaybackChannels_MetaData), NewProp_AudioPlaybackChannels_MetaData) }; // 1206563655
void Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableColor_SetBit(void* Obj)
{
	((ANDIReceiveActor*)Obj)->bEnableColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableColor = { "bEnableColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANDIReceiveActor), &Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableColor_MetaData), NewProp_bEnableColor_MetaData) };
void Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAlpha_SetBit(void* Obj)
{
	((ANDIReceiveActor*)Obj)->bEnableAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAlpha = { "bEnableAlpha", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANDIReceiveActor), &Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAlpha_MetaData), NewProp_bEnableAlpha_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, NDIMediaSource), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIMediaSource_MetaData), NewProp_NDIMediaSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent = { "VideoMeshComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, VideoMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoMeshComponent_MetaData), NewProp_VideoMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x004000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave = { "AudioSoundWave", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, AudioSoundWave), Z_Construct_UClass_UNDIMediaSoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioSoundWave_MetaData), NewProp_AudioSoundWave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance = { "VideoMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANDIReceiveActor, VideoMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoMaterialInstance_MetaData), NewProp_VideoMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_FrameHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAudioPlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioPlaybackChannels_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioPlaybackChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_bEnableAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_NDIMediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_AudioSoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDIReceiveActor_Statics::NewProp_VideoMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANDIReceiveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANDIReceiveActor_Statics::ClassParams = {
	&ANDIReceiveActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANDIReceiveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANDIReceiveActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANDIReceiveActor()
{
	if (!Z_Registration_Info_UClass_ANDIReceiveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANDIReceiveActor.OuterSingleton, Z_Construct_UClass_ANDIReceiveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANDIReceiveActor.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<ANDIReceiveActor>()
{
	return ANDIReceiveActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANDIReceiveActor);
ANDIReceiveActor::~ANDIReceiveActor() {}
// End Class ANDIReceiveActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIReceiveActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANDIReceiveActor, ANDIReceiveActor::StaticClass, TEXT("ANDIReceiveActor"), &Z_Registration_Info_UClass_ANDIReceiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANDIReceiveActor), 1417748041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIReceiveActor_h_3930636968(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIReceiveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Actors_NDIReceiveActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
