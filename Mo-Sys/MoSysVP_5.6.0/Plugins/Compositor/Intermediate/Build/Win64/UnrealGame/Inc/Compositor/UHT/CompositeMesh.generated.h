// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/CompositeMesh.h"

#ifdef COMPOSITOR_CompositeMesh_generated_h
#error "CompositeMesh.generated.h already included, missing '#pragma once' in CompositeMesh.h"
#endif
#define COMPOSITOR_CompositeMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStaticMesh;
struct FLinearColor;

// ********** Begin Class ACompositeMesh ***********************************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRenderSoftMask); \
	DECLARE_FUNCTION(execSetRayTracedOutOfFrustumColor); \
	DECLARE_FUNCTION(execSetRayTracedBackfaceColor); \
	DECLARE_FUNCTION(execSetAlignNormalsWithAtmosphereLight); \
	DECLARE_FUNCTION(execSetIsTwoSided); \
	DECLARE_FUNCTION(execSetPlanarReflectionBackgroundOcclusion); \
	DECLARE_FUNCTION(execSetPlanarReflectionColorIntensity); \
	DECLARE_FUNCTION(execSetReceiveShadowsIntensity); \
	DECLARE_FUNCTION(execSetAffectDistanceFieldLighting); \
	DECLARE_FUNCTION(execSetCastShadows); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetBypassDepthOfField); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execUpdateStencilValues); \
	DECLARE_FUNCTION(execAssignMaterialsToStaticMesh); \
	DECLARE_FUNCTION(execUnregisterCompositeMesh); \
	DECLARE_FUNCTION(execRegisterCompositeMesh); \
	DECLARE_FUNCTION(execInitializeUserProperties); \
	DECLARE_FUNCTION(execInitializeMaterialData);


COMPOSITOR_API UClass* Z_Construct_UClass_ACompositeMesh_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositeMesh(); \
	friend struct Z_Construct_UClass_ACompositeMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_ACompositeMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(ACompositeMesh, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_ACompositeMesh_NoRegister) \
	DECLARE_SERIALIZER(ACompositeMesh) \
	virtual UObject* _getUObject() const override { return const_cast<ACompositeMesh*>(this); }


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACompositeMesh(ACompositeMesh&&) = delete; \
	ACompositeMesh(const ACompositeMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositeMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositeMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositeMesh) \
	NO_API virtual ~ACompositeMesh();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_12_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACompositeMesh;

// ********** End Class ACompositeMesh *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
