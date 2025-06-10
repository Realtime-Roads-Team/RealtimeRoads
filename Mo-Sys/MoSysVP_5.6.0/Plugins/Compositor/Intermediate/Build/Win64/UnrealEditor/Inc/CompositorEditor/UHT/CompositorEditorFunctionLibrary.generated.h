// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositorEditorFunctionLibrary.h"

#ifdef COMPOSITOREDITOR_CompositorEditorFunctionLibrary_generated_h
#error "CompositorEditorFunctionLibrary.generated.h already included, missing '#pragma once' in CompositorEditorFunctionLibrary.h"
#endif
#define COMPOSITOREDITOR_CompositorEditorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UWorld;

// ********** Begin Class UCompositorEditorFunctionLibrary *****************************************
#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentWorld);


COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositorEditorFunctionLibrary_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositorEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositorEditorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositorEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompositorEditor"), Z_Construct_UClass_UCompositorEditorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCompositorEditorFunctionLibrary)


#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositorEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositorEditorFunctionLibrary(UCompositorEditorFunctionLibrary&&) = delete; \
	UCompositorEditorFunctionLibrary(const UCompositorEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositorEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositorEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositorEditorFunctionLibrary) \
	NO_API virtual ~UCompositorEditorFunctionLibrary();


#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_10_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositorEditorFunctionLibrary;

// ********** End Class UCompositorEditorFunctionLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
