// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMvnPlugin/Public/LiveLinkMvnRetargetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMvnRetargetAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset();
	LIVELINKMVNPLUGIN_API UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset_NoRegister();
	LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping();
	LIVELINKMVNPLUGIN_API UEnum* Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention();
	LIVELINKMVNPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRemappingRowHandle();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMvnPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemappingRowHandle;
class UScriptStruct* FRemappingRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemappingRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemappingRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemappingRowHandle, (UObject*)Z_Construct_UPackage__Script_LiveLinkMvnPlugin(), TEXT("RemappingRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_RemappingRowHandle.OuterSingleton;
}
template<> LIVELINKMVNPLUGIN_API UScriptStruct* StaticStruct<FRemappingRowHandle>()
{
	return FRemappingRowHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemappingRowHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_XsensRemapId_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XsensRemapId_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_XsensRemapId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemapId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemappingRowHandle>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_MetaData[] = {
		{ "Category", "RemappingRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Xsens Id */" },
#endif
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Xsens Id" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId = { "XsensRemapId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemappingRowHandle, XsensRemapId), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_MetaData), Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_MetaData) }; // 3361993588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId_MetaData[] = {
		{ "Category", "RemappingRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bone name in Unreal mesh */" },
#endif
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone name in Unreal mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId = { "RemapId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemappingRowHandle, RemapId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId_MetaData), Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_XsensRemapId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewProp_RemapId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
		nullptr,
		&NewStructOps,
		"RemappingRowHandle",
		Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers),
		sizeof(FRemappingRowHandle),
		alignof(FRemappingRowHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRemappingRowHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_RemappingRowHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemappingRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemappingRowHandle.InnerSingleton;
	}
	DEFINE_FUNCTION(ULiveLinkMvnRetargetAsset::execGetCustomRemappedBoneName)
	{
		P_GET_ENUM(EXsensMapping,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCustomRemappedBoneName_Implementation(EXsensMapping(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkMvnRetargetAsset::execGetRemappedBoneNameByConvention)
	{
		P_GET_ENUM(EXsensMapping,Z_Param_Bone);
		P_GET_ENUM(EXsensRetargetNamingConvention,Z_Param_Convention);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneNameByConvention(EXsensMapping(Z_Param_Bone),EXsensRetargetNamingConvention(Z_Param_Convention));
		P_NATIVE_END;
	}
	struct LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms
	{
		EXsensMapping Bone;
		FName ReturnValue;
	};
	static FName NAME_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName = FName(TEXT("GetCustomRemappedBoneName"));
	FName ULiveLinkMvnRetargetAsset::GetCustomRemappedBoneName(EXsensMapping Bone) const
	{
		LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms Parms;
		Parms.Bone=Bone;
		const_cast<ULiveLinkMvnRetargetAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName),&Parms);
		return Parms.ReturnValue;
	}
	void ULiveLinkMvnRetargetAsset::StaticRegisterNativesULiveLinkMvnRetargetAsset()
	{
		UClass* Class = ULiveLinkMvnRetargetAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomRemappedBoneName", &ULiveLinkMvnRetargetAsset::execGetCustomRemappedBoneName },
			{ "GetRemappedBoneNameByConvention", &ULiveLinkMvnRetargetAsset::execGetRemappedBoneNameByConvention },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms, Bone), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(0, nullptr) }; // 3361993588
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint Implementable function for getting a custom remapped bone name from the original */" },
#endif
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Implementable function for getting a custom remapped bone name from the original" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMvnRetargetAsset, nullptr, "GetCustomRemappedBoneName", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers), sizeof(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::PropPointers) < 2048);
	static_assert(sizeof(LiveLinkMvnRetargetAsset_eventGetCustomRemappedBoneName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics
	{
		struct LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms
		{
			EXsensMapping Bone;
			EXsensRetargetNamingConvention Convention;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Convention_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Convention;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, Bone), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(0, nullptr) }; // 3361993588
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention = { "Convention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, Convention), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention, METADATA_PARAMS(0, nullptr) }; // 82614316
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_Convention,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams[] = {
		{ "Category", "Live Link Remap" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkMvnRetargetAsset, nullptr, "GetRemappedBoneNameByConvention", nullptr, nullptr, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::LiveLinkMvnRetargetAsset_eventGetRemappedBoneNameByConvention_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkMvnRetargetAsset);
	UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset_NoRegister()
	{
		return ULiveLinkMvnRetargetAsset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_convention_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_convention_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_convention;
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_remapping_rows_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_remapping_rows_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_remapping_rows_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_remapping_rows_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_m_remapping_rows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_skeletal_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeletal_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPoseAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TPoseAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsForwardY_MetaData[];
#endif
		static void NewProp_IsForwardY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsForwardY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMvnPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetCustomRemappedBoneName, "GetCustomRemappedBoneName" }, // 134983057
		{ &Z_Construct_UFunction_ULiveLinkMvnRetargetAsset_GetRemappedBoneNameByConvention, "GetRemappedBoneNameByConvention" }, // 3863144883
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkMvnRetargetAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_MetaData[] = {
		{ "Category", "Bones Names" },
		{ "DisplayName", "Naming Convention" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention = { "m_remapping_convention", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_remapping_convention), Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensRetargetNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_MetaData), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_MetaData) }; // 82614316
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_ValueProp = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FRemappingRowHandle, METADATA_PARAMS(0, nullptr) }; // 1403475354
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp = { "m_remapping_rows_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_LiveLinkMvnPlugin_EXsensMapping, METADATA_PARAMS(0, nullptr) }; // 3361993588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_MetaData[] = {
		{ "Category", "Live Link Mvn Remap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh. */" },
#endif
		{ "DisplayName", "Remapping Assets" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map that stores all the information about bone remapping. This will be populated dynamically from the skeletal mesh." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows = { "m_remapping_rows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_remapping_rows), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_MetaData), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_MetaData) }; // 3361993588 1403475354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh = { "m_skeletal_mesh", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_skeletal_mesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh_MetaData), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton_MetaData[] = {
		{ "Category", "Live Link Mvn Remap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The skeleton object which we're animating\n" },
