// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Assets/CompositeKeyer.h"

#ifdef COMPOSITOR_CompositeKeyer_generated_h
#error "CompositeKeyer.generated.h already included, missing '#pragma once' in CompositeKeyer.h"
#endif
#define COMPOSITOR_CompositeKeyer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCompositorSubsystem;
class UMaterialInstanceDynamic;
class UMaterialInterface;

// ********** Begin Class UCompositeKeyer **********************************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UMaterialInterface* GetCompositeKeyerMaterial_Implementation() const; \
	DECLARE_FUNCTION(execSetKeyerEnabled); \
	DECLARE_FUNCTION(execGetIsKeyerEnabled); \
	DECLARE_FUNCTION(execGetCompositeKeyerMID); \
	DECLARE_FUNCTION(execGetCompositeKeyerMaterial); \
	DECLARE_FUNCTION(execUpdateCompositeKeyer); \
	DECLARE_FUNCTION(execInitializeCompositeKeyer);


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_CALLBACK_WRAPPERS
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeKeyer(); \
	friend struct Z_Construct_UClass_UCompositeKeyer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeKeyer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositeKeyer_NoRegister) \
	DECLARE_SERIALIZER(UCompositeKeyer)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeKeyer(UCompositeKeyer&&) = delete; \
	UCompositeKeyer(const UCompositeKeyer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeKeyer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeKeyer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeKeyer) \
	NO_API virtual ~UCompositeKeyer();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_16_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeKeyer;

// ********** End Class UCompositeKeyer ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
