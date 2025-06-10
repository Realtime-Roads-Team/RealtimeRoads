// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/CompositeCaptureComponent2D.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeCaptureComponent2D() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeCaptureComponent2D();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeCaptureComponent2D_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeWorldData_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositorSubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeCaptureComponent2D *********************************************
void UCompositeCaptureComponent2D::StaticRegisterNativesUCompositeCaptureComponent2D()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeCaptureComponent2D;
UClass* UCompositeCaptureComponent2D::GetPrivateStaticClass()
{
	using TClass = UCompositeCaptureComponent2D;
	if (!Z_Registration_Info_UClass_UCompositeCaptureComponent2D.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeCaptureComponent2D"),
			Z_Registration_Info_UClass_UCompositeCaptureComponent2D.InnerSingleton,
			StaticRegisterNativesUCompositeCaptureComponent2D,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCompositeCaptureComponent2D.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeCaptureComponent2D_NoRegister()
{
	return UCompositeCaptureComponent2D::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeCaptureComponent2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/CompositeCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Public/Components/CompositeCaptureComponent2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CompositeCaptureComponent2D.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/CompositeCaptureComponent2D.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositorSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CompositeCaptureComponent2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldComposite_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/CompositeCaptureComponent2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeWorldData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/CompositeCaptureComponent2D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorCameraComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositorSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldComposite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeWorldData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCaptureComponent2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCaptureComponent2D, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCameraManager_MetaData), NewProp_PlayerCameraManager_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_EditorCameraComponent = { "EditorCameraComponent", nullptr, (EPropertyFlags)0x0020080800082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCaptureComponent2D, EditorCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorCameraComponent_MetaData), NewProp_EditorCameraComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_CompositorSubsystem = { "CompositorSubsystem", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCaptureComponent2D, CompositorSubsystem), Z_Construct_UClass_UCompositorSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositorSubsystem_MetaData), NewProp_CompositorSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_WorldComposite = { "WorldComposite", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCaptureComponent2D, WorldComposite), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldComposite_MetaData), NewProp_WorldComposite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_CompositeWorldData = { "CompositeWorldData", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeCaptureComponent2D, CompositeWorldData), Z_Construct_UClass_UCompositeWorldData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeWorldData_MetaData), NewProp_CompositeWorldData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_PlayerCameraManager,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_EditorCameraComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_CompositorSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_WorldComposite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::NewProp_CompositeWorldData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::ClassParams = {
	&UCompositeCaptureComponent2D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeCaptureComponent2D()
{
	if (!Z_Registration_Info_UClass_UCompositeCaptureComponent2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeCaptureComponent2D.OuterSingleton, Z_Construct_UClass_UCompositeCaptureComponent2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeCaptureComponent2D.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCaptureComponent2D);
UCompositeCaptureComponent2D::~UCompositeCaptureComponent2D() {}
// ********** End Class UCompositeCaptureComponent2D ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeCaptureComponent2D, UCompositeCaptureComponent2D::StaticClass, TEXT("UCompositeCaptureComponent2D"), &Z_Registration_Info_UClass_UCompositeCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeCaptureComponent2D), 2492045050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h__Script_Compositor_1932056928(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_CompositeCaptureComponent2D_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
