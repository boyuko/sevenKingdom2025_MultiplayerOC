// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMvnSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKMVNPLUGIN_LiveLinkMvnSource_generated_h
#error "LiveLinkMvnSource.generated.h already included, missing '#pragma once' in LiveLinkMvnSource.h"
#endif
#define LIVELINKMVNPLUGIN_LiveLinkMvnSource_generated_h

#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMvnSourceSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkMvnSourceSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMvnSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkMvnPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMvnSourceSettings)


#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkMvnSourceSettings(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkMvnSourceSettings(ULiveLinkMvnSourceSettings&&); \
	ULiveLinkMvnSourceSettings(const ULiveLinkMvnSourceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMvnSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMvnSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMvnSourceSettings) \
	NO_API virtual ~ULiveLinkMvnSourceSettings();


#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_108_PROLOG
#define FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_111_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKMVNPLUGIN_API UClass* StaticClass<class ULiveLinkMvnSourceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerOC_Plugins_MVNLiveLed58e0ef26ccV1_Source_LiveLinkMvnPlugin_Public_LiveLinkMvnSource_h


#define FOREACH_ENUM_SEGMENTINDEXES(op) \
	op(Pelvis) \
	op(L5) \
	op(L3) \
	op(T12) \
	op(T8) \
	op(Neck) \
	op(Head) \
	op(RightShoulder) \
	op(RightUpperArm) \
	op(RightForearm) \
	op(RightHand) \
	op(LeftShoulder) \
	op(LeftUpperArm) \
	op(LeftForearm) \
	op(LeftHand) \
	op(RightUpperLeg) \
	op(RightLowerLeg) \
	op(RightFoot) \
	op(RightToe) \
	op(LeftUpperLeg) \
	op(LeftLowerLeg) \
	op(LeftFoot) \
	op(LeftToe) \
	op(Prop1) \
	op(Prop2) \
	op(Prop3) \
	op(Prop4) \
	op(XS_SEG_NUM) \
	op(XS_SEG_NUM_FINGERS) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
