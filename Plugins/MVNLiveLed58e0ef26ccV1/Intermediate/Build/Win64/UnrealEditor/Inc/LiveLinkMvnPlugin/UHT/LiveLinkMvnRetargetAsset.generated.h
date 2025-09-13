// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMvnRetargetAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EXsensMapping : uint8;
enum class EXsensRetargetNamingConvention : uint8;
#ifdef LIVELINKMVNPLUGIN_LiveLinkMvnRetargetAsset_generated_h
#error "LiveLinkMvnRetargetAsset.generated.h already included, missing '#pragma once' in LiveLinkMvnRetargetAsset.h"
#endif
#define LIVELINKMVNPLUGIN_LiveLinkMvnRetargetAsset_generated_h

#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemappingRowHandle_Statics; \
	LIVELINKMVNPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LIVELINKMVNPLUGIN_API UScriptStruct* StaticStruct<struct FRemappingRowHandle>();

#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_RPC_WRAPPERS \
	virtual FName GetCustomRemappedBoneName_Implementation(EXsensMapping Bone) const; \
	DECLARE_FUNCTION(execGetCustomRemappedBoneName); \
	DECLARE_FUNCTION(execGetRemappedBoneNameByConvention);


#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_CALLBACK_WRAPPERS
#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkMvnRetargetAsset(); \
	friend struct Z_Construct_UClass_ULiveLinkMvnRetargetAsset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMvnRetargetAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkMvnPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMvnRetargetAsset)


#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkMvnRetargetAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkMvnRetargetAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMvnRetargetAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMvnRetargetAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkMvnRetargetAsset(ULiveLinkMvnRetargetAsset&&); \
	ULiveLinkMvnRetargetAsset(const ULiveLinkMvnRetargetAsset&); \
public: \
	NO_API virtual ~ULiveLinkMvnRetargetAsset();


#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_48_PROLOG
#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_RPC_WRAPPERS \
	FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_CALLBACK_WRAPPERS \
	FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_INCLASS \
	FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<class ULiveLinkMvnRetargetAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnRetargetAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
