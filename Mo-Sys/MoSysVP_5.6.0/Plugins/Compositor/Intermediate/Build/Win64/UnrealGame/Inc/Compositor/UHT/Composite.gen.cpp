// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assets/Composite.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeComposite() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UComposite();
COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeColorGrade_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister();
COMPOSITOR_API UEnum* Z_Construct_UEnum_Compositor_EMediaBlend();
COMPOSITOR_API UEnum* Z_Construct_UEnum_Compositor_EOutputAlpha();
COMPOSITOR_API UEnum* Z_Construct_UEnum_Compositor_EOutputRgbEncoding();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UComposite Function EnableMediaInputKeyer ********************************
struct Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics
{
	struct Composite_eventEnableMediaInputKeyer_Parms
	{
		bool IsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "Comment", "/** Enable input keyer.*/" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Enable input keyer." },
	};
#endif // WITH_METADATA
	static void NewProp_IsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::NewProp_IsEnabled_SetBit(void* Obj)
{
	((Composite_eventEnableMediaInputKeyer_Parms*)Obj)->IsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventEnableMediaInputKeyer_Parms), &Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::NewProp_IsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "EnableMediaInputKeyer", Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::Composite_eventEnableMediaInputKeyer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::Composite_eventEnableMediaInputKeyer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_EnableMediaInputKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_EnableMediaInputKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execEnableMediaInputKeyer)
{
	P_GET_UBOOL(Z_Param_IsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableMediaInputKeyer(Z_Param_IsEnabled);
	P_NATIVE_END;
}
// ********** End Class UComposite Function EnableMediaInputKeyer **********************************

// ********** Begin Class UComposite Function GetBrightnessMaskGamma *******************************
struct Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics
{
	struct Composite_eventGetBrightnessMaskGamma_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetBrightnessMaskGamma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetBrightnessMaskGamma", Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::Composite_eventGetBrightnessMaskGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::Composite_eventGetBrightnessMaskGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetBrightnessMaskGamma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBrightnessMaskGamma();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetBrightnessMaskGamma *********************************

// ********** Begin Class UComposite Function GetCompositeColorGrade *******************************
struct Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics
{
	struct Composite_eventGetCompositeColorGrade_Parms
	{
		UCompositeColorGrade* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetCompositeColorGrade_Parms, ReturnValue), Z_Construct_UClass_UCompositeColorGrade_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetCompositeColorGrade", Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::Composite_eventGetCompositeColorGrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::Composite_eventGetCompositeColorGrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetCompositeColorGrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetCompositeColorGrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetCompositeColorGrade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCompositeColorGrade**)Z_Param__Result=P_THIS->GetCompositeColorGrade();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetCompositeColorGrade *********************************

// ********** Begin Class UComposite Function GetEnableMediaShadows ********************************
struct Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics
{
	struct Composite_eventGetEnableMediaShadows_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Composite_eventGetEnableMediaShadows_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventGetEnableMediaShadows_Parms), &Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetEnableMediaShadows", Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::Composite_eventGetEnableMediaShadows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::Composite_eventGetEnableMediaShadows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetEnableMediaShadows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetEnableMediaShadows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetEnableMediaShadows)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableMediaShadows();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetEnableMediaShadows **********************************

// ********** Begin Class UComposite Function GetEnablePlanarReflection ****************************
struct Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics
{
	struct Composite_eventGetEnablePlanarReflection_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Composite_eventGetEnablePlanarReflection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventGetEnablePlanarReflection_Parms), &Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetEnablePlanarReflection", Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::Composite_eventGetEnablePlanarReflection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::Composite_eventGetEnablePlanarReflection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetEnablePlanarReflection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetEnablePlanarReflection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetEnablePlanarReflection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnablePlanarReflection();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetEnablePlanarReflection ******************************

// ********** Begin Class UComposite Function GetEnableSoftMask ************************************
struct Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics
{
	struct Composite_eventGetEnableSoftMask_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Composite_eventGetEnableSoftMask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventGetEnableSoftMask_Parms), &Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetEnableSoftMask", Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::Composite_eventGetEnableSoftMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::Composite_eventGetEnableSoftMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetEnableSoftMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetEnableSoftMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetEnableSoftMask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEnableSoftMask();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetEnableSoftMask **************************************

// ********** Begin Class UComposite Function GetMediaBlend ****************************************
struct Z_Construct_UFunction_UComposite_GetMediaBlend_Statics
{
	struct Composite_eventGetMediaBlend_Parms
	{
		EMediaBlend ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetMediaBlend_Parms, ReturnValue), Z_Construct_UEnum_Compositor_EMediaBlend, METADATA_PARAMS(0, nullptr) }; // 1525429804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetMediaBlend", Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::Composite_eventGetMediaBlend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::Composite_eventGetMediaBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetMediaBlend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetMediaBlend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetMediaBlend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMediaBlend*)Z_Param__Result=P_THIS->GetMediaBlend();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetMediaBlend ******************************************

// ********** Begin Class UComposite Function GetMediaInputKeyer ***********************************
struct Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics
{
	struct Composite_eventGetMediaInputKeyer_Parms
	{
		UCompositeKeyer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetMediaInputKeyer_Parms, ReturnValue), Z_Construct_UClass_UCompositeKeyer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetMediaInputKeyer", Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::Composite_eventGetMediaInputKeyer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::Composite_eventGetMediaInputKeyer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetMediaInputKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetMediaInputKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetMediaInputKeyer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCompositeKeyer**)Z_Param__Result=P_THIS->GetMediaInputKeyer();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetMediaInputKeyer *************************************

// ********** Begin Class UComposite Function GetMediaInputSource **********************************
struct Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics
{
	struct Composite_eventGetMediaInputSource_Parms
	{
		UMediaSource* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetMediaInputSource_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetMediaInputSource", Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::Composite_eventGetMediaInputSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::Composite_eventGetMediaInputSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetMediaInputSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetMediaInputSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetMediaInputSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaSource**)Z_Param__Result=P_THIS->GetMediaInputSource();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetMediaInputSource ************************************

// ********** Begin Class UComposite Function GetOutputAlpha ***************************************
struct Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics
{
	struct Composite_eventGetOutputAlpha_Parms
	{
		EOutputAlpha ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetOutputAlpha_Parms, ReturnValue), Z_Construct_UEnum_Compositor_EOutputAlpha, METADATA_PARAMS(0, nullptr) }; // 539946905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetOutputAlpha", Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::Composite_eventGetOutputAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::Composite_eventGetOutputAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetOutputAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetOutputAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetOutputAlpha)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOutputAlpha*)Z_Param__Result=P_THIS->GetOutputAlpha();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetOutputAlpha *****************************************

// ********** Begin Class UComposite Function GetOutputRgbEncoding *********************************
struct Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics
{
	struct Composite_eventGetOutputRgbEncoding_Parms
	{
		EOutputRgbEncoding ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetOutputRgbEncoding_Parms, ReturnValue), Z_Construct_UEnum_Compositor_EOutputRgbEncoding, METADATA_PARAMS(0, nullptr) }; // 2704225389
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetOutputRgbEncoding", Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::Composite_eventGetOutputRgbEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::Composite_eventGetOutputRgbEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetOutputRgbEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetOutputRgbEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetOutputRgbEncoding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOutputRgbEncoding*)Z_Param__Result=P_THIS->GetOutputRgbEncoding();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetOutputRgbEncoding ***********************************

// ********** Begin Class UComposite Function GetParentComposite ***********************************
struct Z_Construct_UFunction_UComposite_GetParentComposite_Statics
{
	struct Composite_eventGetParentComposite_Parms
	{
		UComposite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_GetParentComposite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetParentComposite_Parms, ReturnValue), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetParentComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetParentComposite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetParentComposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetParentComposite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetParentComposite", Z_Construct_UFunction_UComposite_GetParentComposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetParentComposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetParentComposite_Statics::Composite_eventGetParentComposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetParentComposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetParentComposite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetParentComposite_Statics::Composite_eventGetParentComposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetParentComposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetParentComposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetParentComposite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UComposite**)Z_Param__Result=P_THIS->GetParentComposite();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetParentComposite *************************************

// ********** Begin Class UComposite Function GetPlanarReflectionColor *****************************
struct Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics
{
	struct Composite_eventGetPlanarReflectionColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetPlanarReflectionColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetPlanarReflectionColor", Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::Composite_eventGetPlanarReflectionColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::Composite_eventGetPlanarReflectionColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetPlanarReflectionColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetPlanarReflectionColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetPlanarReflectionColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetPlanarReflectionColor();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetPlanarReflectionColor *******************************

// ********** Begin Class UComposite Function GetPlanarReflectionDistortionIntensity ***************
struct Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics
{
	struct Composite_eventGetPlanarReflectionDistortionIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetPlanarReflectionDistortionIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetPlanarReflectionDistortionIntensity", Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::Composite_eventGetPlanarReflectionDistortionIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::Composite_eventGetPlanarReflectionDistortionIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetPlanarReflectionDistortionIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlanarReflectionDistortionIntensity();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetPlanarReflectionDistortionIntensity *****************

// ********** Begin Class UComposite Function GetPlanarReflectionDistortionOffset ******************
struct Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics
{
	struct Composite_eventGetPlanarReflectionDistortionOffset_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetPlanarReflectionDistortionOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetPlanarReflectionDistortionOffset", Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::Composite_eventGetPlanarReflectionDistortionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::Composite_eventGetPlanarReflectionDistortionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetPlanarReflectionDistortionOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlanarReflectionDistortionOffset();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetPlanarReflectionDistortionOffset ********************

// ********** Begin Class UComposite Function GetPlanarReflectionScreenPercentage ******************
struct Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics
{
	struct Composite_eventGetPlanarReflectionScreenPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetPlanarReflectionScreenPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetPlanarReflectionScreenPercentage", Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::Composite_eventGetPlanarReflectionScreenPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::Composite_eventGetPlanarReflectionScreenPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetPlanarReflectionScreenPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlanarReflectionScreenPercentage();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetPlanarReflectionScreenPercentage ********************

// ********** Begin Class UComposite Function GetShadowsBlackLevel *********************************
struct Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics
{
	struct Composite_eventGetShadowsBlackLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetShadowsBlackLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetShadowsBlackLevel", Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::Composite_eventGetShadowsBlackLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::Composite_eventGetShadowsBlackLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetShadowsBlackLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetShadowsBlackLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetShadowsBlackLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShadowsBlackLevel();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetShadowsBlackLevel ***********************************

// ********** Begin Class UComposite Function GetShadowsGamma **************************************
struct Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics
{
	struct Composite_eventGetShadowsGamma_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetShadowsGamma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetShadowsGamma", Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::Composite_eventGetShadowsGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::Composite_eventGetShadowsGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetShadowsGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetShadowsGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetShadowsGamma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShadowsGamma();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetShadowsGamma ****************************************

// ********** Begin Class UComposite Function GetShadowsOffset *************************************
struct Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics
{
	struct Composite_eventGetShadowsOffset_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetShadowsOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetShadowsOffset", Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::Composite_eventGetShadowsOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::Composite_eventGetShadowsOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetShadowsOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetShadowsOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetShadowsOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShadowsOffset();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetShadowsOffset ***************************************

// ********** Begin Class UComposite Function GetShadowsTint ***************************************
struct Z_Construct_UFunction_UComposite_GetShadowsTint_Statics
{
	struct Composite_eventGetShadowsTint_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetShadowsTint_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetShadowsTint", Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::Composite_eventGetShadowsTint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::Composite_eventGetShadowsTint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetShadowsTint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetShadowsTint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetShadowsTint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetShadowsTint();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetShadowsTint *****************************************

// ********** Begin Class UComposite Function GetShadowsWhiteLevel *********************************
struct Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics
{
	struct Composite_eventGetShadowsWhiteLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetShadowsWhiteLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetShadowsWhiteLevel", Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::Composite_eventGetShadowsWhiteLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::Composite_eventGetShadowsWhiteLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetShadowsWhiteLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShadowsWhiteLevel();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetShadowsWhiteLevel ***********************************

// ********** Begin Class UComposite Function GetSoftMaskScreenPercentage **************************
struct Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics
{
	struct Composite_eventGetSoftMaskScreenPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventGetSoftMaskScreenPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "GetSoftMaskScreenPercentage", Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::Composite_eventGetSoftMaskScreenPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::Composite_eventGetSoftMaskScreenPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execGetSoftMaskScreenPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoftMaskScreenPercentage();
	P_NATIVE_END;
}
// ********** End Class UComposite Function GetSoftMaskScreenPercentage ****************************

// ********** Begin Class UComposite Function IsKeyerEnabled ***************************************
struct Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics
{
	struct Composite_eventIsKeyerEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "Comment", "/** Is the Keyer on this Composite not null and enabled.*/" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Is the Keyer on this Composite not null and enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Composite_eventIsKeyerEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventIsKeyerEnabled_Parms), &Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "IsKeyerEnabled", Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::Composite_eventIsKeyerEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::Composite_eventIsKeyerEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_IsKeyerEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_IsKeyerEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execIsKeyerEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsKeyerEnabled();
	P_NATIVE_END;
}
// ********** End Class UComposite Function IsKeyerEnabled *****************************************

// ********** Begin Class UComposite Function IsThisCompositeAnAncestorOf **************************
struct Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics
{
	struct Composite_eventIsThisCompositeAnAncestorOf_Parms
	{
		UComposite* PossibleDescendant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "Comment", "/** Is this Composite a descendant of the supplied Composite.*/" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Is this Composite a descendant of the supplied Composite." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PossibleDescendant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::NewProp_PossibleDescendant = { "PossibleDescendant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventIsThisCompositeAnAncestorOf_Parms, PossibleDescendant), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Composite_eventIsThisCompositeAnAncestorOf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventIsThisCompositeAnAncestorOf_Parms), &Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::NewProp_PossibleDescendant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "IsThisCompositeAnAncestorOf", Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::Composite_eventIsThisCompositeAnAncestorOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::Composite_eventIsThisCompositeAnAncestorOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execIsThisCompositeAnAncestorOf)
{
	P_GET_OBJECT(UComposite,Z_Param_PossibleDescendant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsThisCompositeAnAncestorOf(Z_Param_PossibleDescendant);
	P_NATIVE_END;
}
// ********** End Class UComposite Function IsThisCompositeAnAncestorOf ****************************

// ********** Begin Class UComposite Function SetBrightnessMaskGamma *******************************
struct Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics
{
	struct Composite_eventSetBrightnessMaskGamma_Parms
	{
		float NewBrightnessMaskGamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBrightnessMaskGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::NewProp_NewBrightnessMaskGamma = { "NewBrightnessMaskGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetBrightnessMaskGamma_Parms, NewBrightnessMaskGamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::NewProp_NewBrightnessMaskGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetBrightnessMaskGamma", Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::Composite_eventSetBrightnessMaskGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::Composite_eventSetBrightnessMaskGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetBrightnessMaskGamma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrightnessMaskGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrightnessMaskGamma(Z_Param_NewBrightnessMaskGamma);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetBrightnessMaskGamma *********************************

// ********** Begin Class UComposite Function SetEnableMediaShadows ********************************
struct Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics
{
	struct Composite_eventSetEnableMediaShadows_Parms
	{
		bool bNewEnableMediaShadows;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewEnableMediaShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnableMediaShadows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::NewProp_bNewEnableMediaShadows_SetBit(void* Obj)
{
	((Composite_eventSetEnableMediaShadows_Parms*)Obj)->bNewEnableMediaShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::NewProp_bNewEnableMediaShadows = { "bNewEnableMediaShadows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventSetEnableMediaShadows_Parms), &Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::NewProp_bNewEnableMediaShadows_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::NewProp_bNewEnableMediaShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetEnableMediaShadows", Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::Composite_eventSetEnableMediaShadows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::Composite_eventSetEnableMediaShadows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetEnableMediaShadows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetEnableMediaShadows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetEnableMediaShadows)
{
	P_GET_UBOOL(Z_Param_bNewEnableMediaShadows);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableMediaShadows(Z_Param_bNewEnableMediaShadows);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetEnableMediaShadows **********************************

// ********** Begin Class UComposite Function SetEnablePlanarReflection ****************************
struct Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics
{
	struct Composite_eventSetEnablePlanarReflection_Parms
	{
		bool bNewEnablePlanarReflection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewEnablePlanarReflection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnablePlanarReflection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::NewProp_bNewEnablePlanarReflection_SetBit(void* Obj)
{
	((Composite_eventSetEnablePlanarReflection_Parms*)Obj)->bNewEnablePlanarReflection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::NewProp_bNewEnablePlanarReflection = { "bNewEnablePlanarReflection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventSetEnablePlanarReflection_Parms), &Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::NewProp_bNewEnablePlanarReflection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::NewProp_bNewEnablePlanarReflection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetEnablePlanarReflection", Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::Composite_eventSetEnablePlanarReflection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::Composite_eventSetEnablePlanarReflection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetEnablePlanarReflection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetEnablePlanarReflection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetEnablePlanarReflection)
{
	P_GET_UBOOL(Z_Param_bNewEnablePlanarReflection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnablePlanarReflection(Z_Param_bNewEnablePlanarReflection);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetEnablePlanarReflection ******************************

// ********** Begin Class UComposite Function SetEnableSoftMask ************************************
struct Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics
{
	struct Composite_eventSetEnableSoftMask_Parms
	{
		bool bNewEnableSoftMask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewEnableSoftMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnableSoftMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::NewProp_bNewEnableSoftMask_SetBit(void* Obj)
{
	((Composite_eventSetEnableSoftMask_Parms*)Obj)->bNewEnableSoftMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::NewProp_bNewEnableSoftMask = { "bNewEnableSoftMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Composite_eventSetEnableSoftMask_Parms), &Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::NewProp_bNewEnableSoftMask_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::NewProp_bNewEnableSoftMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetEnableSoftMask", Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::Composite_eventSetEnableSoftMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::Composite_eventSetEnableSoftMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetEnableSoftMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetEnableSoftMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetEnableSoftMask)
{
	P_GET_UBOOL(Z_Param_bNewEnableSoftMask);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableSoftMask(Z_Param_bNewEnableSoftMask);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetEnableSoftMask **************************************

// ********** Begin Class UComposite Function SetMediaBlend ****************************************
struct Z_Construct_UFunction_UComposite_SetMediaBlend_Statics
{
	struct Composite_eventSetMediaBlend_Parms
	{
		EMediaBlend bNewMediaBlend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_bNewMediaBlend_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_bNewMediaBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::NewProp_bNewMediaBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::NewProp_bNewMediaBlend = { "bNewMediaBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetMediaBlend_Parms, bNewMediaBlend), Z_Construct_UEnum_Compositor_EMediaBlend, METADATA_PARAMS(0, nullptr) }; // 1525429804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::NewProp_bNewMediaBlend_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::NewProp_bNewMediaBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetMediaBlend", Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::Composite_eventSetMediaBlend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::Composite_eventSetMediaBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetMediaBlend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetMediaBlend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetMediaBlend)
{
	P_GET_ENUM(EMediaBlend,Z_Param_bNewMediaBlend);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaBlend(EMediaBlend(Z_Param_bNewMediaBlend));
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetMediaBlend ******************************************

// ********** Begin Class UComposite Function SetMediaInputKeyer ***********************************
struct Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics
{
	struct Composite_eventSetMediaInputKeyer_Parms
	{
		UCompositeKeyer* NewMediaInputKeyer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMediaInputKeyer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::NewProp_NewMediaInputKeyer = { "NewMediaInputKeyer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetMediaInputKeyer_Parms, NewMediaInputKeyer), Z_Construct_UClass_UCompositeKeyer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::NewProp_NewMediaInputKeyer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetMediaInputKeyer", Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::Composite_eventSetMediaInputKeyer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::Composite_eventSetMediaInputKeyer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetMediaInputKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetMediaInputKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetMediaInputKeyer)
{
	P_GET_OBJECT(UCompositeKeyer,Z_Param_NewMediaInputKeyer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaInputKeyer(Z_Param_NewMediaInputKeyer);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetMediaInputKeyer *************************************

// ********** Begin Class UComposite Function SetMediaInputSource **********************************
struct Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics
{
	struct Composite_eventSetMediaInputSource_Parms
	{
		UMediaSource* NewMediaInputSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMediaInputSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::NewProp_NewMediaInputSource = { "NewMediaInputSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetMediaInputSource_Parms, NewMediaInputSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::NewProp_NewMediaInputSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetMediaInputSource", Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::Composite_eventSetMediaInputSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::Composite_eventSetMediaInputSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetMediaInputSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetMediaInputSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetMediaInputSource)
{
	P_GET_OBJECT(UMediaSource,Z_Param_NewMediaInputSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaInputSource(Z_Param_NewMediaInputSource);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetMediaInputSource ************************************

// ********** Begin Class UComposite Function SetOutputAlpha ***************************************
struct Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics
{
	struct Composite_eventSetOutputAlpha_Parms
	{
		EOutputAlpha NewOutputAlpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewOutputAlpha_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOutputAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::NewProp_NewOutputAlpha_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::NewProp_NewOutputAlpha = { "NewOutputAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetOutputAlpha_Parms, NewOutputAlpha), Z_Construct_UEnum_Compositor_EOutputAlpha, METADATA_PARAMS(0, nullptr) }; // 539946905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::NewProp_NewOutputAlpha_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::NewProp_NewOutputAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetOutputAlpha", Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::Composite_eventSetOutputAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::Composite_eventSetOutputAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetOutputAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetOutputAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetOutputAlpha)
{
	P_GET_ENUM(EOutputAlpha,Z_Param_NewOutputAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputAlpha(EOutputAlpha(Z_Param_NewOutputAlpha));
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetOutputAlpha *****************************************

// ********** Begin Class UComposite Function SetOutputRgbEncoding *********************************
struct Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics
{
	struct Composite_eventSetOutputRgbEncoding_Parms
	{
		EOutputRgbEncoding NewOutputRgbEncoding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewOutputRgbEncoding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOutputRgbEncoding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::NewProp_NewOutputRgbEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::NewProp_NewOutputRgbEncoding = { "NewOutputRgbEncoding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetOutputRgbEncoding_Parms, NewOutputRgbEncoding), Z_Construct_UEnum_Compositor_EOutputRgbEncoding, METADATA_PARAMS(0, nullptr) }; // 2704225389
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::NewProp_NewOutputRgbEncoding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::NewProp_NewOutputRgbEncoding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetOutputRgbEncoding", Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::Composite_eventSetOutputRgbEncoding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::Composite_eventSetOutputRgbEncoding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetOutputRgbEncoding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetOutputRgbEncoding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetOutputRgbEncoding)
{
	P_GET_ENUM(EOutputRgbEncoding,Z_Param_NewOutputRgbEncoding);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutputRgbEncoding(EOutputRgbEncoding(Z_Param_NewOutputRgbEncoding));
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetOutputRgbEncoding ***********************************

// ********** Begin Class UComposite Function SetParentComposite ***********************************
struct Z_Construct_UFunction_UComposite_SetParentComposite_Statics
{
	struct Composite_eventSetParentComposite_Parms
	{
		UComposite* NewParentComposite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParentComposite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposite_SetParentComposite_Statics::NewProp_NewParentComposite = { "NewParentComposite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetParentComposite_Parms, NewParentComposite), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetParentComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetParentComposite_Statics::NewProp_NewParentComposite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetParentComposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetParentComposite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetParentComposite", Z_Construct_UFunction_UComposite_SetParentComposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetParentComposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetParentComposite_Statics::Composite_eventSetParentComposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetParentComposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetParentComposite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetParentComposite_Statics::Composite_eventSetParentComposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetParentComposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetParentComposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetParentComposite)
{
	P_GET_OBJECT(UComposite,Z_Param_NewParentComposite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParentComposite(Z_Param_NewParentComposite);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetParentComposite *************************************

// ********** Begin Class UComposite Function SetPlanarReflectionColor *****************************
struct Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics
{
	struct Composite_eventSetPlanarReflectionColor_Parms
	{
		FLinearColor NewPlanarReflectionColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPlanarReflectionColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::NewProp_NewPlanarReflectionColor = { "NewPlanarReflectionColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetPlanarReflectionColor_Parms, NewPlanarReflectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::NewProp_NewPlanarReflectionColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetPlanarReflectionColor", Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::Composite_eventSetPlanarReflectionColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::Composite_eventSetPlanarReflectionColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetPlanarReflectionColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetPlanarReflectionColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetPlanarReflectionColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewPlanarReflectionColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarReflectionColor(Z_Param_NewPlanarReflectionColor);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetPlanarReflectionColor *******************************

// ********** Begin Class UComposite Function SetPlanarReflectionDistortionIntensity ***************
struct Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics
{
	struct Composite_eventSetPlanarReflectionDistortionIntensity_Parms
	{
		float NewPlanarReflectionDistortionIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlanarReflectionDistortionIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::NewProp_NewPlanarReflectionDistortionIntensity = { "NewPlanarReflectionDistortionIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetPlanarReflectionDistortionIntensity_Parms, NewPlanarReflectionDistortionIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::NewProp_NewPlanarReflectionDistortionIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetPlanarReflectionDistortionIntensity", Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::Composite_eventSetPlanarReflectionDistortionIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::Composite_eventSetPlanarReflectionDistortionIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetPlanarReflectionDistortionIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlanarReflectionDistortionIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarReflectionDistortionIntensity(Z_Param_NewPlanarReflectionDistortionIntensity);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetPlanarReflectionDistortionIntensity *****************

// ********** Begin Class UComposite Function SetPlanarReflectionDistortionOffset ******************
struct Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics
{
	struct Composite_eventSetPlanarReflectionDistortionOffset_Parms
	{
		float NewPlanarReflectionDistortionOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlanarReflectionDistortionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::NewProp_NewPlanarReflectionDistortionOffset = { "NewPlanarReflectionDistortionOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetPlanarReflectionDistortionOffset_Parms, NewPlanarReflectionDistortionOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::NewProp_NewPlanarReflectionDistortionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetPlanarReflectionDistortionOffset", Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::Composite_eventSetPlanarReflectionDistortionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::Composite_eventSetPlanarReflectionDistortionOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetPlanarReflectionDistortionOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlanarReflectionDistortionOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarReflectionDistortionOffset(Z_Param_NewPlanarReflectionDistortionOffset);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetPlanarReflectionDistortionOffset ********************

// ********** Begin Class UComposite Function SetPlanarReflectionScreenPercentage ******************
struct Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics
{
	struct Composite_eventSetPlanarReflectionScreenPercentage_Parms
	{
		float NewPlanarReflectionScreenPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlanarReflectionScreenPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::NewProp_NewPlanarReflectionScreenPercentage = { "NewPlanarReflectionScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetPlanarReflectionScreenPercentage_Parms, NewPlanarReflectionScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::NewProp_NewPlanarReflectionScreenPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetPlanarReflectionScreenPercentage", Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::Composite_eventSetPlanarReflectionScreenPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::Composite_eventSetPlanarReflectionScreenPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetPlanarReflectionScreenPercentage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlanarReflectionScreenPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarReflectionScreenPercentage(Z_Param_NewPlanarReflectionScreenPercentage);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetPlanarReflectionScreenPercentage ********************

// ********** Begin Class UComposite Function SetShadowsBlackLevel *********************************
struct Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics
{
	struct Composite_eventSetShadowsBlackLevel_Parms
	{
		float NewShadowsBlackLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewShadowsBlackLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::NewProp_NewShadowsBlackLevel = { "NewShadowsBlackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetShadowsBlackLevel_Parms, NewShadowsBlackLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::NewProp_NewShadowsBlackLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetShadowsBlackLevel", Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::Composite_eventSetShadowsBlackLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::Composite_eventSetShadowsBlackLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetShadowsBlackLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetShadowsBlackLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetShadowsBlackLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewShadowsBlackLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowsBlackLevel(Z_Param_NewShadowsBlackLevel);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetShadowsBlackLevel ***********************************

// ********** Begin Class UComposite Function SetShadowsGamma **************************************
struct Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics
{
	struct Composite_eventSetShadowsGamma_Parms
	{
		float NewShadowsGamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewShadowsGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::NewProp_NewShadowsGamma = { "NewShadowsGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetShadowsGamma_Parms, NewShadowsGamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::NewProp_NewShadowsGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetShadowsGamma", Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::Composite_eventSetShadowsGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::Composite_eventSetShadowsGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetShadowsGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetShadowsGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetShadowsGamma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewShadowsGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowsGamma(Z_Param_NewShadowsGamma);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetShadowsGamma ****************************************

// ********** Begin Class UComposite Function SetShadowsOffset *************************************
struct Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics
{
	struct Composite_eventSetShadowsOffset_Parms
	{
		float NewShadowsOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewShadowsOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::NewProp_NewShadowsOffset = { "NewShadowsOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetShadowsOffset_Parms, NewShadowsOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::NewProp_NewShadowsOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetShadowsOffset", Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::Composite_eventSetShadowsOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::Composite_eventSetShadowsOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetShadowsOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetShadowsOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetShadowsOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewShadowsOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowsOffset(Z_Param_NewShadowsOffset);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetShadowsOffset ***************************************

// ********** Begin Class UComposite Function SetShadowsTint ***************************************
struct Z_Construct_UFunction_UComposite_SetShadowsTint_Statics
{
	struct Composite_eventSetShadowsTint_Parms
	{
		FLinearColor NewShadowsTint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewShadowsTint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::NewProp_NewShadowsTint = { "NewShadowsTint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetShadowsTint_Parms, NewShadowsTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::NewProp_NewShadowsTint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetShadowsTint", Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::Composite_eventSetShadowsTint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::Composite_eventSetShadowsTint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetShadowsTint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetShadowsTint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetShadowsTint)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewShadowsTint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowsTint(Z_Param_NewShadowsTint);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetShadowsTint *****************************************

// ********** Begin Class UComposite Function SetShadowsWhiteLevel *********************************
struct Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics
{
	struct Composite_eventSetShadowsWhiteLevel_Parms
	{
		float NewShadowsWhiteLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewShadowsWhiteLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::NewProp_NewShadowsWhiteLevel = { "NewShadowsWhiteLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetShadowsWhiteLevel_Parms, NewShadowsWhiteLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::NewProp_NewShadowsWhiteLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetShadowsWhiteLevel", Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::Composite_eventSetShadowsWhiteLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::Composite_eventSetShadowsWhiteLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetShadowsWhiteLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewShadowsWhiteLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowsWhiteLevel(Z_Param_NewShadowsWhiteLevel);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetShadowsWhiteLevel ***********************************

// ********** Begin Class UComposite Function SetSoftMaskScreenPercentage **************************
struct Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics
{
	struct Composite_eventSetSoftMaskScreenPercentage_Parms
	{
		float NewSoftMaskScreenPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Composite" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSoftMaskScreenPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::NewProp_NewSoftMaskScreenPercentage = { "NewSoftMaskScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Composite_eventSetSoftMaskScreenPercentage_Parms, NewSoftMaskScreenPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::NewProp_NewSoftMaskScreenPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UComposite, nullptr, "SetSoftMaskScreenPercentage", Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::Composite_eventSetSoftMaskScreenPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::Composite_eventSetSoftMaskScreenPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UComposite::execSetSoftMaskScreenPercentage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSoftMaskScreenPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoftMaskScreenPercentage(Z_Param_NewSoftMaskScreenPercentage);
	P_NATIVE_END;
}
// ********** End Class UComposite Function SetSoftMaskScreenPercentage ****************************

// ********** Begin Class UComposite ***************************************************************
void UComposite::StaticRegisterNativesUComposite()
{
	UClass* Class = UComposite::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableMediaInputKeyer", &UComposite::execEnableMediaInputKeyer },
		{ "GetBrightnessMaskGamma", &UComposite::execGetBrightnessMaskGamma },
		{ "GetCompositeColorGrade", &UComposite::execGetCompositeColorGrade },
		{ "GetEnableMediaShadows", &UComposite::execGetEnableMediaShadows },
		{ "GetEnablePlanarReflection", &UComposite::execGetEnablePlanarReflection },
		{ "GetEnableSoftMask", &UComposite::execGetEnableSoftMask },
		{ "GetMediaBlend", &UComposite::execGetMediaBlend },
		{ "GetMediaInputKeyer", &UComposite::execGetMediaInputKeyer },
		{ "GetMediaInputSource", &UComposite::execGetMediaInputSource },
		{ "GetOutputAlpha", &UComposite::execGetOutputAlpha },
		{ "GetOutputRgbEncoding", &UComposite::execGetOutputRgbEncoding },
		{ "GetParentComposite", &UComposite::execGetParentComposite },
		{ "GetPlanarReflectionColor", &UComposite::execGetPlanarReflectionColor },
		{ "GetPlanarReflectionDistortionIntensity", &UComposite::execGetPlanarReflectionDistortionIntensity },
		{ "GetPlanarReflectionDistortionOffset", &UComposite::execGetPlanarReflectionDistortionOffset },
		{ "GetPlanarReflectionScreenPercentage", &UComposite::execGetPlanarReflectionScreenPercentage },
		{ "GetShadowsBlackLevel", &UComposite::execGetShadowsBlackLevel },
		{ "GetShadowsGamma", &UComposite::execGetShadowsGamma },
		{ "GetShadowsOffset", &UComposite::execGetShadowsOffset },
		{ "GetShadowsTint", &UComposite::execGetShadowsTint },
		{ "GetShadowsWhiteLevel", &UComposite::execGetShadowsWhiteLevel },
		{ "GetSoftMaskScreenPercentage", &UComposite::execGetSoftMaskScreenPercentage },
		{ "IsKeyerEnabled", &UComposite::execIsKeyerEnabled },
		{ "IsThisCompositeAnAncestorOf", &UComposite::execIsThisCompositeAnAncestorOf },
		{ "SetBrightnessMaskGamma", &UComposite::execSetBrightnessMaskGamma },
		{ "SetEnableMediaShadows", &UComposite::execSetEnableMediaShadows },
		{ "SetEnablePlanarReflection", &UComposite::execSetEnablePlanarReflection },
		{ "SetEnableSoftMask", &UComposite::execSetEnableSoftMask },
		{ "SetMediaBlend", &UComposite::execSetMediaBlend },
		{ "SetMediaInputKeyer", &UComposite::execSetMediaInputKeyer },
		{ "SetMediaInputSource", &UComposite::execSetMediaInputSource },
		{ "SetOutputAlpha", &UComposite::execSetOutputAlpha },
		{ "SetOutputRgbEncoding", &UComposite::execSetOutputRgbEncoding },
		{ "SetParentComposite", &UComposite::execSetParentComposite },
		{ "SetPlanarReflectionColor", &UComposite::execSetPlanarReflectionColor },
		{ "SetPlanarReflectionDistortionIntensity", &UComposite::execSetPlanarReflectionDistortionIntensity },
		{ "SetPlanarReflectionDistortionOffset", &UComposite::execSetPlanarReflectionDistortionOffset },
		{ "SetPlanarReflectionScreenPercentage", &UComposite::execSetPlanarReflectionScreenPercentage },
		{ "SetShadowsBlackLevel", &UComposite::execSetShadowsBlackLevel },
		{ "SetShadowsGamma", &UComposite::execSetShadowsGamma },
		{ "SetShadowsOffset", &UComposite::execSetShadowsOffset },
		{ "SetShadowsTint", &UComposite::execSetShadowsTint },
		{ "SetShadowsWhiteLevel", &UComposite::execSetShadowsWhiteLevel },
		{ "SetSoftMaskScreenPercentage", &UComposite::execSetSoftMaskScreenPercentage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UComposite;
UClass* UComposite::GetPrivateStaticClass()
{
	using TClass = UComposite;
	if (!Z_Registration_Info_UClass_UComposite.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Composite"),
			Z_Registration_Info_UClass_UComposite.InnerSingleton,
			StaticRegisterNativesUComposite,
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
	return Z_Registration_Info_UClass_UComposite.InnerSingleton;
}
UClass* Z_Construct_UClass_UComposite_NoRegister()
{
	return UComposite::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UComposite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Compositor" },
		{ "ClassGroupNames", "Compositor" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Assets/Composite.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MediaInputSource_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Input" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnableSoftMask_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Soft Mask" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SoftMaskScreenPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Soft Mask" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MediaInputKeyer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Keyer" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnableMediaShadows_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Shadows" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadowsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Shadows" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadowsBlackLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Shadows" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadowsWhiteLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Shadows" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadowsGamma_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Shadows" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadowsTint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Shadows" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnablePlanarReflection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Mediar" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PlanarReflectionColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Media" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PlanarReflectionDistortionIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Media" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PlanarReflectionDistortionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Media" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PlanarReflectionScreenPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Media" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BrightnessMaskGamma_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Integration" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MediaBlend_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Output" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputRgbEncoding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Output" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OutputAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Output" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeClassDefaults_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentComposite_MetaData[] = {
		{ "Category", "Parent" },
		{ "Comment", "/** The composite asset from which to get the default values. */" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The composite asset from which to get the default values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputSource_MetaData[] = {
		{ "Category", "Media Input" },
		{ "Comment", "/** The media source used as the media input. */" },
		{ "EditCondition", "bOverride_MediaInputSource" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The media source used as the media input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSoftMask_MetaData[] = {
		{ "Category", "Media Soft Mask" },
		{ "Comment", "/** The actors showing up in the planar reflection. Try to keep this amount to a minimum. */" },
		{ "EditCondition", "bOverride_EnableSoftMask" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The actors showing up in the planar reflection. Try to keep this amount to a minimum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMaskScreenPercentage_MetaData[] = {
		{ "Category", "Media Soft Mask" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** The actors showing up in the planar reflection. Try to keep this amount to a minimum. */" },
		{ "EditCondition", "bOverride_SoftMaskScreenPercentage" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The actors showing up in the planar reflection. Try to keep this amount to a minimum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputKeyer_MetaData[] = {
		{ "Category", "Media Keyer" },
		{ "Comment", "/** The Composite Keyer used on the media input. */" },
		{ "EditCondition", "bOverride_MediaInputKeyer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The Composite Keyer used on the media input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMediaShadows_MetaData[] = {
		{ "Category", "Media Shadows" },
		{ "Comment", "/** Are shadows over media enabled? */" },
		{ "EditCondition", "bOverride_EnableMediaShadows" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Are shadows over media enabled?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsOffset_MetaData[] = {
		{ "Category", "Media Shadows" },
		{ "Comment", "/** Value is added to the shadows. */" },
		{ "EditCondition", "bOverride_ShadowsOffset" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Value is added to the shadows." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsBlackLevel_MetaData[] = {
		{ "Category", "Media Shadows" },
		{ "Comment", "/** Remap the black value of the shadow map. */" },
		{ "EditCondition", "bOverride_ShadowsBlackLevel" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Remap the black value of the shadow map." },
		{ "UIMax", "2" },
		{ "UIMin", "-2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsWhiteLevel_MetaData[] = {
		{ "Category", "Media Shadows" },
		{ "Comment", "/** Remap the white value of the shadow map. */" },
		{ "EditCondition", "bOverride_ShadowsWhiteLevel" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Remap the white value of the shadow map." },
		{ "UIMax", "2" },
		{ "UIMin", "-2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsGamma_MetaData[] = {
		{ "Category", "Media Shadows" },
		{ "Comment", "/** Change the gamma of the shadow map. */" },
		{ "EditCondition", "bOverride_ShadowsGamma" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Change the gamma of the shadow map." },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsTint_MetaData[] = {
		{ "Category", "Media Shadows" },
		{ "Comment", "/** This color is added to the media where the shadows are visible. */" },
		{ "EditCondition", "bOverride_ShadowsTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "This color is added to the media where the shadows are visible." },
		{ "UIMax", "2" },
		{ "UIMin", "-2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePlanarReflection_MetaData[] = {
		{ "Category", "Planar Reflection on Media" },
		{ "Comment", "/** Is planar reflection enabled. Only enable if you need reflections from actors on top of the media. Only shows actors from the show only list. If no list is provided the planar reflection is still disabled. */" },
		{ "EditCondition", "bOverride_EnablePlanarReflection" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Is planar reflection enabled. Only enable if you need reflections from actors on top of the media. Only shows actors from the show only list. If no list is provided the planar reflection is still disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionColor_MetaData[] = {
		{ "Category", "Planar Reflection on Media" },
		{ "Comment", "/** Planar Reflection Color. */" },
		{ "EditCondition", "bOverride_PlanarReflectionColor" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Planar Reflection Color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionDistortionIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Media" },
		{ "Comment", "/** Nonsensical planar reflection distortion media normal intensity. */" },
		{ "EditCondition", "bOverride_PlanarReflectionDistortionIntensity" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Nonsensical planar reflection distortion media normal intensity." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionDistortionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Planar Reflection on Media" },
		{ "Comment", "/** Nonsensical planar reflection distortion media uv offset. */" },
		{ "EditCondition", "bOverride_PlanarReflectionDistortionOffset" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Nonsensical planar reflection distortion media uv offset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionScreenPercentage_MetaData[] = {
		{ "Category", "Planar Reflection on Media" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** The actors showing up in the planar reflection. Try to keep this amount to a minimum. */" },
		{ "EditCondition", "bOverride_PlanarReflectionScreenPercentage" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The actors showing up in the planar reflection. Try to keep this amount to a minimum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeColorGrade_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Color Grading" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaBlend_MetaData[] = {
		{ "Category", "Media Integration" },
		{ "Comment", "/** How is the media blended with the world. */" },
		{ "EditCondition", "bOverride_MediaBlend" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "How is the media blended with the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrightnessMaskGamma_MetaData[] = {
		{ "Category", "Media Integration" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09When blending after the tone curve the shader will still try to mimic correct blending of bright values as close as possible by creating a brightness mask.\n\x09This gamma value controls the brightness mask before it is multiplied with the media. lower values might lead to brighter edges while higher values may cause dark edges.\n\x09*/" },
		{ "EditCondition", "bOverride_BrightnessMaskGamma" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "When blending after the tone curve the shader will still try to mimic correct blending of bright values as close as possible by creating a brightness mask.\nThis gamma value controls the brightness mask before it is multiplied with the media. lower values might lead to brighter edges while higher values may cause dark edges." },
		{ "UIMax", "2" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputRgbEncoding_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// The applied gamma curve.\n" },
		{ "EditCondition", "bOverride_OutputRgbEncoding" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "The applied gamma curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputAlpha_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Invert the alpha channel coming out of the engine. */" },
		{ "EditCondition", "bOverride_OutputAlpha" },
		{ "ModuleRelativePath", "Public/Assets/Composite.h" },
		{ "ToolTip", "Invert the alpha channel coming out of the engine." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_MediaInputSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MediaInputSource;
	static void NewProp_bOverride_EnableSoftMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnableSoftMask;
	static void NewProp_bOverride_SoftMaskScreenPercentage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SoftMaskScreenPercentage;
	static void NewProp_bOverride_MediaInputKeyer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MediaInputKeyer;
	static void NewProp_bOverride_EnableMediaShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnableMediaShadows;
	static void NewProp_bOverride_ShadowsOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadowsOffset;
	static void NewProp_bOverride_ShadowsBlackLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadowsBlackLevel;
	static void NewProp_bOverride_ShadowsWhiteLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadowsWhiteLevel;
	static void NewProp_bOverride_ShadowsGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadowsGamma;
	static void NewProp_bOverride_ShadowsTint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadowsTint;
	static void NewProp_bOverride_EnablePlanarReflection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnablePlanarReflection;
	static void NewProp_bOverride_PlanarReflectionColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PlanarReflectionColor;
	static void NewProp_bOverride_PlanarReflectionDistortionIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PlanarReflectionDistortionIntensity;
	static void NewProp_bOverride_PlanarReflectionDistortionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PlanarReflectionDistortionOffset;
	static void NewProp_bOverride_PlanarReflectionScreenPercentage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PlanarReflectionScreenPercentage;
	static void NewProp_bOverride_BrightnessMaskGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BrightnessMaskGamma;
	static void NewProp_bOverride_MediaBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MediaBlend;
	static void NewProp_bOverride_OutputRgbEncoding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputRgbEncoding;
	static void NewProp_bOverride_OutputAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OutputAlpha;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeClassDefaults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentComposite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputSource;
	static void NewProp_bEnableSoftMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSoftMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftMaskScreenPercentage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputKeyer;
	static void NewProp_bEnableMediaShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMediaShadows;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowsOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowsBlackLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowsWhiteLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowsGamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowsTint;
	static void NewProp_bEnablePlanarReflection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePlanarReflection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarReflectionColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanarReflectionDistortionIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanarReflectionDistortionOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanarReflectionScreenPercentage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeColorGrade;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MediaBlend_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MediaBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrightnessMaskGamma;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputRgbEncoding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputRgbEncoding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputAlpha_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposite_EnableMediaInputKeyer, "EnableMediaInputKeyer" }, // 1081869017
		{ &Z_Construct_UFunction_UComposite_GetBrightnessMaskGamma, "GetBrightnessMaskGamma" }, // 660107816
		{ &Z_Construct_UFunction_UComposite_GetCompositeColorGrade, "GetCompositeColorGrade" }, // 4169888320
		{ &Z_Construct_UFunction_UComposite_GetEnableMediaShadows, "GetEnableMediaShadows" }, // 1847387711
		{ &Z_Construct_UFunction_UComposite_GetEnablePlanarReflection, "GetEnablePlanarReflection" }, // 3930355274
		{ &Z_Construct_UFunction_UComposite_GetEnableSoftMask, "GetEnableSoftMask" }, // 1521223608
		{ &Z_Construct_UFunction_UComposite_GetMediaBlend, "GetMediaBlend" }, // 2378836782
		{ &Z_Construct_UFunction_UComposite_GetMediaInputKeyer, "GetMediaInputKeyer" }, // 4218487052
		{ &Z_Construct_UFunction_UComposite_GetMediaInputSource, "GetMediaInputSource" }, // 225761195
		{ &Z_Construct_UFunction_UComposite_GetOutputAlpha, "GetOutputAlpha" }, // 1544704517
		{ &Z_Construct_UFunction_UComposite_GetOutputRgbEncoding, "GetOutputRgbEncoding" }, // 1563674606
		{ &Z_Construct_UFunction_UComposite_GetParentComposite, "GetParentComposite" }, // 2545093511
		{ &Z_Construct_UFunction_UComposite_GetPlanarReflectionColor, "GetPlanarReflectionColor" }, // 2705313247
		{ &Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionIntensity, "GetPlanarReflectionDistortionIntensity" }, // 3971444295
		{ &Z_Construct_UFunction_UComposite_GetPlanarReflectionDistortionOffset, "GetPlanarReflectionDistortionOffset" }, // 689580141
		{ &Z_Construct_UFunction_UComposite_GetPlanarReflectionScreenPercentage, "GetPlanarReflectionScreenPercentage" }, // 794975003
		{ &Z_Construct_UFunction_UComposite_GetShadowsBlackLevel, "GetShadowsBlackLevel" }, // 2213644335
		{ &Z_Construct_UFunction_UComposite_GetShadowsGamma, "GetShadowsGamma" }, // 1666485946
		{ &Z_Construct_UFunction_UComposite_GetShadowsOffset, "GetShadowsOffset" }, // 1348722296
		{ &Z_Construct_UFunction_UComposite_GetShadowsTint, "GetShadowsTint" }, // 3315190225
		{ &Z_Construct_UFunction_UComposite_GetShadowsWhiteLevel, "GetShadowsWhiteLevel" }, // 2286310658
		{ &Z_Construct_UFunction_UComposite_GetSoftMaskScreenPercentage, "GetSoftMaskScreenPercentage" }, // 395968419
		{ &Z_Construct_UFunction_UComposite_IsKeyerEnabled, "IsKeyerEnabled" }, // 272732000
		{ &Z_Construct_UFunction_UComposite_IsThisCompositeAnAncestorOf, "IsThisCompositeAnAncestorOf" }, // 2547438208
		{ &Z_Construct_UFunction_UComposite_SetBrightnessMaskGamma, "SetBrightnessMaskGamma" }, // 658187928
		{ &Z_Construct_UFunction_UComposite_SetEnableMediaShadows, "SetEnableMediaShadows" }, // 1420099164
		{ &Z_Construct_UFunction_UComposite_SetEnablePlanarReflection, "SetEnablePlanarReflection" }, // 1983818140
		{ &Z_Construct_UFunction_UComposite_SetEnableSoftMask, "SetEnableSoftMask" }, // 909690475
		{ &Z_Construct_UFunction_UComposite_SetMediaBlend, "SetMediaBlend" }, // 3182642250
		{ &Z_Construct_UFunction_UComposite_SetMediaInputKeyer, "SetMediaInputKeyer" }, // 2942347320
		{ &Z_Construct_UFunction_UComposite_SetMediaInputSource, "SetMediaInputSource" }, // 3633801766
		{ &Z_Construct_UFunction_UComposite_SetOutputAlpha, "SetOutputAlpha" }, // 1495977816
		{ &Z_Construct_UFunction_UComposite_SetOutputRgbEncoding, "SetOutputRgbEncoding" }, // 1235867307
		{ &Z_Construct_UFunction_UComposite_SetParentComposite, "SetParentComposite" }, // 2645380142
		{ &Z_Construct_UFunction_UComposite_SetPlanarReflectionColor, "SetPlanarReflectionColor" }, // 70487847
		{ &Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionIntensity, "SetPlanarReflectionDistortionIntensity" }, // 2296155384
		{ &Z_Construct_UFunction_UComposite_SetPlanarReflectionDistortionOffset, "SetPlanarReflectionDistortionOffset" }, // 390463754
		{ &Z_Construct_UFunction_UComposite_SetPlanarReflectionScreenPercentage, "SetPlanarReflectionScreenPercentage" }, // 374633730
		{ &Z_Construct_UFunction_UComposite_SetShadowsBlackLevel, "SetShadowsBlackLevel" }, // 455095918
		{ &Z_Construct_UFunction_UComposite_SetShadowsGamma, "SetShadowsGamma" }, // 653482548
		{ &Z_Construct_UFunction_UComposite_SetShadowsOffset, "SetShadowsOffset" }, // 2309353708
		{ &Z_Construct_UFunction_UComposite_SetShadowsTint, "SetShadowsTint" }, // 1881884639
		{ &Z_Construct_UFunction_UComposite_SetShadowsWhiteLevel, "SetShadowsWhiteLevel" }, // 3327796225
		{ &Z_Construct_UFunction_UComposite_SetSoftMaskScreenPercentage, "SetSoftMaskScreenPercentage" }, // 179764822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputSource_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_MediaInputSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputSource = { "bOverride_MediaInputSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MediaInputSource_MetaData), NewProp_bOverride_MediaInputSource_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableSoftMask_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_EnableSoftMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableSoftMask = { "bOverride_EnableSoftMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableSoftMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_EnableSoftMask_MetaData), NewProp_bOverride_EnableSoftMask_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_SoftMaskScreenPercentage_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_SoftMaskScreenPercentage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_SoftMaskScreenPercentage = { "bOverride_SoftMaskScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_SoftMaskScreenPercentage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SoftMaskScreenPercentage_MetaData), NewProp_bOverride_SoftMaskScreenPercentage_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputKeyer_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_MediaInputKeyer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputKeyer = { "bOverride_MediaInputKeyer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputKeyer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MediaInputKeyer_MetaData), NewProp_bOverride_MediaInputKeyer_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableMediaShadows_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_EnableMediaShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableMediaShadows = { "bOverride_EnableMediaShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableMediaShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_EnableMediaShadows_MetaData), NewProp_bOverride_EnableMediaShadows_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsOffset_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_ShadowsOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsOffset = { "bOverride_ShadowsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ShadowsOffset_MetaData), NewProp_bOverride_ShadowsOffset_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsBlackLevel_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_ShadowsBlackLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsBlackLevel = { "bOverride_ShadowsBlackLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsBlackLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ShadowsBlackLevel_MetaData), NewProp_bOverride_ShadowsBlackLevel_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsWhiteLevel_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_ShadowsWhiteLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsWhiteLevel = { "bOverride_ShadowsWhiteLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsWhiteLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ShadowsWhiteLevel_MetaData), NewProp_bOverride_ShadowsWhiteLevel_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsGamma_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_ShadowsGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsGamma = { "bOverride_ShadowsGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ShadowsGamma_MetaData), NewProp_bOverride_ShadowsGamma_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsTint_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_ShadowsTint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsTint = { "bOverride_ShadowsTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsTint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ShadowsTint_MetaData), NewProp_bOverride_ShadowsTint_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnablePlanarReflection_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_EnablePlanarReflection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnablePlanarReflection = { "bOverride_EnablePlanarReflection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnablePlanarReflection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_EnablePlanarReflection_MetaData), NewProp_bOverride_EnablePlanarReflection_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionColor_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_PlanarReflectionColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionColor = { "bOverride_PlanarReflectionColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PlanarReflectionColor_MetaData), NewProp_bOverride_PlanarReflectionColor_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionIntensity_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_PlanarReflectionDistortionIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionIntensity = { "bOverride_PlanarReflectionDistortionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PlanarReflectionDistortionIntensity_MetaData), NewProp_bOverride_PlanarReflectionDistortionIntensity_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionOffset_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_PlanarReflectionDistortionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionOffset = { "bOverride_PlanarReflectionDistortionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PlanarReflectionDistortionOffset_MetaData), NewProp_bOverride_PlanarReflectionDistortionOffset_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionScreenPercentage_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_PlanarReflectionScreenPercentage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionScreenPercentage = { "bOverride_PlanarReflectionScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionScreenPercentage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PlanarReflectionScreenPercentage_MetaData), NewProp_bOverride_PlanarReflectionScreenPercentage_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_BrightnessMaskGamma_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_BrightnessMaskGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_BrightnessMaskGamma = { "bOverride_BrightnessMaskGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_BrightnessMaskGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_BrightnessMaskGamma_MetaData), NewProp_bOverride_BrightnessMaskGamma_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaBlend_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_MediaBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaBlend = { "bOverride_MediaBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MediaBlend_MetaData), NewProp_bOverride_MediaBlend_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputRgbEncoding_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_OutputRgbEncoding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputRgbEncoding = { "bOverride_OutputRgbEncoding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputRgbEncoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_OutputRgbEncoding_MetaData), NewProp_bOverride_OutputRgbEncoding_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputAlpha_SetBit(void* Obj)
{
	((UComposite*)Obj)->bOverride_OutputAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputAlpha = { "bOverride_OutputAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_OutputAlpha_MetaData), NewProp_bOverride_OutputAlpha_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_CompositeClassDefaults = { "CompositeClassDefaults", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, CompositeClassDefaults), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeClassDefaults_MetaData), NewProp_CompositeClassDefaults_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_ParentComposite = { "ParentComposite", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, ParentComposite), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentComposite_MetaData), NewProp_ParentComposite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_MediaInputSource = { "MediaInputSource", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, MediaInputSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputSource_MetaData), NewProp_MediaInputSource_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bEnableSoftMask_SetBit(void* Obj)
{
	((UComposite*)Obj)->bEnableSoftMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bEnableSoftMask = { "bEnableSoftMask", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bEnableSoftMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSoftMask_MetaData), NewProp_bEnableSoftMask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_SoftMaskScreenPercentage = { "SoftMaskScreenPercentage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, SoftMaskScreenPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMaskScreenPercentage_MetaData), NewProp_SoftMaskScreenPercentage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_MediaInputKeyer = { "MediaInputKeyer", nullptr, (EPropertyFlags)0x00420000000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, MediaInputKeyer), Z_Construct_UClass_UCompositeKeyer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputKeyer_MetaData), NewProp_MediaInputKeyer_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bEnableMediaShadows_SetBit(void* Obj)
{
	((UComposite*)Obj)->bEnableMediaShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bEnableMediaShadows = { "bEnableMediaShadows", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bEnableMediaShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMediaShadows_MetaData), NewProp_bEnableMediaShadows_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsOffset = { "ShadowsOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, ShadowsOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsOffset_MetaData), NewProp_ShadowsOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsBlackLevel = { "ShadowsBlackLevel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, ShadowsBlackLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsBlackLevel_MetaData), NewProp_ShadowsBlackLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsWhiteLevel = { "ShadowsWhiteLevel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, ShadowsWhiteLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsWhiteLevel_MetaData), NewProp_ShadowsWhiteLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsGamma = { "ShadowsGamma", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, ShadowsGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsGamma_MetaData), NewProp_ShadowsGamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsTint = { "ShadowsTint", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, ShadowsTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsTint_MetaData), NewProp_ShadowsTint_MetaData) };
void Z_Construct_UClass_UComposite_Statics::NewProp_bEnablePlanarReflection_SetBit(void* Obj)
{
	((UComposite*)Obj)->bEnablePlanarReflection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_bEnablePlanarReflection = { "bEnablePlanarReflection", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComposite), &Z_Construct_UClass_UComposite_Statics::NewProp_bEnablePlanarReflection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePlanarReflection_MetaData), NewProp_bEnablePlanarReflection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionColor = { "PlanarReflectionColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, PlanarReflectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionColor_MetaData), NewProp_PlanarReflectionColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionDistortionIntensity = { "PlanarReflectionDistortionIntensity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, PlanarReflectionDistortionIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionDistortionIntensity_MetaData), NewProp_PlanarReflectionDistortionIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionDistortionOffset = { "PlanarReflectionDistortionOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, PlanarReflectionDistortionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionDistortionOffset_MetaData), NewProp_PlanarReflectionDistortionOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionScreenPercentage = { "PlanarReflectionScreenPercentage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, PlanarReflectionScreenPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionScreenPercentage_MetaData), NewProp_PlanarReflectionScreenPercentage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_CompositeColorGrade = { "CompositeColorGrade", nullptr, (EPropertyFlags)0x004200000208081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, CompositeColorGrade), Z_Construct_UClass_UCompositeColorGrade_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeColorGrade_MetaData), NewProp_CompositeColorGrade_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_MediaBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_MediaBlend = { "MediaBlend", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, MediaBlend), Z_Construct_UEnum_Compositor_EMediaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaBlend_MetaData), NewProp_MediaBlend_MetaData) }; // 1525429804
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_BrightnessMaskGamma = { "BrightnessMaskGamma", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, BrightnessMaskGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrightnessMaskGamma_MetaData), NewProp_BrightnessMaskGamma_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_OutputRgbEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_OutputRgbEncoding = { "OutputRgbEncoding", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, OutputRgbEncoding), Z_Construct_UEnum_Compositor_EOutputRgbEncoding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputRgbEncoding_MetaData), NewProp_OutputRgbEncoding_MetaData) }; // 2704225389
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_OutputAlpha_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComposite_Statics::NewProp_OutputAlpha = { "OutputAlpha", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComposite, OutputAlpha), Z_Construct_UEnum_Compositor_EOutputAlpha, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputAlpha_MetaData), NewProp_OutputAlpha_MetaData) }; // 539946905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableSoftMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_SoftMaskScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaInputKeyer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnableMediaShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsBlackLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsWhiteLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_ShadowsTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_EnablePlanarReflection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionDistortionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_PlanarReflectionScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_BrightnessMaskGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_MediaBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputRgbEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bOverride_OutputAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_CompositeClassDefaults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_ParentComposite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_MediaInputSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bEnableSoftMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_SoftMaskScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_MediaInputKeyer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bEnableMediaShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsBlackLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsWhiteLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_ShadowsTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_bEnablePlanarReflection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionDistortionIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionDistortionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_PlanarReflectionScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_CompositeColorGrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_MediaBlend_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_MediaBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_BrightnessMaskGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_OutputRgbEncoding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_OutputRgbEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_OutputAlpha_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposite_Statics::NewProp_OutputAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComposite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComposite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComposite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposite_Statics::ClassParams = {
	&UComposite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UComposite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UComposite_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComposite_Statics::Class_MetaDataParams), Z_Construct_UClass_UComposite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComposite()
{
	if (!Z_Registration_Info_UClass_UComposite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposite.OuterSingleton, Z_Construct_UClass_UComposite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComposite.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComposite);
UComposite::~UComposite() {}
// ********** End Class UComposite *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComposite, UComposite::StaticClass, TEXT("UComposite"), &Z_Registration_Info_UClass_UComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposite), 3035787828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h__Script_Compositor_246287762(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_Composite_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
