// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/CompositeWorldData.h"

#ifdef COMPOSITOR_CompositeWorldData_generated_h
#error "CompositeWorldData.generated.h already included, missing '#pragma once' in CompositeWorldData.h"
#endif
#define COMPOSITOR_CompositeWorldData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACompositePlanarReflection;

// ********** Begin Class UCompositeWorldData ******************************************************
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCompositePlanarReflection); \
	DECLARE_FUNCTION(execGetCompositePlanarReflection);


COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeWorldData_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeWorldData(); \
	friend struct Z_Construct_UClass_UCompositeWorldData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeWorldData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeWorldData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositeWorldData_NoRegister) \
	DECLARE_SERIALIZER(UCompositeWorldData)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeWorldData(UCompositeWorldData&&) = delete; \
	UCompositeWorldData(const UCompositeWorldData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeWorldData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeWorldData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeWorldData) \
	NO_API virtual ~UCompositeWorldData();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_15_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeWorldData;

// ********** End Class UCompositeWorldData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
