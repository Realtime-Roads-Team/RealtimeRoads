// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Objects/CompositeColorGrade.h"
#include "Engine/Scene.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeColorGrade() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeColorGrade();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeColorGrade_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeColorGrade *****************************************************
void UCompositeColorGrade::StaticRegisterNativesUCompositeColorGrade()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeColorGrade;
UClass* UCompositeColorGrade::GetPrivateStaticClass()
{
	using TClass = UCompositeColorGrade;
	if (!Z_Registration_Info_UClass_UCompositeColorGrade.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeColorGrade"),
			Z_Registration_Info_UClass_UCompositeColorGrade.InnerSingleton,
			StaticRegisterNativesUCompositeColorGrade,
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
	return Z_Registration_Info_UClass_UCompositeColorGrade.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeColorGrade_NoRegister()
{
	return UCompositeColorGrade::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeColorGrade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Compositor" },
		{ "ClassGroupNames", "Compositor" },
		{ "Comment", "/**\n * Wrapper class for all color grading properties.\n */" },
		{ "IncludePath", "Objects/CompositeColorGrade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
		{ "ToolTip", "Wrapper class for all color grading properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradeScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Color Grading" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradeMedia_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Color Grading" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradeCombined_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Color Grading" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradeScene_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "Comment", "///**\n//Color correction controls for adjustments on the scene color.\n//This is applied at the start of the post processing pipeline.\n//This means the media matte will not be affected by it.\n//Because the media matte is applied to the scene after this color correction.\n//The standard unreal color correction found in the post process volume might cause artifacts on the matte.\n//*/\n" },
		{ "EditCondition", "bOverride_ColorGradeScene" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
		{ "ToolTip", "Color correction controls for adjustments on the scene color.\nThis is applied at the start of the post processing pipeline.\nThis means the media matte will not be affected by it.\nBecause the media matte is applied to the scene after this color correction.\nThe standard unreal color correction found in the post process volume might cause artifacts on the matte." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradeMedia_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "Comment", "/** Color correction controls for adjustments on the media. This is applied after keying. */" },
		{ "EditCondition", "bOverride_ColorGradeMedia" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
		{ "ToolTip", "Color correction controls for adjustments on the media. This is applied after keying." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradeCombined_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "Comment", "/** The color grade happens after the media input has been combined with the virtual scene. */" },
		{ "EditCondition", "bOverride_ColorGradeCombined" },
		{ "ModuleRelativePath", "Public/Objects/CompositeColorGrade.h" },
		{ "ToolTip", "The color grade happens after the media input has been combined with the virtual scene." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ColorGradeScene_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradeScene;
	static void NewProp_bOverride_ColorGradeMedia_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradeMedia;
	static void NewProp_bOverride_ColorGradeCombined_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradeCombined;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradeScene;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradeMedia;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradeCombined;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeColorGrade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeScene_SetBit(void* Obj)
{
	((UCompositeColorGrade*)Obj)->bOverride_ColorGradeScene = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeScene = { "bOverride_ColorGradeScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCompositeColorGrade), &Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGradeScene_MetaData), NewProp_bOverride_ColorGradeScene_MetaData) };
void Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeMedia_SetBit(void* Obj)
{
	((UCompositeColorGrade*)Obj)->bOverride_ColorGradeMedia = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeMedia = { "bOverride_ColorGradeMedia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCompositeColorGrade), &Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeMedia_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGradeMedia_MetaData), NewProp_bOverride_ColorGradeMedia_MetaData) };
void Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeCombined_SetBit(void* Obj)
{
	((UCompositeColorGrade*)Obj)->bOverride_ColorGradeCombined = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeCombined = { "bOverride_ColorGradeCombined", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCompositeColorGrade), &Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeCombined_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGradeCombined_MetaData), NewProp_bOverride_ColorGradeCombined_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_ColorGradeScene = { "ColorGradeScene", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeColorGrade, ColorGradeScene), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorGradeScene_MetaData), NewProp_ColorGradeScene_MetaData) }; // 1379575079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_ColorGradeMedia = { "ColorGradeMedia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeColorGrade, ColorGradeMedia), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorGradeMedia_MetaData), NewProp_ColorGradeMedia_MetaData) }; // 1379575079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_ColorGradeCombined = { "ColorGradeCombined", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeColorGrade, ColorGradeCombined), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorGradeCombined_MetaData), NewProp_ColorGradeCombined_MetaData) }; // 1379575079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeColorGrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_bOverride_ColorGradeCombined,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_ColorGradeScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_ColorGradeMedia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeColorGrade_Statics::NewProp_ColorGradeCombined,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeColorGrade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeColorGrade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeColorGrade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeColorGrade_Statics::ClassParams = {
	&UCompositeColorGrade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompositeColorGrade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeColorGrade_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeColorGrade_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeColorGrade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeColorGrade()
{
	if (!Z_Registration_Info_UClass_UCompositeColorGrade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeColorGrade.OuterSingleton, Z_Construct_UClass_UCompositeColorGrade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeColorGrade.OuterSingleton;
}
UCompositeColorGrade::UCompositeColorGrade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeColorGrade);
UCompositeColorGrade::~UCompositeColorGrade() {}
// ********** End Class UCompositeColorGrade *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeColorGrade, UCompositeColorGrade::StaticClass, TEXT("UCompositeColorGrade"), &Z_Registration_Info_UClass_UCompositeColorGrade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeColorGrade), 682197421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h__Script_Compositor_4026230215(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeColorGrade_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
