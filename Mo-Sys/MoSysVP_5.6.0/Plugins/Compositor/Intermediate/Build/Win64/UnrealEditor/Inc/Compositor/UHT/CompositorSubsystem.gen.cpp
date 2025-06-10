// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/CompositorSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositorSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeUpdateInterface_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeWorldData_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositorSubsystem();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositorSubsystem_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositorSubsystem Function FindOrAddCompositeWorldData ****************
struct Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics
{
	struct CompositorSubsystem_eventFindOrAddCompositeWorldData_Parms
	{
		UCompositeWorldData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventFindOrAddCompositeWorldData_Parms, ReturnValue), Z_Construct_UClass_UCompositeWorldData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "FindOrAddCompositeWorldData", Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::CompositorSubsystem_eventFindOrAddCompositeWorldData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::CompositorSubsystem_eventFindOrAddCompositeWorldData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execFindOrAddCompositeWorldData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCompositeWorldData**)Z_Param__Result=P_THIS->FindOrAddCompositeWorldData();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function FindOrAddCompositeWorldData ******************

// ********** Begin Class UCompositorSubsystem Function GetCompositeWorldData **********************
struct Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics
{
	struct CompositorSubsystem_eventGetCompositeWorldData_Parms
	{
		UCompositeWorldData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventGetCompositeWorldData_Parms, ReturnValue), Z_Construct_UClass_UCompositeWorldData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "GetCompositeWorldData", Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::CompositorSubsystem_eventGetCompositeWorldData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::CompositorSubsystem_eventGetCompositeWorldData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execGetCompositeWorldData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCompositeWorldData**)Z_Param__Result=P_THIS->GetCompositeWorldData();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function GetCompositeWorldData ************************

