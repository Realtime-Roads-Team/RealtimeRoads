// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assets/CompositeKeyerFromAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeKeyerFromAsset() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFromAsset();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyerFromAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeKeyerFromAsset Function SetCompositeKeyerAsset *****************
struct Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics
{
	struct CompositeKeyerFromAsset_eventSetCompositeKeyerAsset_Parms
	{
		UCompositeKeyer* NewCompositeKeyerAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|CompositeKeyer" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyerFromAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCompositeKeyerAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::NewProp_NewCompositeKeyerAsset = { "NewCompositeKeyerAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeKeyerFromAsset_eventSetCompositeKeyerAsset_Parms, NewCompositeKeyerAsset), Z_Construct_UClass_UCompositeKeyer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::NewProp_NewCompositeKeyerAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyerFromAsset, nullptr, "SetCompositeKeyerAsset", Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::CompositeKeyerFromAsset_eventSetCompositeKeyerAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::CompositeKeyerFromAsset_eventSetCompositeKeyerAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyerFromAsset::execSetCompositeKeyerAsset)
{
	P_GET_OBJECT(UCompositeKeyer,Z_Param_NewCompositeKeyerAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCompositeKeyerAsset(Z_Param_NewCompositeKeyerAsset);
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyerFromAsset Function SetCompositeKeyerAsset *******************

// ********** Begin Class UCompositeKeyerFromAsset *************************************************
void UCompositeKeyerFromAsset::StaticRegisterNativesUCompositeKeyerFromAsset()
{
	UClass* Class = UCompositeKeyerFromAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCompositeKeyerAsset", &UCompositeKeyerFromAsset::execSetCompositeKeyerAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeKeyerFromAsset;
UClass* UCompositeKeyerFromAsset::GetPrivateStaticClass()
{
	using TClass = UCompositeKeyerFromAsset;
	if (!Z_Registration_Info_UClass_UCompositeKeyerFromAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeKeyerFromAsset"),
			Z_Registration_Info_UClass_UCompositeKeyerFromAsset.InnerSingleton,
			StaticRegisterNativesUCompositeKeyerFromAsset,
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
	return Z_Registration_Info_UClass_UCompositeKeyerFromAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeKeyerFromAsset_NoRegister()
{
	return UCompositeKeyerFromAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeKeyerFromAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Asset Reference" },
		{ "IncludePath", "Assets/CompositeKeyerFromAsset.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyerFromAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeKeyerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Asset Reference" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyerFromAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeKeyerAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositeKeyerFromAsset_SetCompositeKeyerAsset, "SetCompositeKeyerAsset" }, // 1062412355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeKeyerFromAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::NewProp_CompositeKeyerAsset = { "CompositeKeyerAsset", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeKeyerFromAsset, CompositeKeyerAsset), Z_Construct_UClass_UCompositeKeyer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeKeyerAsset_MetaData), NewProp_CompositeKeyerAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::NewProp_CompositeKeyerAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositeKeyer,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::ClassParams = {
	&UCompositeKeyerFromAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeKeyerFromAsset()
{
	if (!Z_Registration_Info_UClass_UCompositeKeyerFromAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeKeyerFromAsset.OuterSingleton, Z_Construct_UClass_UCompositeKeyerFromAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeKeyerFromAsset.OuterSingleton;
}
UCompositeKeyerFromAsset::UCompositeKeyerFromAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeKeyerFromAsset);
UCompositeKeyerFromAsset::~UCompositeKeyerFromAsset() {}
// ********** End Class UCompositeKeyerFromAsset ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeKeyerFromAsset, UCompositeKeyerFromAsset::StaticClass, TEXT("UCompositeKeyerFromAsset"), &Z_Registration_Info_UClass_UCompositeKeyerFromAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeKeyerFromAsset), 3158000903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h__Script_Compositor_3154734465(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyerFromAsset_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
