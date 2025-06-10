// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CompositeUpdateInterface.h"

#ifdef COMPOSITOR_CompositeUpdateInterface_generated_h
#error "CompositeUpdateInterface.generated.h already included, missing '#pragma once' in CompositeUpdateInterface.h"
#endif
#define COMPOSITOR_CompositeUpdateInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UCompositeUpdateInterface ********************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeUpdateInterface_NoRegister();

#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositeUpdateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeUpdateInterface(UCompositeUpdateInterface&&) = delete; \
	UCompositeUpdateInterface(const UCompositeUpdateInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeUpdateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeUpdateInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeUpdateInterface) \
	virtual ~UCompositeUpdateInterface() = default;


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCompositeUpdateInterface(); \
	friend struct Z_Construct_UClass_UCompositeUpdateInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeUpdateInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeUpdateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Compositor"), Z_Construct_UClass_UCompositeUpdateInterface_NoRegister) \
	DECLARE_SERIALIZER(UCompositeUpdateInterface)


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICompositeUpdateInterface() {} \
public: \
	typedef UCompositeUpdateInterface UClassType; \
	typedef ICompositeUpdateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_12_PROLOG
#define FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeUpdateInterface;

// ********** End Interface UCompositeUpdateInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
