// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CompositeFactory.h"

#ifdef COMPOSITOREDITOR_CompositeFactory_generated_h
#error "CompositeFactory.generated.h already included, missing '#pragma once' in CompositeFactory.h"
#endif
#define COMPOSITOREDITOR_CompositeFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeFactory ********************************************************
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeFactory_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeFactory(); \
	friend struct Z_Construct_UClass_UCompositeFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompositorEditor"), Z_Construct_UClass_UCompositeFactory_NoRegister) \
	DECLARE_SERIALIZER(UCompositeFactory)


#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeFactory(UCompositeFactory&&) = delete; \
	UCompositeFactory(const UCompositeFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeFactory) \
	NO_API virtual ~UCompositeFactory();


#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h_12_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeFactory;

// ********** End Class UCompositeFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
