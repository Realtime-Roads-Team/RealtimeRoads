// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/CompositeKeyerFactory.h"

#ifdef COMPOSITOREDITOR_CompositeKeyerFactory_generated_h
#error "CompositeKeyerFactory.generated.h already included, missing '#pragma once' in CompositeKeyerFactory.h"
#endif
#define COMPOSITOREDITOR_CompositeKeyerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeKeyerFactory ***************************************************
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFactory_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeKeyerFactory(); \
	friend struct Z_Construct_UClass_UCompositeKeyerFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeKeyerFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompositorEditor"), Z_Construct_UClass_UCompositeKeyerFactory_NoRegister) \
	DECLARE_SERIALIZER(UCompositeKeyerFactory)


#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeKeyerFactory(UCompositeKeyerFactory&&) = delete; \
	UCompositeKeyerFactory(const UCompositeKeyerFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeKeyerFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeKeyerFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeKeyerFactory) \
	NO_API virtual ~UCompositeKeyerFactory();


#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h_14_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeKeyerFactory;

// ********** End Class UCompositeKeyerFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
