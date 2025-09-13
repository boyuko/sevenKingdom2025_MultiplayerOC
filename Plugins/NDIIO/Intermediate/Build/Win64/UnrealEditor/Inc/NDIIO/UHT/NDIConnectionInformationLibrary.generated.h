// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/Libraries/NDIConnectionInformationLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNDIConnectionInformation;
#ifdef NDIIO_NDIConnectionInformationLibrary_generated_h
#error "NDIConnectionInformationLibrary.generated.h already included, missing '#pragma once' in NDIConnectionInformationLibrary.h"
#endif
#define NDIIO_NDIConnectionInformationLibrary_generated_h

#define FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_NDIConnectionInformation_Reset); \
	DECLARE_FUNCTION(execK2_NDIConnectionInformation_IsValid); \
	DECLARE_FUNCTION(execK2_Compare_Not_NDIConnectionInformation); \
	DECLARE_FUNCTION(execK2_Compare_NDIConnectionInformation);


#define FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIConnectionInformationLibrary(); \
	friend struct Z_Construct_UClass_UNDIConnectionInformationLibrary_Statics; \
public: \
	DECLARE_CLASS(UNDIConnectionInformationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIConnectionInformationLibrary)


#define FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIConnectionInformationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNDIConnectionInformationLibrary(UNDIConnectionInformationLibrary&&); \
	UNDIConnectionInformationLibrary(const UNDIConnectionInformationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIConnectionInformationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIConnectionInformationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIConnectionInformationLibrary) \
	NO_API virtual ~UNDIConnectionInformationLibrary();


#define FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_17_PROLOG
#define FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIConnectionInformationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerOC_Plugins_NDIIO_Source_Core_Public_Objects_Libraries_NDIConnectionInformationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
