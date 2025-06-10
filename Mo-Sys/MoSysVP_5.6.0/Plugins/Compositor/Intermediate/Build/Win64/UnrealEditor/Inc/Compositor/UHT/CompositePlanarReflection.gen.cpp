// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/CompositePlanarReflection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositePlanarReflection() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_ACompositePlanarReflection();
COMPOSITOR_API UClass* Z_Construct_UClass_ACompositePlanarReflection_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositePlanarReflectionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACompositePlanarReflection Function SetActive ****************************
struct Z_Construct_UFunction_ACompositePlanarReflection_SetActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media Input" },
		{ "Comment", "/** Makes this Planar Reflection the active one for the world composite. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositePlanarReflection.h" },
		{ "ToolTip", "Makes this Planar Reflection the active one for the world composite." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositePlanarReflection_SetActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositePlanarReflection, nullptr, "SetActive", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositePlanarReflection_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositePlanarReflection_SetActive_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositePlanarReflection_SetActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositePlanarReflection_SetActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositePlanarReflection::execSetActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActive();
	P_NATIVE_END;
}
// ********** End Class ACompositePlanarReflection Function SetActive ******************************

// ********** Begin Class ACompositePlanarReflection ***********************************************
void ACompositePlanarReflection::StaticRegisterNativesACompositePlanarReflection()
{
	UClass* Class = ACompositePlanarReflection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetActive", &ACompositePlanarReflection::execSetActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACompositePlanarReflection;
UClass* ACompositePlanarReflection::GetPrivateStaticClass()
{
	using TClass = ACompositePlanarReflection;
	if (!Z_Registration_Info_UClass_ACompositePlanarReflection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositePlanarReflection"),
			Z_Registration_Info_UClass_ACompositePlanarReflection.InnerSingleton,
			StaticRegisterNativesACompositePlanarReflection,
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
	return Z_Registration_Info_UClass_ACompositePlanarReflection.InnerSingleton;
}
UClass* Z_Construct_UClass_ACompositePlanarReflection_NoRegister()
{
	return ACompositePlanarReflection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACompositePlanarReflection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "Actors/CompositePlanarReflection.h" },
		{ "ModuleRelativePath", "Public/Actors/CompositePlanarReflection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to sprite visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositePlanarReflection.h" },
		{ "ToolTip", "Reference to sprite visualization component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to arrow visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositePlanarReflection.h" },
		{ "ToolTip", "Reference to arrow visualization component" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositePlanarReflectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CompositePlanarReflection" },
		{ "Comment", "/** Scene capture component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositePlanarReflection.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositePlanarReflectionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompositePlanarReflection_SetActive, "SetActive" }, // 2190017049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositePlanarReflection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositePlanarReflection_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositePlanarReflection, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositePlanarReflection_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositePlanarReflection, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositePlanarReflection_Statics::NewProp_CompositePlanarReflectionComponent = { "CompositePlanarReflectionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositePlanarReflection, CompositePlanarReflectionComponent), Z_Construct_UClass_UCompositePlanarReflectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositePlanarReflectionComponent_MetaData), NewProp_CompositePlanarReflectionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositePlanarReflection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositePlanarReflection_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositePlanarReflection_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositePlanarReflection_Statics::NewProp_CompositePlanarReflectionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositePlanarReflection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACompositePlanarReflection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASceneCapture,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositePlanarReflection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompositePlanarReflection_Statics::ClassParams = {
	&ACompositePlanarReflection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACompositePlanarReflection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACompositePlanarReflection_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositePlanarReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_ACompositePlanarReflection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACompositePlanarReflection()
{
	if (!Z_Registration_Info_UClass_ACompositePlanarReflection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompositePlanarReflection.OuterSingleton, Z_Construct_UClass_ACompositePlanarReflection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACompositePlanarReflection.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositePlanarReflection);
ACompositePlanarReflection::~ACompositePlanarReflection() {}
// ********** End Class ACompositePlanarReflection *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACompositePlanarReflection, ACompositePlanarReflection::StaticClass, TEXT("ACompositePlanarReflection"), &Z_Registration_Info_UClass_ACompositePlanarReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositePlanarReflection), 3408805859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h__Script_Compositor_3250757884(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositePlanarReflection_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
