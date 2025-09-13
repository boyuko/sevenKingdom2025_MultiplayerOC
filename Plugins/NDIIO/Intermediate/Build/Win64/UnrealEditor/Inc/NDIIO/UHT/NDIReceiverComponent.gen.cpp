// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Components/NDIReceiverComponent.h"
#include "Core/Public/Structures/NDIConnectionInformation.h"
#include "Core/Public/Structures/NDIReceiverPerformanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIReceiverComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIReceiverComponent();
NDIIO_API UClass* Z_Construct_UClass_UNDIReceiverComponent_NoRegister();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Class UNDIReceiverComponent Function ChangeConnection
struct Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics
{
	struct NDIReceiverComponent_eventChangeConnection_Parms
	{
		FNDIConnectionInformation InConnectionInformation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempt to change the connection for which to get audio, video, and metadata frame from\n\x09*/" },
#endif
		{ "DisplayName", "Change Connection" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to change the connection for which to get audio, video, and metadata frame from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConnectionInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConnectionInformation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation = { "InConnectionInformation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventChangeConnection_Parms, InConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectionInformation_MetaData), NewProp_InConnectionInformation_MetaData) }; // 1635080544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NewProp_InConnectionInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "ChangeConnection", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NDIReceiverComponent_eventChangeConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::NDIReceiverComponent_eventChangeConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execChangeConnection)
{
	P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_InConnectionInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeConnection(Z_Param_Out_InConnectionInformation);
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function ChangeConnection

// Begin Class UNDIReceiverComponent Function GetCurrentConnectionInformation
struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics
{
	struct NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms
	{
		FNDIConnectionInformation ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns the current connection information of the connected source\n\x09*/" },
#endif
		{ "DisplayName", "Get Current Connection Information" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current connection information of the connected source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(0, nullptr) }; // 1635080544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentConnectionInformation", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::NDIReceiverComponent_eventGetCurrentConnectionInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentConnectionInformation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNDIConnectionInformation*)Z_Param__Result=P_THIS->GetCurrentConnectionInformation();
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function GetCurrentConnectionInformation

// Begin Class UNDIReceiverComponent Function GetCurrentFrameRate
struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct NDIReceiverComponent_eventGetCurrentFrameRate_Parms
	{
		FFrameRate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns the current framerate of the connected source\n\x09*/" },
#endif
		{ "DisplayName", "Get Current Frame Rate" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current framerate of the connected source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentFrameRate", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::NDIReceiverComponent_eventGetCurrentFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::NDIReceiverComponent_eventGetCurrentFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentFrameRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameRate*)Z_Param__Result=P_THIS->GetCurrentFrameRate();
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function GetCurrentFrameRate

// Begin Class UNDIReceiverComponent Function GetCurrentTimecode
struct Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics
{
	struct FTimecode
	{
		int32 Hours;
		int32 Minutes;
		int32 Seconds;
		int32 Frames;
		float Subframe;
		bool bDropFrameFormat;
	};

	struct NDIReceiverComponent_eventGetCurrentTimecode_Parms
	{
		FTimecode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns the current timecode of the connected source\n\x09*/" },
#endif
		{ "DisplayName", "Get Current Timecode" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current timecode of the connected source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetCurrentTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetCurrentTimecode", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::NDIReceiverComponent_eventGetCurrentTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::NDIReceiverComponent_eventGetCurrentTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execGetCurrentTimecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimecode*)Z_Param__Result=P_THIS->GetCurrentTimecode();
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function GetCurrentTimecode

// Begin Class UNDIReceiverComponent Function GetPerformanceData
struct Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics
{
	struct NDIReceiverComponent_eventGetPerformanceData_Parms
	{
		FNDIReceiverPerformanceData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns the current performance data of the receiver while connected to the source\n\x09*/" },
#endif
		{ "DisplayName", "Get Performance Data" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current performance data of the receiver while connected to the source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventGetPerformanceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(0, nullptr) }; // 3331706505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "GetPerformanceData", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::NDIReceiverComponent_eventGetPerformanceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::NDIReceiverComponent_eventGetPerformanceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execGetPerformanceData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNDIReceiverPerformanceData*)Z_Param__Result=P_THIS->GetPerformanceData();
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function GetPerformanceData

// Begin Class UNDIReceiverComponent Function SendMetadataFrame
struct Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics
{
	struct NDIReceiverComponent_eventSendMetadataFrame_Parms
	{
		FString metadata;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09This will add a metadata frame and return immediately, having scheduled the frame asynchronously\n\x09*/" },
#endif
		{ "DisplayName", "Send Metadata Frame" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will add a metadata frame and return immediately, having scheduled the frame asynchronously" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata = { "metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventSendMetadataFrame_Parms, metadata), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metadata_MetaData), NewProp_metadata_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NewProp_metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "SendMetadataFrame", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NDIReceiverComponent_eventSendMetadataFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::NDIReceiverComponent_eventSendMetadataFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execSendMetadataFrame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMetadataFrame(Z_Param_metadata);
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function SendMetadataFrame

// Begin Class UNDIReceiverComponent Function SendTallyInformation
struct Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics
{
	struct NDIReceiverComponent_eventSendTallyInformation_Parms
	{
		bool IsOnPreview;
		bool IsOnProgram;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09This will setup the up-stream tally notifications. If no streams are connected, it will automatically send\n\x09\x09the tally state upon connection\n\x09*/" },
#endif
		{ "DisplayName", "Send Tally Information" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will setup the up-stream tally notifications. If no streams are connected, it will automatically send\nthe tally state upon connection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOnPreview_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOnProgram_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsOnPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnPreview;
	static void NewProp_IsOnProgram_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnProgram;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_SetBit(void* Obj)
{
	((NDIReceiverComponent_eventSendTallyInformation_Parms*)Obj)->IsOnPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview = { "IsOnPreview", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIReceiverComponent_eventSendTallyInformation_Parms), &Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOnPreview_MetaData), NewProp_IsOnPreview_MetaData) };
void Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_SetBit(void* Obj)
{
	((NDIReceiverComponent_eventSendTallyInformation_Parms*)Obj)->IsOnProgram = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram = { "IsOnProgram", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIReceiverComponent_eventSendTallyInformation_Parms), &Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOnProgram_MetaData), NewProp_IsOnProgram_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NewProp_IsOnProgram,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "SendTallyInformation", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NDIReceiverComponent_eventSendTallyInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::NDIReceiverComponent_eventSendTallyInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execSendTallyInformation)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsOnPreview);
	P_GET_UBOOL_REF(Z_Param_Out_IsOnProgram);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendTallyInformation(Z_Param_Out_IsOnPreview,Z_Param_Out_IsOnProgram);
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function SendTallyInformation

// Begin Class UNDIReceiverComponent Function ShutdownReceiver
struct Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempts to stop receiving audio, video, and metadata frame from the connected source\n\x09*/" },
#endif
		{ "DisplayName", "Shutdown Receiver" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to stop receiving audio, video, and metadata frame from the connected source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "ShutdownReceiver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execShutdownReceiver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShutdownReceiver();
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function ShutdownReceiver

// Begin Class UNDIReceiverComponent Function StartReceiver
struct Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics
{
	struct NDIReceiverComponent_eventStartReceiver_Parms
	{
		FNDIConnectionInformation InConnectionInformation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Begin receiving NDI audio, video, and metadata frames\n\x09*/" },
#endif
		{ "DisplayName", "Start Receiver" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin receiving NDI audio, video, and metadata frames" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConnectionInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConnectionInformation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation = { "InConnectionInformation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIReceiverComponent_eventStartReceiver_Parms, InConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectionInformation_MetaData), NewProp_InConnectionInformation_MetaData) }; // 1635080544
void Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NDIReceiverComponent_eventStartReceiver_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIReceiverComponent_eventStartReceiver_Parms), &Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_InConnectionInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIReceiverComponent, nullptr, "StartReceiver", nullptr, nullptr, Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NDIReceiverComponent_eventStartReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::NDIReceiverComponent_eventStartReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIReceiverComponent::execStartReceiver)
{
	P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_InConnectionInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartReceiver(Z_Param_Out_InConnectionInformation);
	P_NATIVE_END;
}
// End Class UNDIReceiverComponent Function StartReceiver

// Begin Class UNDIReceiverComponent
void UNDIReceiverComponent::StaticRegisterNativesUNDIReceiverComponent()
{
	UClass* Class = UNDIReceiverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeConnection", &UNDIReceiverComponent::execChangeConnection },
		{ "GetCurrentConnectionInformation", &UNDIReceiverComponent::execGetCurrentConnectionInformation },
		{ "GetCurrentFrameRate", &UNDIReceiverComponent::execGetCurrentFrameRate },
		{ "GetCurrentTimecode", &UNDIReceiverComponent::execGetCurrentTimecode },
		{ "GetPerformanceData", &UNDIReceiverComponent::execGetPerformanceData },
		{ "SendMetadataFrame", &UNDIReceiverComponent::execSendMetadataFrame },
		{ "SendTallyInformation", &UNDIReceiverComponent::execSendTallyInformation },
		{ "ShutdownReceiver", &UNDIReceiverComponent::execShutdownReceiver },
		{ "StartReceiver", &UNDIReceiverComponent::execStartReceiver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIReceiverComponent);
UClass* Z_Construct_UClass_UNDIReceiverComponent_NoRegister()
{
	return UNDIReceiverComponent::StaticClass();
}
struct Z_Construct_UClass_UNDIReceiverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""A component used to receive audio, video, and metadata over NDI\n*/" },
#endif
		{ "DisplayName", "NDI Receiver Component" },
		{ "IncludePath", "Components/NDIReceiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A component used to receive audio, video, and metadata over NDI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The NDI Media Receiver representing the configuration of the network source to receive audio, video, and\n\x09 * metadata from */" },
#endif
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Components/NDIReceiverComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The NDI Media Receiver representing the configuration of the network source to receive audio, video, and\nmetadata from" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIReceiverComponent_ChangeConnection, "ChangeConnection" }, // 1570031881
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentConnectionInformation, "GetCurrentConnectionInformation" }, // 1303120461
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentFrameRate, "GetCurrentFrameRate" }, // 2202667161
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetCurrentTimecode, "GetCurrentTimecode" }, // 2892023069
		{ &Z_Construct_UFunction_UNDIReceiverComponent_GetPerformanceData, "GetPerformanceData" }, // 2374652389
		{ &Z_Construct_UFunction_UNDIReceiverComponent_SendMetadataFrame, "SendMetadataFrame" }, // 1441039985
		{ &Z_Construct_UFunction_UNDIReceiverComponent_SendTallyInformation, "SendTallyInformation" }, // 1555676998
		{ &Z_Construct_UFunction_UNDIReceiverComponent_ShutdownReceiver, "ShutdownReceiver" }, // 1634405556
		{ &Z_Construct_UFunction_UNDIReceiverComponent_StartReceiver, "StartReceiver" }, // 1430919998
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIReceiverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIReceiverComponent, NDIMediaSource), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIMediaSource_MetaData), NewProp_NDIMediaSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIReceiverComponent_Statics::NewProp_NDIMediaSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIReceiverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIReceiverComponent_Statics::ClassParams = {
	&UNDIReceiverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIReceiverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIReceiverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIReceiverComponent()
{
	if (!Z_Registration_Info_UClass_UNDIReceiverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIReceiverComponent.OuterSingleton, Z_Construct_UClass_UNDIReceiverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIReceiverComponent.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UNDIReceiverComponent>()
{
	return UNDIReceiverComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIReceiverComponent);
UNDIReceiverComponent::~UNDIReceiverComponent() {}
// End Class UNDIReceiverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIReceiverComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIReceiverComponent, UNDIReceiverComponent::StaticClass, TEXT("UNDIReceiverComponent"), &Z_Registration_Info_UClass_UNDIReceiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIReceiverComponent), 359978889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIReceiverComponent_h_2940385800(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIReceiverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Components_NDIReceiverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