// ********** Begin Class UCompositorSubsystem Function GetMediaInputTextureSize *******************
struct Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics
{
	struct CompositorSubsystem_eventGetMediaInputTextureSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventGetMediaInputTextureSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "GetMediaInputTextureSize", Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::CompositorSubsystem_eventGetMediaInputTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::CompositorSubsystem_eventGetMediaInputTextureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execGetMediaInputTextureSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetMediaInputTextureSize();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function GetMediaInputTextureSize *********************

// ********** Begin Class UCompositorSubsystem Function GetSoftMaskCaptureComponent ****************
struct Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics
{
	struct CompositorSubsystem_eventGetSoftMaskCaptureComponent_Parms
	{
		USoftMaskCaptureComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventGetSoftMaskCaptureComponent_Parms, ReturnValue), Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "GetSoftMaskCaptureComponent", Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::CompositorSubsystem_eventGetSoftMaskCaptureComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::CompositorSubsystem_eventGetSoftMaskCaptureComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execGetSoftMaskCaptureComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoftMaskCaptureComponent**)Z_Param__Result=P_THIS->GetSoftMaskCaptureComponent();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function GetSoftMaskCaptureComponent ******************

// ********** Begin Class UCompositorSubsystem Function GetViewportSize ****************************
struct Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics
{
	struct CompositorSubsystem_eventGetViewportSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventGetViewportSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "GetViewportSize", Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::CompositorSubsystem_eventGetViewportSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::CompositorSubsystem_eventGetViewportSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execGetViewportSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetViewportSize();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function GetViewportSize ******************************

// ********** Begin Class UCompositorSubsystem Function GetWorldComposite **************************
struct Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics
{
	struct CompositorSubsystem_eventGetWorldComposite_Parms
	{
		UComposite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor" },
		{ "Comment", "// Returns the current Composite used in the world.\n" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "Returns the current Composite used in the world." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventGetWorldComposite_Parms, ReturnValue), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "GetWorldComposite", Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::CompositorSubsystem_eventGetWorldComposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::CompositorSubsystem_eventGetWorldComposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execGetWorldComposite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UComposite**)Z_Param__Result=P_THIS->GetWorldComposite();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function GetWorldComposite ****************************

// ********** Begin Class UCompositorSubsystem Function OnCompositeUpdate_Internal *****************
struct Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called by a Composite asset when it has changed and it is part of the current world. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "Called by a Composite asset when it has changed and it is part of the current world." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "OnCompositeUpdate_Internal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execOnCompositeUpdate_Internal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompositeUpdate_Internal();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function OnCompositeUpdate_Internal *******************

// ********** Begin Class UCompositorSubsystem Function RegisterCompositeUpdateInterface ***********
struct Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics
{
	struct CompositorSubsystem_eventRegisterCompositeUpdateInterface_Parms
	{
		TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CompositeUpdateInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::NewProp_CompositeUpdateInterface = { "CompositeUpdateInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventRegisterCompositeUpdateInterface_Parms, CompositeUpdateInterface), Z_Construct_UClass_UCompositeUpdateInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::NewProp_CompositeUpdateInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "RegisterCompositeUpdateInterface", Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::CompositorSubsystem_eventRegisterCompositeUpdateInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::CompositorSubsystem_eventRegisterCompositeUpdateInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execRegisterCompositeUpdateInterface)
{
	P_GET_TINTERFACE(ICompositeUpdateInterface,Z_Param_CompositeUpdateInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCompositeUpdateInterface(Z_Param_CompositeUpdateInterface);
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function RegisterCompositeUpdateInterface *************

// ********** Begin Class UCompositorSubsystem Function RemoveCompositeWorldData *******************
struct Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "RemoveCompositeWorldData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execRemoveCompositeWorldData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCompositeWorldData();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function RemoveCompositeWorldData *********************

// ********** Begin Class UCompositorSubsystem Function SetIsWorldCompositeEnabled *****************
struct Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics
{
	struct CompositorSubsystem_eventSetIsWorldCompositeEnabled_Parms
	{
		bool IsWorldCompositeEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "Comment", "// Mo-Sys added\n" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "Mo-Sys added" },
	};
#endif // WITH_METADATA
	static void NewProp_IsWorldCompositeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWorldCompositeEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::NewProp_IsWorldCompositeEnabled_SetBit(void* Obj)
{
	((CompositorSubsystem_eventSetIsWorldCompositeEnabled_Parms*)Obj)->IsWorldCompositeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::NewProp_IsWorldCompositeEnabled = { "IsWorldCompositeEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositorSubsystem_eventSetIsWorldCompositeEnabled_Parms), &Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::NewProp_IsWorldCompositeEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::NewProp_IsWorldCompositeEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "SetIsWorldCompositeEnabled", Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::CompositorSubsystem_eventSetIsWorldCompositeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::CompositorSubsystem_eventSetIsWorldCompositeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execSetIsWorldCompositeEnabled)
{
	P_GET_UBOOL(Z_Param_IsWorldCompositeEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsWorldCompositeEnabled(Z_Param_IsWorldCompositeEnabled);
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function SetIsWorldCompositeEnabled *******************

// ********** Begin Class UCompositorSubsystem Function SetMediaInputDefaultFallbackTexture ********
struct Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics
{
	struct CompositorSubsystem_eventSetMediaInputDefaultFallbackTexture_Parms
	{
		bool bSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "Comment", "// Mo-Sys changed\n" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "Mo-Sys changed" },
	};
#endif // WITH_METADATA
	static void NewProp_bSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::NewProp_bSet_SetBit(void* Obj)
{
	((CompositorSubsystem_eventSetMediaInputDefaultFallbackTexture_Parms*)Obj)->bSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::NewProp_bSet = { "bSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositorSubsystem_eventSetMediaInputDefaultFallbackTexture_Parms), &Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::NewProp_bSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::NewProp_bSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "SetMediaInputDefaultFallbackTexture", Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::CompositorSubsystem_eventSetMediaInputDefaultFallbackTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::CompositorSubsystem_eventSetMediaInputDefaultFallbackTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execSetMediaInputDefaultFallbackTexture)
{
	P_GET_UBOOL(Z_Param_bSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMediaInputDefaultFallbackTexture(Z_Param_bSet);
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function SetMediaInputDefaultFallbackTexture **********

// ********** Begin Class UCompositorSubsystem Function TryPlayMediaInputSource ********************
struct Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics
{
	struct CompositorSubsystem_eventTryPlayMediaInputSource_Parms
	{
		bool bForceReopen;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "CPP_Default_bForceReopen", "false" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bForceReopen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReopen;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_bForceReopen_SetBit(void* Obj)
{
	((CompositorSubsystem_eventTryPlayMediaInputSource_Parms*)Obj)->bForceReopen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_bForceReopen = { "bForceReopen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositorSubsystem_eventTryPlayMediaInputSource_Parms), &Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_bForceReopen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CompositorSubsystem_eventTryPlayMediaInputSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositorSubsystem_eventTryPlayMediaInputSource_Parms), &Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_bForceReopen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "TryPlayMediaInputSource", Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::CompositorSubsystem_eventTryPlayMediaInputSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::CompositorSubsystem_eventTryPlayMediaInputSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execTryPlayMediaInputSource)
{
	P_GET_UBOOL(Z_Param_bForceReopen);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPlayMediaInputSource(Z_Param_bForceReopen);
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function TryPlayMediaInputSource **********************

// ********** Begin Class UCompositorSubsystem Function UnregisterCompositeUpdateInterface *********
struct Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics
{
	struct CompositorSubsystem_eventUnregisterCompositeUpdateInterface_Parms
	{
		TScriptInterface<ICompositeUpdateInterface> CompositeUpdateInterface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CompositeUpdateInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::NewProp_CompositeUpdateInterface = { "CompositeUpdateInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorSubsystem_eventUnregisterCompositeUpdateInterface_Parms, CompositeUpdateInterface), Z_Construct_UClass_UCompositeUpdateInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::NewProp_CompositeUpdateInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "UnregisterCompositeUpdateInterface", Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::CompositorSubsystem_eventUnregisterCompositeUpdateInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::CompositorSubsystem_eventUnregisterCompositeUpdateInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execUnregisterCompositeUpdateInterface)
{
	P_GET_TINTERFACE(ICompositeUpdateInterface,Z_Param_CompositeUpdateInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterCompositeUpdateInterface(Z_Param_CompositeUpdateInterface);
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function UnregisterCompositeUpdateInterface ***********

// ********** Begin Class UCompositorSubsystem Function UpdateLensData *****************************
struct Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorSubsystem, nullptr, "UpdateLensData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorSubsystem::execUpdateLensData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLensData();
	P_NATIVE_END;
}
// ********** End Class UCompositorSubsystem Function UpdateLensData *******************************

// ********** Begin Class UCompositorSubsystem *****************************************************
void UCompositorSubsystem::StaticRegisterNativesUCompositorSubsystem()
{
	UClass* Class = UCompositorSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindOrAddCompositeWorldData", &UCompositorSubsystem::execFindOrAddCompositeWorldData },
		{ "GetCompositeWorldData", &UCompositorSubsystem::execGetCompositeWorldData },
		{ "GetMediaInputTextureSize", &UCompositorSubsystem::execGetMediaInputTextureSize },
		{ "GetSoftMaskCaptureComponent", &UCompositorSubsystem::execGetSoftMaskCaptureComponent },
		{ "GetViewportSize", &UCompositorSubsystem::execGetViewportSize },
		{ "GetWorldComposite", &UCompositorSubsystem::execGetWorldComposite },
		{ "OnCompositeUpdate_Internal", &UCompositorSubsystem::execOnCompositeUpdate_Internal },
		{ "RegisterCompositeUpdateInterface", &UCompositorSubsystem::execRegisterCompositeUpdateInterface },
		{ "RemoveCompositeWorldData", &UCompositorSubsystem::execRemoveCompositeWorldData },
		{ "SetIsWorldCompositeEnabled", &UCompositorSubsystem::execSetIsWorldCompositeEnabled },
		{ "SetMediaInputDefaultFallbackTexture", &UCompositorSubsystem::execSetMediaInputDefaultFallbackTexture },
		{ "TryPlayMediaInputSource", &UCompositorSubsystem::execTryPlayMediaInputSource },
		{ "UnregisterCompositeUpdateInterface", &UCompositorSubsystem::execUnregisterCompositeUpdateInterface },
		{ "UpdateLensData", &UCompositorSubsystem::execUpdateLensData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositorSubsystem;
UClass* UCompositorSubsystem::GetPrivateStaticClass()
{
	using TClass = UCompositorSubsystem;
	if (!Z_Registration_Info_UClass_UCompositorSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositorSubsystem"),
			Z_Registration_Info_UClass_UCompositorSubsystem.InnerSingleton,
			StaticRegisterNativesUCompositorSubsystem,
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
	return Z_Registration_Info_UClass_UCompositorSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositorSubsystem_NoRegister()
{
	return UCompositorSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The subsystem for managing the world composite data.\n */" },
		{ "IncludePath", "Subsystems/CompositorSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The subsystem for managing the world composite data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMediaInputDefaultFallbackTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Input" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputDefaultFallbackTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Input" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Input" },
		{ "Comment", "/** The media player used to play the media input source. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The media player used to play the media input source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media Input" },
		{ "Comment", "/** The media texture used by the media input player. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The media texture used by the media input player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMaskCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputKeyedRenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media CompositeKeyer" },
		{ "Comment", "/** The render target the CompositeKeyer is drawing to. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The render target the CompositeKeyer is drawing to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputCompositeKeyerDisabledFallbackMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media CompositeKeyer" },
		{ "Comment", "/** The fallback for not having a CompositeKeyer. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The fallback for not having a CompositeKeyer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputCompositeKeyerDisabledFallbackMID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Media CompositeKeyer" },
		{ "Comment", "/** The default MID for when there is no keyer avaialble. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The default MID for when there is no keyer avaialble." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFovWithoutOverscan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The default undistort texture used, is just black so doesn't do anything. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The default undistort texture used, is just black so doesn't do anything." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOverscanFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The overscan factor used by the live link lens distortion. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The overscan factor used by the live link lens distortion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUndistortTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The default undistort texture used, is just black so doesn't do anything. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The default undistort texture used, is just black so doesn't do anything." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUndistortTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The undistort texture coming from live link. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The undistort texture coming from live link." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDistortTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The distort texture coming from live link. (?) */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The distort texture coming from live link. (?)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputUndistortedTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The render target the lens undistort is drawing to. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The render target the lens undistort is drawing to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputUndistortMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The fallback for not having lens data. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The fallback for not having lens data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputUndistortMID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The compositor dynamic post processing material injected after the tone mapper. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The compositor dynamic post processing material injected after the tone mapper." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositePlanarReflectionRenderTarget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lens Data" },
		{ "Comment", "/** The render target of the active composite planar reflection. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The render target of the active composite planar reflection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeUpdateInterfaceArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Compositor|Subsystem" },
		{ "Comment", "/** All the Composite Update Interfaces registered in the world. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "All the Composite Update Interfaces registered in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeWorldData_MetaData[] = {
		{ "Comment", "/** The Compositor World Settings Asset User Data which contains the Composite used in this world. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "The Compositor World Settings Asset User Data which contains the Composite used in this world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositorMaterialParameterCollection_MetaData[] = {
		{ "Comment", "/** Global material parameters for the Compositor. */" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
		{ "ToolTip", "Global material parameters for the Compositor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AfterTonemappingMaterialDynamic_MetaData[] = {
		{ "Category", "Compositor|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/CompositorSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowMediaInputDefaultFallbackTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMediaInputDefaultFallbackTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputDefaultFallbackTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoftMaskCaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputKeyedRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputCompositeKeyerDisabledFallbackMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputCompositeKeyerDisabledFallbackMID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFovWithoutOverscan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraOverscanFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultUndistortTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentUndistortTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDistortTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputUndistortedTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputUndistortMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputUndistortMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositePlanarReflectionRenderTarget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CompositeUpdateInterfaceArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompositeUpdateInterfaceArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeWorldData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositorMaterialParameterCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AfterTonemappingMaterialDynamic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlanarReflectionTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositorSubsystem_FindOrAddCompositeWorldData, "FindOrAddCompositeWorldData" }, // 2140840238
		{ &Z_Construct_UFunction_UCompositorSubsystem_GetCompositeWorldData, "GetCompositeWorldData" }, // 2457070068
		{ &Z_Construct_UFunction_UCompositorSubsystem_GetMediaInputTextureSize, "GetMediaInputTextureSize" }, // 2834606139
		{ &Z_Construct_UFunction_UCompositorSubsystem_GetSoftMaskCaptureComponent, "GetSoftMaskCaptureComponent" }, // 1557961134
		{ &Z_Construct_UFunction_UCompositorSubsystem_GetViewportSize, "GetViewportSize" }, // 2092195678
		{ &Z_Construct_UFunction_UCompositorSubsystem_GetWorldComposite, "GetWorldComposite" }, // 1994352758
		{ &Z_Construct_UFunction_UCompositorSubsystem_OnCompositeUpdate_Internal, "OnCompositeUpdate_Internal" }, // 3958790304
		{ &Z_Construct_UFunction_UCompositorSubsystem_RegisterCompositeUpdateInterface, "RegisterCompositeUpdateInterface" }, // 3654591702
		{ &Z_Construct_UFunction_UCompositorSubsystem_RemoveCompositeWorldData, "RemoveCompositeWorldData" }, // 189511999
		{ &Z_Construct_UFunction_UCompositorSubsystem_SetIsWorldCompositeEnabled, "SetIsWorldCompositeEnabled" }, // 3409586847
		{ &Z_Construct_UFunction_UCompositorSubsystem_SetMediaInputDefaultFallbackTexture, "SetMediaInputDefaultFallbackTexture" }, // 3349924462
		{ &Z_Construct_UFunction_UCompositorSubsystem_TryPlayMediaInputSource, "TryPlayMediaInputSource" }, // 3937079372
		{ &Z_Construct_UFunction_UCompositorSubsystem_UnregisterCompositeUpdateInterface, "UnregisterCompositeUpdateInterface" }, // 4177925551
		{ &Z_Construct_UFunction_UCompositorSubsystem_UpdateLensData, "UpdateLensData" }, // 2916452646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_bShowMediaInputDefaultFallbackTexture_SetBit(void* Obj)
{
	((UCompositorSubsystem*)Obj)->bShowMediaInputDefaultFallbackTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_bShowMediaInputDefaultFallbackTexture = { "bShowMediaInputDefaultFallbackTexture", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositorSubsystem), &Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_bShowMediaInputDefaultFallbackTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMediaInputDefaultFallbackTexture_MetaData), NewProp_bShowMediaInputDefaultFallbackTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputDefaultFallbackTexture = { "MediaInputDefaultFallbackTexture", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputDefaultFallbackTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputDefaultFallbackTexture_MetaData), NewProp_MediaInputDefaultFallbackTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputPlayer = { "MediaInputPlayer", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputPlayer_MetaData), NewProp_MediaInputPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputTexture = { "MediaInputTexture", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputTexture_MetaData), NewProp_MediaInputTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_SoftMaskCaptureComponent = { "SoftMaskCaptureComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, SoftMaskCaptureComponent), Z_Construct_UClass_USoftMaskCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMaskCaptureComponent_MetaData), NewProp_SoftMaskCaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputKeyedRenderTarget = { "MediaInputKeyedRenderTarget", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputKeyedRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputKeyedRenderTarget_MetaData), NewProp_MediaInputKeyedRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputCompositeKeyerDisabledFallbackMaterial = { "MediaInputCompositeKeyerDisabledFallbackMaterial", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputCompositeKeyerDisabledFallbackMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputCompositeKeyerDisabledFallbackMaterial_MetaData), NewProp_MediaInputCompositeKeyerDisabledFallbackMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputCompositeKeyerDisabledFallbackMID = { "MediaInputCompositeKeyerDisabledFallbackMID", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputCompositeKeyerDisabledFallbackMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputCompositeKeyerDisabledFallbackMID_MetaData), NewProp_MediaInputCompositeKeyerDisabledFallbackMID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CameraFovWithoutOverscan = { "CameraFovWithoutOverscan", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CameraFovWithoutOverscan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFovWithoutOverscan_MetaData), NewProp_CameraFovWithoutOverscan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CameraOverscanFactor = { "CameraOverscanFactor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CameraOverscanFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOverscanFactor_MetaData), NewProp_CameraOverscanFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_DefaultUndistortTexture = { "DefaultUndistortTexture", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, DefaultUndistortTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUndistortTexture_MetaData), NewProp_DefaultUndistortTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CurrentUndistortTexture = { "CurrentUndistortTexture", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CurrentUndistortTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUndistortTexture_MetaData), NewProp_CurrentUndistortTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CurrentDistortTexture = { "CurrentDistortTexture", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CurrentDistortTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDistortTexture_MetaData), NewProp_CurrentDistortTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputUndistortedTexture = { "MediaInputUndistortedTexture", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputUndistortedTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputUndistortedTexture_MetaData), NewProp_MediaInputUndistortedTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputUndistortMaterial = { "MediaInputUndistortMaterial", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputUndistortMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputUndistortMaterial_MetaData), NewProp_MediaInputUndistortMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputUndistortMID = { "MediaInputUndistortMID", nullptr, (EPropertyFlags)0x0040000000022015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, MediaInputUndistortMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputUndistortMID_MetaData), NewProp_MediaInputUndistortMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositePlanarReflectionRenderTarget = { "CompositePlanarReflectionRenderTarget", nullptr, (EPropertyFlags)0x0040040000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CompositePlanarReflectionRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositePlanarReflectionRenderTarget_MetaData), NewProp_CompositePlanarReflectionRenderTarget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositeUpdateInterfaceArray_Inner = { "CompositeUpdateInterfaceArray", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCompositeUpdateInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositeUpdateInterfaceArray = { "CompositeUpdateInterfaceArray", nullptr, (EPropertyFlags)0x0044000000022015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CompositeUpdateInterfaceArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeUpdateInterfaceArray_MetaData), NewProp_CompositeUpdateInterfaceArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositeWorldData = { "CompositeWorldData", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CompositeWorldData), Z_Construct_UClass_UCompositeWorldData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeWorldData_MetaData), NewProp_CompositeWorldData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositorMaterialParameterCollection = { "CompositorMaterialParameterCollection", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, CompositorMaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositorMaterialParameterCollection_MetaData), NewProp_CompositorMaterialParameterCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_AfterTonemappingMaterialDynamic = { "AfterTonemappingMaterialDynamic", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, AfterTonemappingMaterialDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AfterTonemappingMaterialDynamic_MetaData), NewProp_AfterTonemappingMaterialDynamic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_PlanarReflectionTexture = { "PlanarReflectionTexture", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositorSubsystem, PlanarReflectionTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionTexture_MetaData), NewProp_PlanarReflectionTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositorSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_bShowMediaInputDefaultFallbackTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputDefaultFallbackTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_SoftMaskCaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputKeyedRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputCompositeKeyerDisabledFallbackMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputCompositeKeyerDisabledFallbackMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CameraFovWithoutOverscan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CameraOverscanFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_DefaultUndistortTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CurrentUndistortTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CurrentDistortTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputUndistortedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputUndistortMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_MediaInputUndistortMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositePlanarReflectionRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositeUpdateInterfaceArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositeUpdateInterfaceArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositeWorldData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_CompositorMaterialParameterCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_AfterTonemappingMaterialDynamic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositorSubsystem_Statics::NewProp_PlanarReflectionTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositorSubsystem_Statics::ClassParams = {
	&UCompositorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCompositorSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositorSubsystem()
{
	if (!Z_Registration_Info_UClass_UCompositorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositorSubsystem.OuterSingleton, Z_Construct_UClass_UCompositorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositorSubsystem.OuterSingleton;
}
UCompositorSubsystem::UCompositorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositorSubsystem);
UCompositorSubsystem::~UCompositorSubsystem() {}
// ********** End Class UCompositorSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositorSubsystem, UCompositorSubsystem::StaticClass, TEXT("UCompositorSubsystem"), &Z_Registration_Info_UClass_UCompositorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositorSubsystem), 2194593093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h__Script_Compositor_2033677285(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Subsystems_CompositorSubsystem_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
