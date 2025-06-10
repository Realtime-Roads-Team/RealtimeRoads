// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/CompositeKeyerFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeKeyerFactory() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister();
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFactory();
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFactory_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_CompositorEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeKeyerFactory ***************************************************
void UCompositeKeyerFactory::StaticRegisterNativesUCompositeKeyerFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeKeyerFactory;
UClass* UCompositeKeyerFactory::GetPrivateStaticClass()
{
	using TClass = UCompositeKeyerFactory;
	if (!Z_Registration_Info_UClass_UCompositeKeyerFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeKeyerFactory"),
			Z_Registration_Info_UClass_UCompositeKeyerFactory.InnerSingleton,
			StaticRegisterNativesUCompositeKeyerFactory,
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
	return Z_Registration_Info_UClass_UCompositeKeyerFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeKeyerFactory_NoRegister()
{
	return UCompositeKeyerFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeKeyerFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Factories/CompositeKeyerFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/CompositeKeyerFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeKeyerParentClass_MetaData[] = {
		{ "Category", "Compositor CompositeKeyer" },
		{ "ModuleRelativePath", "Public/Factories/CompositeKeyerFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompositeKeyerParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeKeyerFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCompositeKeyerFactory_Statics::NewProp_CompositeKeyerParentClass = { "CompositeKeyerParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeKeyerFactory, CompositeKeyerParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositeKeyer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeKeyerParentClass_MetaData), NewProp_CompositeKeyerParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeKeyerFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeKeyerFactory_Statics::NewProp_CompositeKeyerParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeKeyerFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_CompositorEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeKeyerFactory_Statics::ClassParams = {
	&UCompositeKeyerFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompositeKeyerFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeKeyerFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeKeyerFactory()
{
	if (!Z_Registration_Info_UClass_UCompositeKeyerFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeKeyerFactory.OuterSingleton, Z_Construct_UClass_UCompositeKeyerFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeKeyerFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeKeyerFactory);
UCompositeKeyerFactory::~UCompositeKeyerFactory() {}
// ********** End Class UCompositeKeyerFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h__Script_CompositorEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeKeyerFactory, UCompositeKeyerFactory::StaticClass, TEXT("UCompositeKeyerFactory"), &Z_Registration_Info_UClass_UCompositeKeyerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeKeyerFactory), 2886550190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h__Script_CompositorEditor_1421185299(TEXT("/Script/CompositorEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h__Script_CompositorEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeKeyerFactory_h__Script_CompositorEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