#endif
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The skeleton object which we're animating" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton = { "m_skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, m_skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton_MetaData), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation = { "TPoseAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveLinkMvnRetargetAsset, TPoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation_MetaData), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_MetaData[] = {
		{ "Category", "Reference Pose" },
		{ "DisplayName", "Is Forward Y" },
		{ "ModuleRelativePath", "Public/LiveLinkMvnRetargetAsset.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_SetBit(void* Obj)
	{
		((ULiveLinkMvnRetargetAsset*)Obj)->IsForwardY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY = { "IsForwardY", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiveLinkMvnRetargetAsset), &Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_MetaData), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_convention,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_remapping_rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeletal_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_m_skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_TPoseAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::NewProp_IsForwardY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkMvnRetargetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::ClassParams = {
		&ULiveLinkMvnRetargetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULiveLinkMvnRetargetAsset()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset.OuterSingleton, Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset.OuterSingleton;
	}
	template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<ULiveLinkMvnRetargetAsset>()
	{
		return ULiveLinkMvnRetargetAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkMvnRetargetAsset);
	ULiveLinkMvnRetargetAsset::~ULiveLinkMvnRetargetAsset() {}
	struct Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ScriptStructInfo[] = {
		{ FRemappingRowHandle::StaticStruct, Z_Construct_UScriptStruct_FRemappingRowHandle_Statics::NewStructOps, TEXT("RemappingRowHandle"), &Z_Registration_Info_UScriptStruct_RemappingRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemappingRowHandle), 1403475354U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkMvnRetargetAsset, ULiveLinkMvnRetargetAsset::StaticClass, TEXT("ULiveLinkMvnRetargetAsset"), &Z_Registration_Info_UClass_ULiveLinkMvnRetargetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkMvnRetargetAsset), 815606416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_1826796588(TEXT("/Script/LiveLinkMvnPlugin"),
		Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53XsensTest_Plugins_LiveLinkMVNPlugin_5_3_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
