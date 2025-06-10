// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/CompositeFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeFactory() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeFactory();
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositeFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_CompositorEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeFactory ********************************************************
void UCompositeFactory::StaticRegisterNativesUCompositeFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeFactory;
UClass* UCompositeFactory::GetPrivateStaticClass()
{
	using TClass = UCompositeFactory;
	if (!Z_Registration_Info_UClass_UCompositeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeFactory"),
			Z_Registration_Info_UClass_UCompositeFactory.InnerSingleton,
			StaticRegisterNativesUCompositeFactory,
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
	return Z_Registration_Info_UClass_UCompositeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeFactory_NoRegister()
{
	return UCompositeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Factories/CompositeFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/CompositeFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompositeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_CompositorEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeFactory_Statics::ClassParams = {
	&UCompositeFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeFactory()
{
	if (!Z_Registration_Info_UClass_UCompositeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeFactory.OuterSingleton, Z_Construct_UClass_UCompositeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeFactory);
UCompositeFactory::~UCompositeFactory() {}
// ********** End Class UCompositeFactory **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h__Script_CompositorEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeFactory, UCompositeFactory::StaticClass, TEXT("UCompositeFactory"), &Z_Registration_Info_UClass_UCompositeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeFactory), 25419475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h__Script_CompositorEditor_39681793(TEXT("/Script/CompositorEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h__Script_CompositorEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Public_Factories_CompositeFactory_h__Script_CompositorEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
