// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/CompositeColorGrade.h"

#ifdef COMPOSITOR_CompositeColorGrade_generated_h
#error "CompositeColorGrade.generated.h already included, missing '#pragma once' in CompositeColorGrade.h"
#endif
#define COMPOSITOR_CompositeColorGrade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeColorGrade *****************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeColorGrade_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeColorGrade(); \
	friend struct Z_Construct_UClass_UCompositeColorGrade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeColorGrade_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeColorGrade, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositeColorGrade_NoRegister) \
	DECLARE_SERIALIZER(UCompositeColorGrade)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositeColorGrade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeColorGrade(UCompositeColorGrade&&) = delete; \
	UCompositeColorGrade(const UCompositeColorGrade&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeColorGrade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeColorGrade); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeColorGrade) \
	NO_API virtual ~UCompositeColorGrade();


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h_15_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeColorGrade;

// ********** End Class UCompositeColorGrade *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
