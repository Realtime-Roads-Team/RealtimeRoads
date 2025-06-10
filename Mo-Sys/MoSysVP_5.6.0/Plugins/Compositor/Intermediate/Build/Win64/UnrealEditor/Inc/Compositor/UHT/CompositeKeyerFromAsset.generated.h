// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Assets/CompositeKeyerFromAsset.h"

#ifdef COMPOSITOR_CompositeKeyerFromAsset_generated_h
#error "CompositeKeyerFromAsset.generated.h already included, missing '#pragma once' in CompositeKeyerFromAsset.h"
#endif
#define COMPOSITOR_CompositeKeyerFromAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCompositeKeyer;

// ********** Begin Class UCompositeKeyerFromAsset *************************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCompositeKeyerAsset);


COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFromAsset_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeKeyerFromAsset(); \
	friend struct Z_Construct_UClass_UCompositeKeyerFromAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFromAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeKeyerFromAsset, UCompositeKeyer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositeKeyerFromAsset_NoRegister) \
	DECLARE_SERIALIZER(UCompositeKeyerFromAsset)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositeKeyerFromAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeKeyerFromAsset(UCompositeKeyerFromAsset&&) = delete; \
	UCompositeKeyerFromAsset(const UCompositeKeyerFromAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeKeyerFromAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeKeyerFromAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeKeyerFromAsset) \
	NO_API virtual ~UCompositeKeyerFromAsset();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_12_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeKeyerFromAsset;

// ********** End Class UCompositeKeyerFromAsset ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
