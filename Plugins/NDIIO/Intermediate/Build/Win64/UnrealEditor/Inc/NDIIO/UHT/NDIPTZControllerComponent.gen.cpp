// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Components/NDIPTZControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIPTZControllerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UPTZControllableInterface();
NDIIO_API UClass* Z_Construct_UClass_UPTZControllableInterface_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UPTZController();
NDIIO_API UClass* Z_Construct_UClass_UPTZController_NoRegister();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FPTZState();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin ScriptStruct FPTZState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PTZState;
class UScriptStruct* FPTZState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PTZState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PTZState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPTZState, (UObject*)Z_Construct_UPackage__Script_NDIIO(), TEXT("PTZState"));
	}
	return Z_Registration_Info_UScriptStruct_PTZState.OuterSingleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FPTZState>()
{
	return FPTZState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPTZState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI PTZ State" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pan_MetaData[] = {
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tilt_MetaData[] = {
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[] = {
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFocus_MetaData[] = {
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[] = {
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tilt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
	static void NewProp_bAutoFocus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFocus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPTZState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_Pan = { "Pan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTZState, Pan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pan_MetaData), NewProp_Pan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_Tilt = { "Tilt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTZState, Tilt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tilt_MetaData), NewProp_Tilt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTZState, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTZState, FocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusDistance_MetaData), NewProp_FocusDistance_MetaData) };
void Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_bAutoFocus_SetBit(void* Obj)
{
	((FPTZState*)Obj)->bAutoFocus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_bAutoFocus = { "bAutoFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPTZState), &Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_bAutoFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFocus_MetaData), NewProp_bAutoFocus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPTZState, CameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTransform_MetaData), NewProp_CameraTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPTZState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_Pan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_Tilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_FocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_bAutoFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPTZState_Statics::NewProp_CameraTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTZState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPTZState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	nullptr,
	&NewStructOps,
	"PTZState",
	Z_Construct_UScriptStruct_FPTZState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTZState_Statics::PropPointers),
	sizeof(FPTZState),
	alignof(FPTZState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPTZState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPTZState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPTZState()
{
	if (!Z_Registration_Info_UScriptStruct_PTZState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PTZState.InnerSingleton, Z_Construct_UScriptStruct_FPTZState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PTZState.InnerSingleton;
}
// End ScriptStruct FPTZState

// Begin Delegate FNDIEventDelegate_OnPTZPanTiltSpeed
struct Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms
	{
		float PanSpeed;
		float TiltSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PanSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiltSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::NewProp_PanSpeed = { "PanSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms, PanSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::NewProp_TiltSpeed = { "TiltSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms, TiltSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::NewProp_PanSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::NewProp_TiltSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIEventDelegate_OnPTZPanTiltSpeed_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZPanTiltSpeed, float PanSpeed, float TiltSpeed)
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms
	{
		float PanSpeed;
		float TiltSpeed;
	};
	_Script_NDIIO_eventNDIEventDelegate_OnPTZPanTiltSpeed_Parms Parms;
	Parms.PanSpeed=PanSpeed;
	Parms.TiltSpeed=TiltSpeed;
	NDIEventDelegate_OnPTZPanTiltSpeed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIEventDelegate_OnPTZPanTiltSpeed

// Begin Delegate FNDIEventDelegate_OnPTZZoomSpeed
struct Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms
	{
		float ZoomSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms, ZoomSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::NewProp_ZoomSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIEventDelegate_OnPTZZoomSpeed_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZZoomSpeed, float ZoomSpeed)
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms
	{
		float ZoomSpeed;
	};
	_Script_NDIIO_eventNDIEventDelegate_OnPTZZoomSpeed_Parms Parms;
	Parms.ZoomSpeed=ZoomSpeed;
	NDIEventDelegate_OnPTZZoomSpeed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIEventDelegate_OnPTZZoomSpeed

// Begin Delegate FNDIEventDelegate_OnPTZFocus
struct Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms
	{
		bool AutoMode;
		float Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AutoMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::NewProp_AutoMode_SetBit(void* Obj)
{
	((_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms*)Obj)->AutoMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::NewProp_AutoMode = { "AutoMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms), &Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::NewProp_AutoMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::NewProp_AutoMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIEventDelegate_OnPTZFocus__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIEventDelegate_OnPTZFocus_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZFocus, bool AutoMode, float Distance)
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms
	{
		bool AutoMode;
		float Distance;
	};
	_Script_NDIIO_eventNDIEventDelegate_OnPTZFocus_Parms Parms;
	Parms.AutoMode=AutoMode ? true : false;
	Parms.Distance=Distance;
	NDIEventDelegate_OnPTZFocus.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIEventDelegate_OnPTZFocus

// Begin Delegate FNDIEventDelegate_OnPTZStore
struct Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIEventDelegate_OnPTZStore__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIEventDelegate_OnPTZStore_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZStore, int32 Index)
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms
	{
		int32 Index;
	};
	_Script_NDIIO_eventNDIEventDelegate_OnPTZStore_Parms Parms;
	Parms.Index=Index;
	NDIEventDelegate_OnPTZStore.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIEventDelegate_OnPTZStore

// Begin Delegate FNDIEventDelegate_OnPTZRecall
struct Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIEventDelegate_OnPTZRecall__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::_Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIEventDelegate_OnPTZRecall_DelegateWrapper(const FMulticastScriptDelegate& NDIEventDelegate_OnPTZRecall, int32 Index)
{
	struct _Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms
	{
		int32 Index;
	};
	_Script_NDIIO_eventNDIEventDelegate_OnPTZRecall_Parms Parms;
	Parms.Index=Index;
	NDIEventDelegate_OnPTZRecall.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIEventDelegate_OnPTZRecall

// Begin Interface UPTZControllableInterface
void UPTZControllableInterface::StaticRegisterNativesUPTZControllableInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTZControllableInterface);
UClass* Z_Construct_UClass_UPTZControllableInterface_NoRegister()
{
	return UPTZControllableInterface::StaticClass();
}
struct Z_Construct_UClass_UPTZControllableInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI PTZ Controllable" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPTZControllableInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTZControllableInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTZControllableInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTZControllableInterface_Statics::ClassParams = {
	&UPTZControllableInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTZControllableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTZControllableInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTZControllableInterface()
{
	if (!Z_Registration_Info_UClass_UPTZControllableInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTZControllableInterface.OuterSingleton, Z_Construct_UClass_UPTZControllableInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTZControllableInterface.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UPTZControllableInterface>()
{
	return UPTZControllableInterface::StaticClass();
}
UPTZControllableInterface::UPTZControllableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTZControllableInterface);
UPTZControllableInterface::~UPTZControllableInterface() {}
// End Interface UPTZControllableInterface

// Begin Class UPTZController Function ReceiveMetaDataFromSender
struct Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics
{
	struct PTZController_eventReceiveMetaDataFromSender_Parms
	{
		UNDIMediaSender* Sender;
		FString Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call with the PTZ metadata received from an NDI media sender */" },
#endif
		{ "DisplayName", "Receive Metadata From Sender" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call with the PTZ metadata received from an NDI media sender" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTZController_eventReceiveMetaDataFromSender_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTZController_eventReceiveMetaDataFromSender_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTZController, nullptr, "ReceiveMetaDataFromSender", nullptr, nullptr, Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::PTZController_eventReceiveMetaDataFromSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::PTZController_eventReceiveMetaDataFromSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTZController::execReceiveMetaDataFromSender)
{
	P_GET_OBJECT(UNDIMediaSender,Z_Param_Sender);
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveMetaDataFromSender(Z_Param_Sender,Z_Param_Data);
	P_NATIVE_END;
}
// End Class UPTZController Function ReceiveMetaDataFromSender

// Begin Class UPTZController
void UPTZController::StaticRegisterNativesUPTZController()
{
	UClass* Class = UPTZController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReceiveMetaDataFromSender", &UPTZController::execReceiveMetaDataFromSender },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTZController);
UClass* Z_Construct_UClass_UPTZController_NoRegister()
{
	return UPTZController::StaticClass();
}
struct Z_Construct_UClass_UPTZController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI PTZ Controller" },
		{ "IncludePath", "Components/NDIPTZControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnablePTZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Enable PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZWithPanLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Pan Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZPanMinLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Pan Min Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZPanMaxLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Pan Max Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPTZPanInvert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Invert Pan" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZWithTiltLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Tilt Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZTiltMinLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Tilt Min Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZTiltMaxLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Tilt Max Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPTZTiltInvert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Invert Tilt" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZWithFoVLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Field of View Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZFoVMinLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Field of View Min Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "170" },
		{ "UIMin", "5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZFoVMaxLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Field of View Max Limit" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "170" },
		{ "UIMin", "5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZRecallEasing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "Preset Recall Easing" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
		{ "UIMax", "60" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZPanSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZTiltSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZZoomSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PTZStoredStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PTZ" },
		{ "DisplayName", "PTZ Presets" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPTZPanTiltSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On PTZ Pan Tilt Speed" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPTZZoomSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On PTZ Zoom Speed" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPTZFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On PTZ Focus" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPTZStore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On PTZ Store" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPTZRecall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On PTZ Recall" },
		{ "ModuleRelativePath", "Public/Components/NDIPTZControllerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_EnablePTZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnablePTZ;
	static void NewProp_PTZWithPanLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PTZWithPanLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZPanMinLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZPanMaxLimit;
	static void NewProp_bPTZPanInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPTZPanInvert;
	static void NewProp_PTZWithTiltLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PTZWithTiltLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZTiltMinLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZTiltMaxLimit;
	static void NewProp_bPTZTiltInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPTZTiltInvert;
	static void NewProp_PTZWithFoVLimit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PTZWithFoVLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZFoVMinLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZFoVMaxLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZRecallEasing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZPanSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZTiltSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PTZZoomSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PTZStoredStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PTZStoredStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPTZPanTiltSpeed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPTZZoomSpeed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPTZFocus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPTZStore;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPTZRecall;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTZController_ReceiveMetaDataFromSender, "ReceiveMetaDataFromSender" }, // 3038624651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTZController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPTZController_Statics::NewProp_EnablePTZ_SetBit(void* Obj)
{
	((UPTZController*)Obj)->EnablePTZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_EnablePTZ = { "EnablePTZ", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTZController), &Z_Construct_UClass_UPTZController_Statics::NewProp_EnablePTZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnablePTZ_MetaData), NewProp_EnablePTZ_MetaData) };
void Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithPanLimit_SetBit(void* Obj)
{
	((UPTZController*)Obj)->PTZWithPanLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithPanLimit = { "PTZWithPanLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTZController), &Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithPanLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZWithPanLimit_MetaData), NewProp_PTZWithPanLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZPanMinLimit = { "PTZPanMinLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZPanMinLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZPanMinLimit_MetaData), NewProp_PTZPanMinLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZPanMaxLimit = { "PTZPanMaxLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZPanMaxLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZPanMaxLimit_MetaData), NewProp_PTZPanMaxLimit_MetaData) };
void Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZPanInvert_SetBit(void* Obj)
{
	((UPTZController*)Obj)->bPTZPanInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZPanInvert = { "bPTZPanInvert", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTZController), &Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZPanInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPTZPanInvert_MetaData), NewProp_bPTZPanInvert_MetaData) };
void Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithTiltLimit_SetBit(void* Obj)
{
	((UPTZController*)Obj)->PTZWithTiltLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithTiltLimit = { "PTZWithTiltLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTZController), &Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithTiltLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZWithTiltLimit_MetaData), NewProp_PTZWithTiltLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZTiltMinLimit = { "PTZTiltMinLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZTiltMinLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZTiltMinLimit_MetaData), NewProp_PTZTiltMinLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZTiltMaxLimit = { "PTZTiltMaxLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZTiltMaxLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZTiltMaxLimit_MetaData), NewProp_PTZTiltMaxLimit_MetaData) };
void Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZTiltInvert_SetBit(void* Obj)
{
	((UPTZController*)Obj)->bPTZTiltInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZTiltInvert = { "bPTZTiltInvert", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTZController), &Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZTiltInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPTZTiltInvert_MetaData), NewProp_bPTZTiltInvert_MetaData) };
void Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithFoVLimit_SetBit(void* Obj)
{
	((UPTZController*)Obj)->PTZWithFoVLimit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithFoVLimit = { "PTZWithFoVLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPTZController), &Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithFoVLimit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZWithFoVLimit_MetaData), NewProp_PTZWithFoVLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZFoVMinLimit = { "PTZFoVMinLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZFoVMinLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZFoVMinLimit_MetaData), NewProp_PTZFoVMinLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZFoVMaxLimit = { "PTZFoVMaxLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZFoVMaxLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZFoVMaxLimit_MetaData), NewProp_PTZFoVMaxLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZRecallEasing = { "PTZRecallEasing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZRecallEasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZRecallEasing_MetaData), NewProp_PTZRecallEasing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZPanSpeed = { "PTZPanSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZPanSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZPanSpeed_MetaData), NewProp_PTZPanSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZTiltSpeed = { "PTZTiltSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZTiltSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZTiltSpeed_MetaData), NewProp_PTZTiltSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZZoomSpeed = { "PTZZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZZoomSpeed_MetaData), NewProp_PTZZoomSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZStoredStates_Inner = { "PTZStoredStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPTZState, METADATA_PARAMS(0, nullptr) }; // 2717044590
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_PTZStoredStates = { "PTZStoredStates", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, PTZStoredStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PTZStoredStates_MetaData), NewProp_PTZStoredStates_MetaData) }; // 2717044590
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, NDIMediaSource), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIMediaSource_MetaData), NewProp_NDIMediaSource_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZPanTiltSpeed = { "OnPTZPanTiltSpeed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, OnPTZPanTiltSpeed), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZPanTiltSpeed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPTZPanTiltSpeed_MetaData), NewProp_OnPTZPanTiltSpeed_MetaData) }; // 1595684529
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZZoomSpeed = { "OnPTZZoomSpeed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, OnPTZZoomSpeed), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZZoomSpeed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPTZZoomSpeed_MetaData), NewProp_OnPTZZoomSpeed_MetaData) }; // 78685945
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZFocus = { "OnPTZFocus", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, OnPTZFocus), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZFocus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPTZFocus_MetaData), NewProp_OnPTZFocus_MetaData) }; // 575351678
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZStore = { "OnPTZStore", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, OnPTZStore), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZStore__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPTZStore_MetaData), NewProp_OnPTZStore_MetaData) }; // 748536338
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZRecall = { "OnPTZRecall", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTZController, OnPTZRecall), Z_Construct_UDelegateFunction_NDIIO_NDIEventDelegate_OnPTZRecall__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPTZRecall_MetaData), NewProp_OnPTZRecall_MetaData) }; // 1691662620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTZController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_EnablePTZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithPanLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZPanMinLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZPanMaxLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZPanInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithTiltLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZTiltMinLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZTiltMaxLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_bPTZTiltInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZWithFoVLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZFoVMinLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZFoVMaxLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZRecallEasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZPanSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZTiltSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZStoredStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_PTZStoredStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_NDIMediaSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZPanTiltSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTZController_Statics::NewProp_OnPTZRecall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTZController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTZController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTZController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTZController_Statics::ClassParams = {
	&UPTZController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPTZController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTZController_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTZController_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTZController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTZController()
{
	if (!Z_Registration_Info_UClass_UPTZController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTZController.OuterSingleton, Z_Construct_UClass_UPTZController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTZController.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UPTZController>()
{
	return UPTZController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTZController);
// End Class UPTZController

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPTZState::StaticStruct, Z_Construct_UScriptStruct_FPTZState_Statics::NewStructOps, TEXT("PTZState"), &Z_Registration_Info_UScriptStruct_PTZState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPTZState), 2717044590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTZControllableInterface, UPTZControllableInterface::StaticClass, TEXT("UPTZControllableInterface"), &Z_Registration_Info_UClass_UPTZControllableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTZControllableInterface), 2580965254U) },
		{ Z_Construct_UClass_UPTZController, UPTZController::StaticClass, TEXT("UPTZController"), &Z_Registration_Info_UClass_UPTZController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTZController), 1697645699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_1854502403(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIPTZControllerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
