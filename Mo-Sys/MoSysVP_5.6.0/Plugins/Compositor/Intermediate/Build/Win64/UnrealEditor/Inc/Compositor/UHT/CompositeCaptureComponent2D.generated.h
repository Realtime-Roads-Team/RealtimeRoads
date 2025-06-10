// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CompositeCaptureComponent2D.h"

#ifdef COMPOSITOR_CompositeCaptureComponent2D_generated_h
#error "CompositeCaptureComponent2D.generated.h already included, missing '#pragma once' in CompositeCaptureComponent2D.h"
#endif
#define COMPOSITOR_CompositeCaptureComponent2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeCaptureComponent2D *********************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeCaptureComponent2D_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeCaptureComponent2D(); \
	friend struct Z_Construct_UClass_UCompositeCaptureComponent2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeCaptureComponent2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCaptureComponent2D, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositeCaptureComponent2D_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCaptureComponent2D)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCaptureComponent2D(UCompositeCaptureComponent2D&&) = delete; \
	UCompositeCaptureComponent2D(const UCompositeCaptureComponent2D&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeCaptureComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCaptureComponent2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeCaptureComponent2D) \
	NO_API virtual ~UCompositeCaptureComponent2D();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h_26_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h_29_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCaptureComponent2D;

// ********** End Class UCompositeCaptureComponent2D ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
