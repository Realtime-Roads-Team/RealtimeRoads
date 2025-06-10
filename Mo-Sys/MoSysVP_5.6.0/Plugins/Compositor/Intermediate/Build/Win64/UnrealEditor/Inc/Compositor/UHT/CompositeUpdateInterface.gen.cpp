// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/CompositeUpdateInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeUpdateInterface() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeUpdateInterface();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeUpdateInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UCompositeUpdateInterface ********************************************
void UCompositeUpdateInterface::StaticRegisterNativesUCompositeUpdateInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeUpdateInterface;
UClass* UCompositeUpdateInterface::GetPrivateStaticClass()
{
	using TClass = UCompositeUpdateInterface;
	if (!Z_Registration_Info_UClass_UCompositeUpdateInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeUpdateInterface"),
			Z_Registration_Info_UClass_UCompositeUpdateInterface.InnerSingleton,
			StaticRegisterNativesUCompositeUpdateInterface,
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
	return Z_Registration_Info_UClass_UCompositeUpdateInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeUpdateInterface_NoRegister()
{
	return UCompositeUpdateInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeUpdateInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/CompositeUpdateInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICompositeUpdateInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompositeUpdateInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeUpdateInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeUpdateInterface_Statics::ClassParams = {
	&UCompositeUpdateInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeUpdateInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeUpdateInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeUpdateInterface()
{
	if (!Z_Registration_Info_UClass_UCompositeUpdateInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeUpdateInterface.OuterSingleton, Z_Construct_UClass_UCompositeUpdateInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeUpdateInterface.OuterSingleton;
}
UCompositeUpdateInterface::UCompositeUpdateInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeUpdateInterface);
// ********** End Interface UCompositeUpdateInterface **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeUpdateInterface, UCompositeUpdateInterface::StaticClass, TEXT("UCompositeUpdateInterface"), &Z_Registration_Info_UClass_UCompositeUpdateInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeUpdateInterface), 811909774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h__Script_Compositor_2479160693(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Interfaces_CompositeUpdateInterface_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
