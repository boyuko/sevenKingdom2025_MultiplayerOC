// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Media/NDIMediaReceiver.h"
#include "Core/Public/Structures/NDIConnectionInformation.h"
#include "Core/Public/Structures/NDIReceiverPerformanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIMediaReceiver() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaTexture2D_NoRegister();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature();
NDIIO_API UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIReceiverPerformanceData();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin Delegate FNDIMediaReceiverVideoReceived
struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms
	{
		UNDIMediaReceiver* Receiver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""Delegates to notify that the NDIMediaReceiver has received a video, audio, or metadata frame\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates to notify that the NDIMediaReceiver has received a video, audio, or metadata frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms, Receiver), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::NewProp_Receiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaReceiverVideoReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIMediaReceiverVideoReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaReceiverVideoReceived, UNDIMediaReceiver* Receiver)
{
	struct _Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms
	{
		UNDIMediaReceiver* Receiver;
	};
	_Script_NDIIO_eventNDIMediaReceiverVideoReceived_Parms Parms;
	Parms.Receiver=Receiver;
	NDIMediaReceiverVideoReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIMediaReceiverVideoReceived

// Begin Delegate FNDIMediaReceiverAudioReceived
struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms
	{
		UNDIMediaReceiver* Receiver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms, Receiver), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::NewProp_Receiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaReceiverAudioReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIMediaReceiverAudioReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaReceiverAudioReceived, UNDIMediaReceiver* Receiver)
{
	struct _Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms
	{
		UNDIMediaReceiver* Receiver;
	};
	_Script_NDIIO_eventNDIMediaReceiverAudioReceived_Parms Parms;
	Parms.Receiver=Receiver;
	NDIMediaReceiverAudioReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIMediaReceiverAudioReceived

// Begin Delegate FNDIMediaReceiverMetaDataReceived
struct Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics
{
	struct _Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms
	{
		UNDIMediaReceiver* Receiver;
		FString Data;
		bool bAttachedToVideoFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static void NewProp_bAttachedToVideoFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachedToVideoFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms, Receiver), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_bAttachedToVideoFrame_SetBit(void* Obj)
{
	((_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms*)Obj)->bAttachedToVideoFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_bAttachedToVideoFrame = { "bAttachedToVideoFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms), &Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_bAttachedToVideoFrame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_Receiver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::NewProp_bAttachedToVideoFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NDIIO, nullptr, "NDIMediaReceiverMetaDataReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FNDIMediaReceiverMetaDataReceived_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaReceiverMetaDataReceived, UNDIMediaReceiver* Receiver, const FString& Data, bool bAttachedToVideoFrame)
{
	struct _Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms
	{
		UNDIMediaReceiver* Receiver;
		FString Data;
		bool bAttachedToVideoFrame;
	};
	_Script_NDIIO_eventNDIMediaReceiverMetaDataReceived_Parms Parms;
	Parms.Receiver=Receiver;
	Parms.Data=Data;
	Parms.bAttachedToVideoFrame=bAttachedToVideoFrame ? true : false;
	NDIMediaReceiverMetaDataReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FNDIMediaReceiverMetaDataReceived

// Begin Class UNDIMediaReceiver Function ChangeConnection
struct Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics
{
	struct NDIMediaReceiver_eventChangeConnection_Parms
	{
		FNDIConnectionInformation InConnectionInformation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempts to change the connection to another NDI sender source\n\x09*/" },
#endif
		{ "DisplayName", "Change Connection" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to change the connection to another NDI sender source" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::NewProp_InConnectionInformation = { "InConnectionInformation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventChangeConnection_Parms, InConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConnectionInformation_MetaData), NewProp_InConnectionInformation_MetaData) }; // 1635080544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::NewProp_InConnectionInformation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "ChangeConnection", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::NDIMediaReceiver_eventChangeConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::NDIMediaReceiver_eventChangeConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execChangeConnection)
{
	P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_InConnectionInformation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeConnection(Z_Param_Out_InConnectionInformation);
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function ChangeConnection

// Begin Class UNDIMediaReceiver Function ChangeVideoTexture
struct Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics
{
	struct NDIMediaReceiver_eventChangeVideoTexture_Parms
	{
		UNDIMediaTexture2D* InVideoTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempts to change the Video Texture object used as the video frame capture object\n\x09*/" },
#endif
		{ "CPP_Default_InVideoTexture", "None" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to change the Video Texture object used as the video frame capture object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InVideoTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NewProp_InVideoTexture = { "InVideoTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventChangeVideoTexture_Parms, InVideoTexture), Z_Construct_UClass_UNDIMediaTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NewProp_InVideoTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "ChangeVideoTexture", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NDIMediaReceiver_eventChangeVideoTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::NDIMediaReceiver_eventChangeVideoTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execChangeVideoTexture)
{
	P_GET_OBJECT(UNDIMediaTexture2D,Z_Param_InVideoTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeVideoTexture(Z_Param_InVideoTexture);
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function ChangeVideoTexture

// Begin Class UNDIMediaReceiver Function GetCurrentConnectionInformation
struct Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics
{
	struct NDIMediaReceiver_eventGetCurrentConnectionInformation_Parms
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
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current connection information of the connected source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventGetCurrentConnectionInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1635080544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "GetCurrentConnectionInformation", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::NDIMediaReceiver_eventGetCurrentConnectionInformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::NDIMediaReceiver_eventGetCurrentConnectionInformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execGetCurrentConnectionInformation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNDIConnectionInformation*)Z_Param__Result=P_THIS->GetCurrentConnectionInformation();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function GetCurrentConnectionInformation

// Begin Class UNDIMediaReceiver Function GetCurrentFrameRate
struct Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct NDIMediaReceiver_eventGetCurrentFrameRate_Parms
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
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current framerate of the connected source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventGetCurrentFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "GetCurrentFrameRate", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::NDIMediaReceiver_eventGetCurrentFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::NDIMediaReceiver_eventGetCurrentFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execGetCurrentFrameRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameRate*)Z_Param__Result=P_THIS->GetCurrentFrameRate();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function GetCurrentFrameRate

// Begin Class UNDIMediaReceiver Function GetCurrentResolution
struct Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics
{
	struct NDIMediaReceiver_eventGetCurrentResolution_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns the current resolution of the connected source\n\x09*/" },
#endif
		{ "DisplayName", "Get Current Resolution" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current resolution of the connected source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventGetCurrentResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "GetCurrentResolution", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::NDIMediaReceiver_eventGetCurrentResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::NDIMediaReceiver_eventGetCurrentResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execGetCurrentResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetCurrentResolution();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function GetCurrentResolution

// Begin Class UNDIMediaReceiver Function GetCurrentTimecode
struct Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics
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

	struct NDIMediaReceiver_eventGetCurrentTimecode_Parms
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
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current timecode of the connected source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventGetCurrentTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "GetCurrentTimecode", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::NDIMediaReceiver_eventGetCurrentTimecode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::NDIMediaReceiver_eventGetCurrentTimecode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execGetCurrentTimecode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTimecode*)Z_Param__Result=P_THIS->GetCurrentTimecode();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function GetCurrentTimecode

// Begin Class UNDIMediaReceiver Function GetIsCurrentlyConnected
struct Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics
{
	struct NDIMediaReceiver_eventGetIsCurrentlyConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a value indicating whether this object is currently connected to the sender source */" },
#endif
		{ "DisplayName", "Is Currently Connected" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a value indicating whether this object is currently connected to the sender source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NDIMediaReceiver_eventGetIsCurrentlyConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIMediaReceiver_eventGetIsCurrentlyConnected_Parms), &Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "GetIsCurrentlyConnected", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::NDIMediaReceiver_eventGetIsCurrentlyConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::NDIMediaReceiver_eventGetIsCurrentlyConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execGetIsCurrentlyConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsCurrentlyConnected();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function GetIsCurrentlyConnected

// Begin Class UNDIMediaReceiver Function GetPerformanceData
struct Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics
{
	struct NDIMediaReceiver_eventGetPerformanceData_Parms
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
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current performance data of the receiver while connected to the source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventGetPerformanceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3331706505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "GetPerformanceData", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::NDIMediaReceiver_eventGetPerformanceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::NDIMediaReceiver_eventGetPerformanceData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execGetPerformanceData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNDIReceiverPerformanceData*)Z_Param__Result=P_THIS->GetPerformanceData();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function GetPerformanceData

// Begin Class UNDIMediaReceiver Function SendMetadataFrame
struct Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics
{
	struct NDIMediaReceiver_eventSendMetadataFrame_Parms
	{
		FString Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09This will send a metadata frame to the sender\n\x09\x09The data is expected to be valid XML\n\x09*/" },
#endif
		{ "DisplayName", "Send Metadata To Sender" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will send a metadata frame to the sender\nThe data is expected to be valid XML" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventSendMetadataFrame_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "SendMetadataFrame", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::NDIMediaReceiver_eventSendMetadataFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::NDIMediaReceiver_eventSendMetadataFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execSendMetadataFrame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMetadataFrame(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function SendMetadataFrame

// Begin Class UNDIMediaReceiver Function SendMetadataFrameAttr
struct Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics
{
	struct NDIMediaReceiver_eventSendMetadataFrameAttr_Parms
	{
		FString Element;
		FString ElementData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09This will send a metadata frame to the sender\n\x09\x09The data will be formatted as: <Element>ElementData</Element>\n\x09*/" },
#endif
		{ "DisplayName", "Send Metadata To Sender (Element + Data)" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will send a metadata frame to the sender\nThe data will be formatted as: <Element>ElementData</Element>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Element;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ElementData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventSendMetadataFrameAttr_Parms, Element), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::NewProp_ElementData = { "ElementData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventSendMetadataFrameAttr_Parms, ElementData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementData_MetaData), NewProp_ElementData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::NewProp_ElementData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "SendMetadataFrameAttr", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::NDIMediaReceiver_eventSendMetadataFrameAttr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::NDIMediaReceiver_eventSendMetadataFrameAttr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execSendMetadataFrameAttr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Element);
	P_GET_PROPERTY(FStrProperty,Z_Param_ElementData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMetadataFrameAttr(Z_Param_Element,Z_Param_ElementData);
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function SendMetadataFrameAttr

// Begin Class UNDIMediaReceiver Function SendMetadataFrameAttrs
struct Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics
{
	struct NDIMediaReceiver_eventSendMetadataFrameAttrs_Parms
	{
		FString Element;
		TMap<FString,FString> Attributes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09This will send a metadata frame to the sender\n\x09\x09The data will be formatted as: <Element Key0=\"Value0\" Key1=\"Value1\" Keyn=\"Valuen\"/>\n\x09*/" },
#endif
		{ "DisplayName", "Send Metadata To Sender (Element + Attributes)" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will send a metadata frame to the sender\nThe data will be formatted as: <Element Key0=\"Value0\" Key1=\"Value1\" Keyn=\"Valuen\"/>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Element;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventSendMetadataFrameAttrs_Parms, Element), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIMediaReceiver_eventSendMetadataFrameAttrs_Parms, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "SendMetadataFrameAttrs", nullptr, nullptr, Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NDIMediaReceiver_eventSendMetadataFrameAttrs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::NDIMediaReceiver_eventSendMetadataFrameAttrs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execSendMetadataFrameAttrs)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Element);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Attributes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMetadataFrameAttrs(Z_Param_Element,Z_Param_Out_Attributes);
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function SendMetadataFrameAttrs

// Begin Class UNDIMediaReceiver Function StartConnection
struct Z_Construct_UFunction_UNDIMediaReceiver_StartConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempt to (re-)start the connection\n\x09*/" },
#endif
		{ "DisplayName", "Start Connection" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempt to (re-)start the connection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_StartConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "StartConnection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_StartConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_StartConnection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_StartConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_StartConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execStartConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartConnection();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function StartConnection

// Begin Class UNDIMediaReceiver Function StopConnection
struct Z_Construct_UFunction_UNDIMediaReceiver_StopConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Stop the connection\n\x09*/" },
#endif
		{ "DisplayName", "Stop Connection" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the connection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIMediaReceiver_StopConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIMediaReceiver, nullptr, "StopConnection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIMediaReceiver_StopConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIMediaReceiver_StopConnection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNDIMediaReceiver_StopConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIMediaReceiver_StopConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIMediaReceiver::execStopConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopConnection();
	P_NATIVE_END;
}
// End Class UNDIMediaReceiver Function StopConnection

// Begin Class UNDIMediaReceiver
void UNDIMediaReceiver::StaticRegisterNativesUNDIMediaReceiver()
{
	UClass* Class = UNDIMediaReceiver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeConnection", &UNDIMediaReceiver::execChangeConnection },
		{ "ChangeVideoTexture", &UNDIMediaReceiver::execChangeVideoTexture },
		{ "GetCurrentConnectionInformation", &UNDIMediaReceiver::execGetCurrentConnectionInformation },
		{ "GetCurrentFrameRate", &UNDIMediaReceiver::execGetCurrentFrameRate },
		{ "GetCurrentResolution", &UNDIMediaReceiver::execGetCurrentResolution },
		{ "GetCurrentTimecode", &UNDIMediaReceiver::execGetCurrentTimecode },
		{ "GetIsCurrentlyConnected", &UNDIMediaReceiver::execGetIsCurrentlyConnected },
		{ "GetPerformanceData", &UNDIMediaReceiver::execGetPerformanceData },
		{ "SendMetadataFrame", &UNDIMediaReceiver::execSendMetadataFrame },
		{ "SendMetadataFrameAttr", &UNDIMediaReceiver::execSendMetadataFrameAttr },
		{ "SendMetadataFrameAttrs", &UNDIMediaReceiver::execSendMetadataFrameAttrs },
		{ "StartConnection", &UNDIMediaReceiver::execStartConnection },
		{ "StopConnection", &UNDIMediaReceiver::execStopConnection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIMediaReceiver);
UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister()
{
	return UNDIMediaReceiver::StaticClass();
}
struct Z_Construct_UClass_UNDIMediaReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Content" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""A Media object representing the NDI Receiver for being able to receive Audio, Video, and Metadata over NDI\n*/" },
#endif
		{ "DisplayName", "NDI Media Receiver" },
		{ "HideCategories", "Platforms Information Object Object" },
		{ "IncludePath", "Objects/Media/NDIMediaReceiver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Media object representing the NDI Receiver for being able to receive Audio, Video, and Metadata over NDI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Information describing detailed information about the sender this receiver is to connect to\n\x09*/" },
#endif
		{ "DisplayName", "Connection" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information describing detailed information about the sender this receiver is to connect to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09The current frame count, seconds, minutes, and hours in time-code notation\n\x09*/" },
#endif
		{ "DisplayName", "Timecode" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current frame count, seconds, minutes, and hours in time-code notation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09The desired number of frames (per second) for video to be displayed\n\x09*/" },
#endif
		{ "DisplayName", "Frame Rate" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired number of frames (per second) for video to be displayed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09The width and height of the last received video frame\n\x09*/" },
#endif
		{ "DisplayName", "Resolution" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width and height of the last received video frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTimecodeToSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Indicates whether the timecode should be synced to the Source Timecode value\n\x09*/" },
#endif
		{ "DisplayName", "Sync Timecode to Source" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the timecode should be synced to the Source Timecode value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformsRGBtoLinear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Should perform the sRGB to Linear color space conversion\n\x09*/" },
#endif
		{ "DisplayName", "Perform sRGB to Linear?" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should perform the sRGB to Linear color space conversion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInformation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Information describing detailed information about the sender this receiver is currently connected to\n\x09*/" },
#endif
		{ "DisplayName", "Connection Information" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information describing detailed information about the sender this receiver is currently connected to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Information describing detailed information about the receiver performance when connected to an NDI sender\n\x09*/" },
#endif
		{ "DisplayName", "Performance Data" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information describing detailed information about the receiver performance when connected to an NDI sender" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintSetter", "ChangeVideoTexture" },
		{ "Category", "Content" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Provides an NDI Video Texture object to render videos frames from the source onto (optional)\n\x09*/" },
#endif
		{ "DisplayName", "Video Texture (optional)" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides an NDI Video Texture object to render videos frames from the source onto (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiverVideoReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Video Received by Receiver" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiverAudioReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On Audio Received by Receiver" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReceiverMetaDataReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI Events" },
		{ "DisplayName", "On MetaData Received by Receiver" },
		{ "ModuleRelativePath", "Public/Objects/Media/NDIMediaReceiver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static void NewProp_bSyncTimecodeToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTimecodeToSource;
	static void NewProp_bPerformsRGBtoLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformsRGBtoLinear;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionInformation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoTexture;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiverVideoReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiverAudioReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceiverMetaDataReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIMediaReceiver_ChangeConnection, "ChangeConnection" }, // 1898858914
		{ &Z_Construct_UFunction_UNDIMediaReceiver_ChangeVideoTexture, "ChangeVideoTexture" }, // 745631354
		{ &Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentConnectionInformation, "GetCurrentConnectionInformation" }, // 1097697888
		{ &Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentFrameRate, "GetCurrentFrameRate" }, // 1463935175
		{ &Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentResolution, "GetCurrentResolution" }, // 4233355851
		{ &Z_Construct_UFunction_UNDIMediaReceiver_GetCurrentTimecode, "GetCurrentTimecode" }, // 775694987
		{ &Z_Construct_UFunction_UNDIMediaReceiver_GetIsCurrentlyConnected, "GetIsCurrentlyConnected" }, // 106476355
		{ &Z_Construct_UFunction_UNDIMediaReceiver_GetPerformanceData, "GetPerformanceData" }, // 2829753622
		{ &Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrame, "SendMetadataFrame" }, // 1412729804
		{ &Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttr, "SendMetadataFrameAttr" }, // 3697305022
		{ &Z_Construct_UFunction_UNDIMediaReceiver_SendMetadataFrameAttrs, "SendMetadataFrameAttrs" }, // 670924567
		{ &Z_Construct_UFunction_UNDIMediaReceiver_StartConnection, "StartConnection" }, // 3092525788
		{ &Z_Construct_UFunction_UNDIMediaReceiver_StopConnection, "StopConnection" }, // 2305861806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIMediaReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionSetting = { "ConnectionSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, ConnectionSetting), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionSetting_MetaData), NewProp_ConnectionSetting_MetaData) }; // 1635080544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timecode_MetaData), NewProp_Timecode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRate_MetaData), NewProp_FrameRate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
void Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_SetBit(void* Obj)
{
	((UNDIMediaReceiver*)Obj)->bSyncTimecodeToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource = { "bSyncTimecodeToSource", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaReceiver), &Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncTimecodeToSource_MetaData), NewProp_bSyncTimecodeToSource_MetaData) };
void Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_SetBit(void* Obj)
{
	((UNDIMediaReceiver*)Obj)->bPerformsRGBtoLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear = { "bPerformsRGBtoLinear", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNDIMediaReceiver), &Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformsRGBtoLinear_MetaData), NewProp_bPerformsRGBtoLinear_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionInformation_MetaData), NewProp_ConnectionInformation_MetaData) }; // 1635080544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData = { "PerformanceData", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, PerformanceData), Z_Construct_UScriptStruct_FNDIReceiverPerformanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceData_MetaData), NewProp_PerformanceData_MetaData) }; // 3331706505
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture = { "VideoTexture", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, VideoTexture), Z_Construct_UClass_UNDIMediaTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoTexture_MetaData), NewProp_VideoTexture_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_OnReceiverVideoReceived = { "OnReceiverVideoReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, OnReceiverVideoReceived), Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverVideoReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceiverVideoReceived_MetaData), NewProp_OnReceiverVideoReceived_MetaData) }; // 2551552615
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_OnReceiverAudioReceived = { "OnReceiverAudioReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, OnReceiverAudioReceived), Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverAudioReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceiverAudioReceived_MetaData), NewProp_OnReceiverAudioReceived_MetaData) }; // 1716969205
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_OnReceiverMetaDataReceived = { "OnReceiverMetaDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNDIMediaReceiver, OnReceiverMetaDataReceived), Z_Construct_UDelegateFunction_NDIIO_NDIMediaReceiverMetaDataReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReceiverMetaDataReceived_MetaData), NewProp_OnReceiverMetaDataReceived_MetaData) }; // 3689172736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Timecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bSyncTimecodeToSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_bPerformsRGBtoLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_ConnectionInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_PerformanceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_VideoTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_OnReceiverVideoReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_OnReceiverAudioReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIMediaReceiver_Statics::NewProp_OnReceiverMetaDataReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNDIMediaReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTimeSynchronizableMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIMediaReceiver_Statics::ClassParams = {
	&UNDIMediaReceiver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIMediaReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIMediaReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIMediaReceiver()
{
	if (!Z_Registration_Info_UClass_UNDIMediaReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIMediaReceiver.OuterSingleton, Z_Construct_UClass_UNDIMediaReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIMediaReceiver.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UNDIMediaReceiver>()
{
	return UNDIMediaReceiver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIMediaReceiver);
UNDIMediaReceiver::~UNDIMediaReceiver() {}
// End Class UNDIMediaReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIMediaReceiver, UNDIMediaReceiver::StaticClass, TEXT("UNDIMediaReceiver"), &Z_Registration_Info_UClass_UNDIMediaReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIMediaReceiver), 1863691520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_2806783232(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Media_NDIMediaReceiver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
