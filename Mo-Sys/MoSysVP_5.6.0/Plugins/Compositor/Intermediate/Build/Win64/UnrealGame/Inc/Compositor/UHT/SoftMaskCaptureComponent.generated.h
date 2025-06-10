// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SoftMaskCaptureComponent.h"

#ifdef COMPOSITOR_SoftMaskCaptureComponent_generated_h
#error "SoftMaskCaptureComponent.generated.h already included, missing '#pragma once' in SoftMaskCaptureComponent.h"
#endif
#define COMPOSITOR_SoftMaskCaptureComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoftMaskCaptureComponent ************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoftMaskCaptureComponent(); \
	friend struct Z_Construct_UClass_USoftMaskCaptureComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USoftMaskCaptureComponent, UCompositeCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister) \
	DECLARE_SERIALIZER(USoftMaskCaptureComponent)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoftMaskCaptureComponent(USoftMaskCaptureComponent&&) = delete; \
	USoftMaskCaptureComponent(const USoftMaskCaptureComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoftMaskCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoftMaskCaptureComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoftMaskCaptureComponent) \
	NO_API virtual ~USoftMaskCaptureComponent();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h_12_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoftMaskCaptureComponent;

// ********** End Class USoftMaskCaptureComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
