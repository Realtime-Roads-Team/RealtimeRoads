// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositorEditorUtilityWidgetBP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositorEditorUtilityWidgetBP() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint();
COMPOSITOREDITORUTILITYWIDGET_API UClass* Z_Construct_UClass_UCompositorEditorUtilityWidgetBP();
COMPOSITOREDITORUTILITYWIDGET_API UClass* Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_NoRegister();
UPackage* Z_Construct_UPackage__Script_CompositorEditorUtilityWidget();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositorEditorUtilityWidgetBP *****************************************
void UCompositorEditorUtilityWidgetBP::StaticRegisterNativesUCompositorEditorUtilityWidgetBP()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP;
UClass* UCompositorEditorUtilityWidgetBP::GetPrivateStaticClass()
{
	using TClass = UCompositorEditorUtilityWidgetBP;
	if (!Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositorEditorUtilityWidgetBP"),
			Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP.InnerSingleton,
			StaticRegisterNativesUCompositorEditorUtilityWidgetBP,
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
	return Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_NoRegister()
{
	return UCompositorEditorUtilityWidgetBP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CompositorEditorUtilityWidgetBP.h" },
		{ "ModuleRelativePath", "Public/CompositorEditorUtilityWidgetBP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositorEditorUtilityWidgetBP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidgetBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_CompositorEditorUtilityWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics::ClassParams = {
	&UCompositorEditorUtilityWidgetBP::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositorEditorUtilityWidgetBP()
{
	if (!Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP.OuterSingleton, Z_Construct_UClass_UCompositorEditorUtilityWidgetBP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP.OuterSingleton;
}
UCompositorEditorUtilityWidgetBP::UCompositorEditorUtilityWidgetBP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositorEditorUtilityWidgetBP);
UCompositorEditorUtilityWidgetBP::~UCompositorEditorUtilityWidgetBP() {}
// ********** End Class UCompositorEditorUtilityWidgetBP *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditorUtilityWidget_Public_CompositorEditorUtilityWidgetBP_h__Script_CompositorEditorUtilityWidget_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositorEditorUtilityWidgetBP, UCompositorEditorUtilityWidgetBP::StaticClass, TEXT("UCompositorEditorUtilityWidgetBP"), &Z_Registration_Info_UClass_UCompositorEditorUtilityWidgetBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositorEditorUtilityWidgetBP), 3218485222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditorUtilityWidget_Public_CompositorEditorUtilityWidgetBP_h__Script_CompositorEditorUtilityWidget_480660993(TEXT("/Script/CompositorEditorUtilityWidget"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditorUtilityWidget_Public_CompositorEditorUtilityWidgetBP_h__Script_CompositorEditorUtilityWidget_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditorUtilityWidget_Public_CompositorEditorUtilityWidgetBP_h__Script_CompositorEditorUtilityWidget_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
