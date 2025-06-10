// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SoftMaskCaptureComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSoftMaskCaptureComponent() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeCaptureComponent2D();
COMPOSITOR_API UClass* Z_Construct_UClass_USoftMaskCaptureComponent();
COMPOSITOR_API UClass* Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USoftMaskCaptureComponent ************************************************
void USoftMaskCaptureComponent::StaticRegisterNativesUSoftMaskCaptureComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USoftMaskCaptureComponent;
UClass* USoftMaskCaptureComponent::GetPrivateStaticClass()
{
	using TClass = USoftMaskCaptureComponent;
	if (!Z_Registration_Info_UClass_USoftMaskCaptureComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SoftMaskCaptureComponent"),
			Z_Registration_Info_UClass_USoftMaskCaptureComponent.InnerSingleton,
			StaticRegisterNativesUSoftMaskCaptureComponent,
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
	return Z_Registration_Info_UClass_USoftMaskCaptureComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister()
{
	return USoftMaskCaptureComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USoftMaskCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SoftMaskCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SoftMaskCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoftMaskCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoftMaskCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositeCaptureComponent2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoftMaskCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoftMaskCaptureComponent_Statics::ClassParams = {
	&USoftMaskCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoftMaskCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USoftMaskCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoftMaskCaptureComponent()
{
	if (!Z_Registration_Info_UClass_USoftMaskCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoftMaskCaptureComponent.OuterSingleton, Z_Construct_UClass_USoftMaskCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoftMaskCaptureComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoftMaskCaptureComponent);
USoftMaskCaptureComponent::~USoftMaskCaptureComponent() {}
// ********** End Class USoftMaskCaptureComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoftMaskCaptureComponent, USoftMaskCaptureComponent::StaticClass, TEXT("USoftMaskCaptureComponent"), &Z_Registration_Info_UClass_USoftMaskCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoftMaskCaptureComponent), 2597767374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h__Script_Compositor_2024921555(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Components_SoftMaskCaptureComponent_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
