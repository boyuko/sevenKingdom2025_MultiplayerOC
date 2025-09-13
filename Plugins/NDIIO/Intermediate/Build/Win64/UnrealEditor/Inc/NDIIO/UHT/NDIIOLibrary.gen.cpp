// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Objects/Libraries/NDIIOLibrary.h"
#include "Core/Public/Structures/NDIConnectionInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIIOLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NDIIO_API UClass* Z_Construct_UClass_UNDIIOLibrary();
NDIIO_API UClass* Z_Construct_UClass_UNDIIOLibrary_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaReceiver_NoRegister();
NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIConnectionInformation();
NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIMetaDataElement();
UPackage* Z_Construct_UPackage__Script_NDIIO();
// End Cross Module References

// Begin ScriptStruct FNDIMetaDataElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIMetaDataElement;
class UScriptStruct* FNDIMetaDataElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIMetaDataElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIMetaDataElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIMetaDataElement, (UObject*)Z_Construct_UPackage__Script_NDIIO(), TEXT("NDIMetaDataElement"));
	}
	return Z_Registration_Info_UScriptStruct_NDIMetaDataElement.OuterSingleton;
}
template<> NDIIO_API UScriptStruct* StaticStruct<FNDIMetaDataElement>()
{
	return FNDIMetaDataElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09""An metadata element as returned by K2_ParseNDIMetaData()\n\x09""Blueprints do not support recursive datastructures, so parsing metadata\n\x09with this will result in only the top-level elements being returned.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An metadata element as returned by K2_ParseNDIMetaData()\nBlueprints do not support recursive datastructures, so parsing metadata\nwith this will result in only the top-level elements being returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ElementName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIMetaDataElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMetaDataElement, ElementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementName_MetaData), NewProp_ElementName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMetaDataElement, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDIMetaDataElement, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_ElementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	nullptr,
	&NewStructOps,
	"NDIMetaDataElement",
	Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::PropPointers),
	sizeof(FNDIMetaDataElement),
	alignof(FNDIMetaDataElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNDIMetaDataElement()
{
	if (!Z_Registration_Info_UScriptStruct_NDIMetaDataElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIMetaDataElement.InnerSingleton, Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NDIMetaDataElement.InnerSingleton;
}
// End ScriptStruct FNDIMetaDataElement

// Begin Class UNDIIOLibrary Function K2_BeginBroadcastingActiveViewport
struct Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics
{
	struct NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempts to start broadcasting the active viewport. The output of the active viewport is the current camera\n\x09\x09that is actively being viewed (through), and does not have to be an NDI Broadcast Viewport Component.\n\n\x09\x09@return The result of whether broadcasting the active viewport was started\n\x09*/" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Begin Broadcasting Active Viewport" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to start broadcasting the active viewport. The output of the active viewport is the current camera\nthat is actively being viewed (through), and does not have to be an NDI Broadcast Viewport Component.\n\n@return The result of whether broadcasting the active viewport was started" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms), &Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_BeginBroadcastingActiveViewport", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::NDIIOLibrary_eventK2_BeginBroadcastingActiveViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_BeginBroadcastingActiveViewport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNDIIOLibrary::K2_BeginBroadcastingActiveViewport(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_BeginBroadcastingActiveViewport

// Begin Class UNDIIOLibrary Function K2_FindNetworkSourceByName
struct Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics
{
	struct NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms
	{
		UObject* WorldContextObject;
		FNDIConnectionInformation ConnectionInformation;
		FString InSourceName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09""Attempts to search the NDI Source Collection for the source name, returning a result indicating\n\x09\x09success with the ConnectionInformation parameter filled with the found connection\n\n\x09\x09@param ConnectionInformation The connection information for a successful find with the supplied InSourceName\n\x09\x09@param InSourceName The name of the source to find within the collection of NDI sources\n\n\x09\x09@return The result of whether the search was successful\n\x09*/" },
#endif
		{ "CPP_Default_InSourceName", "" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Find Network Source by Name" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to search the NDI Source Collection for the source name, returning a result indicating\nsuccess with the ConnectionInformation parameter filled with the found connection\n\n@param ConnectionInformation The connection information for a successful find with the supplied InSourceName\n@param InSourceName The name of the source to find within the collection of NDI sources\n\n@return The result of whether the search was successful" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionInformation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSourceName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ConnectionInformation = { "ConnectionInformation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms, ConnectionInformation), Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(0, nullptr) }; // 1635080544
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms, InSourceName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms), &Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ConnectionInformation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_InSourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_FindNetworkSourceByName", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::NDIIOLibrary_eventK2_FindNetworkSourceByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_FindNetworkSourceByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FNDIConnectionInformation,Z_Param_Out_ConnectionInformation);
	P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNDIIOLibrary::K2_FindNetworkSourceByName(Z_Param_WorldContextObject,Z_Param_Out_ConnectionInformation,Z_Param_InSourceName);
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_FindNetworkSourceByName

// Begin Class UNDIIOLibrary Function K2_GetNDIMediaReceiver
struct Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics
{
	struct NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms
	{
		UNDIMediaReceiver* Receiver;
		UNDIMediaReceiver* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns an NDI Media Receiver object\n\n\x09\x09@param Receiver The Receiver object to return\n\x09\x09@return The selected Receiver object\n\x09*/" },
#endif
		{ "CPP_Default_Receiver", "None" },
		{ "DisplayName", "Get NDI Media Receiver" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an NDI Media Receiver object\n\n@param Receiver The Receiver object to return\n@return The selected Receiver object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms, Receiver), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms, ReturnValue), Z_Construct_UClass_UNDIMediaReceiver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_Receiver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_GetNDIMediaReceiver", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::NDIIOLibrary_eventK2_GetNDIMediaReceiver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_GetNDIMediaReceiver)
{
	P_GET_OBJECT(UNDIMediaReceiver,Z_Param_Receiver);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNDIMediaReceiver**)Z_Param__Result=UNDIIOLibrary::K2_GetNDIMediaReceiver(Z_Param_Receiver);
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_GetNDIMediaReceiver

// Begin Class UNDIIOLibrary Function K2_GetNDIMediaSender
struct Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics
{
	struct NDIIOLibrary_eventK2_GetNDIMediaSender_Parms
	{
		UNDIMediaSender* Sender;
		UNDIMediaSender* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Returns an NDI Media Sender object\n\n\x09\x09@param Sender The Sender object to return\n\x09\x09@return The selected Sender object\n\x09*/" },
#endif
		{ "CPP_Default_Sender", "None" },
		{ "DisplayName", "Get NDI Media Sender" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an NDI Media Sender object\n\n@param Sender The Sender object to return\n@return The selected Sender object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaSender_Parms, Sender), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDIMediaSender_Parms, ReturnValue), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_GetNDIMediaSender", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NDIIOLibrary_eventK2_GetNDIMediaSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::NDIIOLibrary_eventK2_GetNDIMediaSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_GetNDIMediaSender)
{
	P_GET_OBJECT(UNDIMediaSender,Z_Param_Sender);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNDIMediaSender**)Z_Param__Result=UNDIIOLibrary::K2_GetNDIMediaSender(Z_Param_Sender);
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_GetNDIMediaSender

// Begin Class UNDIIOLibrary Function K2_GetNDISourceCollection
struct Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics
{
	struct NDIIOLibrary_eventK2_GetNDISourceCollection_Parms
	{
		TArray<FNDIConnectionInformation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Retrieves a collection of NDI sources appearing on the network\n\n\x09\x09@return A collection of NDI Sources appearing on the network\n\x09*/" },
#endif
		{ "DisplayName", "Get NDI Source Collection" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves a collection of NDI sources appearing on the network\n\n@return A collection of NDI Sources appearing on the network" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIConnectionInformation, METADATA_PARAMS(0, nullptr) }; // 1635080544
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_GetNDISourceCollection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1635080544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_GetNDISourceCollection", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NDIIOLibrary_eventK2_GetNDISourceCollection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::NDIIOLibrary_eventK2_GetNDISourceCollection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_GetNDISourceCollection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNDIConnectionInformation>*)Z_Param__Result=UNDIIOLibrary::K2_GetNDISourceCollection();
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_GetNDISourceCollection

// Begin Class UNDIIOLibrary Function K2_ParseNDIMetaData
struct Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics
{
	struct NDIIOLibrary_eventK2_ParseNDIMetaData_Parms
	{
		FString Data;
		TArray<FNDIMetaDataElement> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Parses a string as metadata\n\x09\x09""Blueprints do not support recursive datastructures, so parsing metadata\n\x09\x09with this will result in only the top-level elements being returned.\n\x09*/" },
#endif
		{ "DisplayName", "Parse NDI MetaData" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parses a string as metadata\nBlueprints do not support recursive datastructures, so parsing metadata\nwith this will result in only the top-level elements being returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_ParseNDIMetaData_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDIMetaDataElement, METADATA_PARAMS(0, nullptr) }; // 1987782048
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_ParseNDIMetaData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1987782048
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_ParseNDIMetaData", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NDIIOLibrary_eventK2_ParseNDIMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::NDIIOLibrary_eventK2_ParseNDIMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_ParseNDIMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNDIMetaDataElement>*)Z_Param__Result=UNDIIOLibrary::K2_ParseNDIMetaData(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_ParseNDIMetaData

// Begin Class UNDIIOLibrary Function K2_StopBroadcastingActiveViewport
struct Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics
{
	struct NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NDI IO" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09Will stop broadcasting the active viewport, which was started by a previous call to 'Begin Broadcasting Active\n\x09   Viewport'\n\x09*/" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Stop Broadcasting Active Viewport" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will stop broadcasting the active viewport, which was started by a previous call to 'Begin Broadcasting Active\nViewport'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIIOLibrary, nullptr, "K2_StopBroadcastingActiveViewport", nullptr, nullptr, Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::NDIIOLibrary_eventK2_StopBroadcastingActiveViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDIIOLibrary::execK2_StopBroadcastingActiveViewport)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNDIIOLibrary::K2_StopBroadcastingActiveViewport(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UNDIIOLibrary Function K2_StopBroadcastingActiveViewport

// Begin Class UNDIIOLibrary
void UNDIIOLibrary::StaticRegisterNativesUNDIIOLibrary()
{
	UClass* Class = UNDIIOLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_BeginBroadcastingActiveViewport", &UNDIIOLibrary::execK2_BeginBroadcastingActiveViewport },
		{ "K2_FindNetworkSourceByName", &UNDIIOLibrary::execK2_FindNetworkSourceByName },
		{ "K2_GetNDIMediaReceiver", &UNDIIOLibrary::execK2_GetNDIMediaReceiver },
		{ "K2_GetNDIMediaSender", &UNDIIOLibrary::execK2_GetNDIMediaSender },
		{ "K2_GetNDISourceCollection", &UNDIIOLibrary::execK2_GetNDISourceCollection },
		{ "K2_ParseNDIMetaData", &UNDIIOLibrary::execK2_ParseNDIMetaData },
		{ "K2_StopBroadcastingActiveViewport", &UNDIIOLibrary::execK2_StopBroadcastingActiveViewport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIIOLibrary);
UClass* Z_Construct_UClass_UNDIIOLibrary_NoRegister()
{
	return UNDIIOLibrary::StaticClass();
}
struct Z_Construct_UClass_UNDIIOLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "NDI IO Library" },
		{ "IncludePath", "Objects/Libraries/NDIIOLibrary.h" },
		{ "ModuleRelativePath", "Public/Objects/Libraries/NDIIOLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_BeginBroadcastingActiveViewport, "K2_BeginBroadcastingActiveViewport" }, // 1717108185
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_FindNetworkSourceByName, "K2_FindNetworkSourceByName" }, // 315286460
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaReceiver, "K2_GetNDIMediaReceiver" }, // 946317510
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDIMediaSender, "K2_GetNDIMediaSender" }, // 402775301
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_GetNDISourceCollection, "K2_GetNDISourceCollection" }, // 605698992
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_ParseNDIMetaData, "K2_ParseNDIMetaData" }, // 117990145
		{ &Z_Construct_UFunction_UNDIIOLibrary_K2_StopBroadcastingActiveViewport, "K2_StopBroadcastingActiveViewport" }, // 2943362875
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIIOLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDIIOLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIIOLibrary_Statics::ClassParams = {
	&UNDIIOLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDIIOLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDIIOLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDIIOLibrary()
{
	if (!Z_Registration_Info_UClass_UNDIIOLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIIOLibrary.OuterSingleton, Z_Construct_UClass_UNDIIOLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDIIOLibrary.OuterSingleton;
}
template<> NDIIO_API UClass* StaticClass<UNDIIOLibrary>()
{
	return UNDIIOLibrary::StaticClass();
}
UNDIIOLibrary::UNDIIOLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIIOLibrary);
UNDIIOLibrary::~UNDIIOLibrary() {}
// End Class UNDIIOLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNDIMetaDataElement::StaticStruct, Z_Construct_UScriptStruct_FNDIMetaDataElement_Statics::NewStructOps, TEXT("NDIMetaDataElement"), &Z_Registration_Info_UScriptStruct_NDIMetaDataElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIMetaDataElement), 1987782048U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDIIOLibrary, UNDIIOLibrary::StaticClass, TEXT("UNDIIOLibrary"), &Z_Registration_Info_UClass_UNDIIOLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIIOLibrary), 3664109936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_136627339(TEXT("/Script/NDIIO"),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIIOLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
