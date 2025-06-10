// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Assets/Composite.h"

#ifdef COMPOSITOR_Composite_generated_h
#error "Composite.generated.h already included, missing '#pragma once' in Composite.h"
#endif
#define COMPOSITOR_Composite_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UComposite;
class UCompositeColorGrade;
class UCompositeKeyer;
class UMediaSource;
enum class EMediaBlend : uint8;
enum class EOutputAlpha : uint8;
enum class EOutputRgbEncoding : uint8;
struct FLinearColor;

// ********** Begin Class UComposite ***************************************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableMediaInputKeyer); \
	DECLARE_FUNCTION(execIsKeyerEnabled); \
	DECLARE_FUNCTION(execIsThisCompositeAnAncestorOf); \
	DECLARE_FUNCTION(execSetOutputAlpha); \
	DECLARE_FUNCTION(execGetOutputAlpha); \
	DECLARE_FUNCTION(execSetOutputRgbEncoding); \
	DECLARE_FUNCTION(execGetOutputRgbEncoding); \
	DECLARE_FUNCTION(execSetBrightnessMaskGamma); \
	DECLARE_FUNCTION(execGetBrightnessMaskGamma); \
	DECLARE_FUNCTION(execSetMediaBlend); \
	DECLARE_FUNCTION(execGetMediaBlend); \
	DECLARE_FUNCTION(execGetCompositeColorGrade); \
	DECLARE_FUNCTION(execSetPlanarReflectionScreenPercentage); \
	DECLARE_FUNCTION(execGetPlanarReflectionScreenPercentage); \
	DECLARE_FUNCTION(execSetPlanarReflectionDistortionOffset); \
	DECLARE_FUNCTION(execGetPlanarReflectionDistortionOffset); \
	DECLARE_FUNCTION(execSetPlanarReflectionDistortionIntensity); \
	DECLARE_FUNCTION(execGetPlanarReflectionDistortionIntensity); \
	DECLARE_FUNCTION(execSetPlanarReflectionColor); \
	DECLARE_FUNCTION(execGetPlanarReflectionColor); \
	DECLARE_FUNCTION(execSetEnablePlanarReflection); \
	DECLARE_FUNCTION(execGetEnablePlanarReflection); \
	DECLARE_FUNCTION(execSetShadowsTint); \
	DECLARE_FUNCTION(execGetShadowsTint); \
	DECLARE_FUNCTION(execSetShadowsGamma); \
	DECLARE_FUNCTION(execGetShadowsGamma); \
	DECLARE_FUNCTION(execSetShadowsWhiteLevel); \
	DECLARE_FUNCTION(execGetShadowsWhiteLevel); \
	DECLARE_FUNCTION(execSetShadowsBlackLevel); \
	DECLARE_FUNCTION(execGetShadowsBlackLevel); \
	DECLARE_FUNCTION(execSetShadowsOffset); \
	DECLARE_FUNCTION(execGetShadowsOffset); \
	DECLARE_FUNCTION(execSetEnableMediaShadows); \
	DECLARE_FUNCTION(execGetEnableMediaShadows); \
	DECLARE_FUNCTION(execSetMediaInputKeyer); \
	DECLARE_FUNCTION(execGetMediaInputKeyer); \
	DECLARE_FUNCTION(execSetSoftMaskScreenPercentage); \
	DECLARE_FUNCTION(execGetSoftMaskScreenPercentage); \
	DECLARE_FUNCTION(execSetEnableSoftMask); \
	DECLARE_FUNCTION(execGetEnableSoftMask); \
	DECLARE_FUNCTION(execSetMediaInputSource); \
	DECLARE_FUNCTION(execGetMediaInputSource); \
	DECLARE_FUNCTION(execSetParentComposite); \
	DECLARE_FUNCTION(execGetParentComposite);


COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposite(); \
	friend struct Z_Construct_UClass_UComposite_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposite, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UComposite_NoRegister) \
	DECLARE_SERIALIZER(UComposite)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposite(UComposite&&) = delete; \
	UComposite(const UComposite&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposite); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComposite) \
	NO_API virtual ~UComposite();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_18_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposite;

// ********** End Class UComposite *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
