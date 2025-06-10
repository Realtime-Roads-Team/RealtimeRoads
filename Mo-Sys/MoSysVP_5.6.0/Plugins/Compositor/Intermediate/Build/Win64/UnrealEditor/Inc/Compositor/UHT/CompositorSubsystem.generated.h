// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/CompositorSubsystem.h"

#ifdef COMPOSITOR_CompositorSubsystem_generated_h
#error "CompositorSubsystem.generated.h already included, missing '#pragma once' in CompositorSubsystem.h"
#endif
#define COMPOSITOR_CompositorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ICompositeUpdateInterface;
class UComposite;
class UCompositeWorldData;
class USoftMaskCaptureComponent;

// ********** Begin Class UCompositorSubsystem *****************************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSoftMaskCaptureComponent); \
	DECLARE_FUNCTION(execRemoveCompositeWorldData); \
	DECLARE_FUNCTION(execGetCompositeWorldData); \
	DECLARE_FUNCTION(execFindOrAddCompositeWorldData); \
	DECLARE_FUNCTION(execSetIsWorldCompositeEnabled); \
	DECLARE_FUNCTION(execSetMediaInputDefaultFallbackTexture); \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetMediaInputTextureSize); \
	DECLARE_FUNCTION(execGetWorldComposite); \
	DECLARE_FUNCTION(execTryPlayMediaInputSource); \
	DECLARE_FUNCTION(execOnCompositeUpdate_Internal); \
	DECLARE_FUNCTION(execUnregisterCompositeUpdateInterface); \
	DECLARE_FUNCTION(execRegisterCompositeUpdateInterface); \
	DECLARE_FUNCTION(execUpdateLensData);


COMPOSITOR_API UClass* Z_Construct_UClass_UCompositorSubsystem_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositorSubsystem(); \
	friend struct Z_Construct_UClass_UCompositorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositorSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCompositorSubsystem)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositorSubsystem(UCompositorSubsystem&&) = delete; \
	UCompositorSubsystem(const UCompositorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositorSubsystem) \
	NO_API virtual ~UCompositorSubsystem();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_37_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositorSubsystem;

// ********** End Class UCompositorSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
