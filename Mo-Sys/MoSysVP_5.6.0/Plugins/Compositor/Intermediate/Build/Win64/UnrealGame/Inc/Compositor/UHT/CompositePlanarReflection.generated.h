// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/CompositePlanarReflection.h"

#ifdef COMPOSITOR_CompositePlanarReflection_generated_h
#error "CompositePlanarReflection.generated.h already included, missing '#pragma once' in CompositePlanarReflection.h"
#endif
#define COMPOSITOR_CompositePlanarReflection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACompositePlanarReflection ***********************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActive);


COMPOSITOR_API UClass* Z_Construct_UClass_ACompositePlanarReflection_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositePlanarReflection(); \
	friend struct Z_Construct_UClass_ACompositePlanarReflection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_ACompositePlanarReflection_NoRegister(); \
public: \
	DECLARE_CLASS2(ACompositePlanarReflection, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_ACompositePlanarReflection_NoRegister) \
	DECLARE_SERIALIZER(ACompositePlanarReflection)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACompositePlanarReflection(ACompositePlanarReflection&&) = delete; \
	ACompositePlanarReflection(const ACompositePlanarReflection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositePlanarReflection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositePlanarReflection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositePlanarReflection) \
	NO_API virtual ~ACompositePlanarReflection();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_16_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACompositePlanarReflection;

// ********** End Class ACompositePlanarReflection *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
