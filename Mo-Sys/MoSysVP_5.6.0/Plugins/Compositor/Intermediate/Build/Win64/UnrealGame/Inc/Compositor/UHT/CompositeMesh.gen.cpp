// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/CompositeMesh.h"
#include "Engine/EngineTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeMesh() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_ACompositeMesh();
COMPOSITOR_API UClass* Z_Construct_UClass_ACompositeMesh_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeUpdateInterface_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACompositeMesh Function AssignMaterialsToStaticMesh **********************
struct Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "AssignMaterialsToStaticMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execAssignMaterialsToStaticMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignMaterialsToStaticMesh();
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function AssignMaterialsToStaticMesh ************************

// ********** Begin Class ACompositeMesh Function InitializeMaterialData ***************************
struct Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Created all the material instances and initializes the values. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Created all the material instances and initializes the values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "InitializeMaterialData", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execInitializeMaterialData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMaterialData();
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function InitializeMaterialData *****************************

// ********** Begin Class ACompositeMesh Function InitializeUserProperties *************************
struct Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "InitializeUserProperties", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execInitializeUserProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeUserProperties();
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function InitializeUserProperties ***************************

// ********** Begin Class ACompositeMesh Function RegisterCompositeMesh ****************************
struct Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "RegisterCompositeMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execRegisterCompositeMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCompositeMesh();
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function RegisterCompositeMesh ******************************

// ********** Begin Class ACompositeMesh Function SetAffectDistanceFieldLighting *******************
struct Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics
{
	struct CompositeMesh_eventSetAffectDistanceFieldLighting_Parms
	{
		bool bNewAffectDistanceFieldLighting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewAffectDistanceFieldLighting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAffectDistanceFieldLighting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::NewProp_bNewAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((CompositeMesh_eventSetAffectDistanceFieldLighting_Parms*)Obj)->bNewAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::NewProp_bNewAffectDistanceFieldLighting = { "bNewAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::NewProp_bNewAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewAffectDistanceFieldLighting_MetaData), NewProp_bNewAffectDistanceFieldLighting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::NewProp_bNewAffectDistanceFieldLighting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetAffectDistanceFieldLighting", Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::CompositeMesh_eventSetAffectDistanceFieldLighting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::CompositeMesh_eventSetAffectDistanceFieldLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetAffectDistanceFieldLighting)
{
	P_GET_UBOOL(Z_Param_bNewAffectDistanceFieldLighting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAffectDistanceFieldLighting(Z_Param_bNewAffectDistanceFieldLighting);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetAffectDistanceFieldLighting *********************

// ********** Begin Class ACompositeMesh Function SetAlignNormalsWithAtmosphereLight ***************
struct Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics
{
	struct CompositeMesh_eventSetAlignNormalsWithAtmosphereLight_Parms
	{
		bool bNewAlignNormalsWithAtmosphereLight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewAlignNormalsWithAtmosphereLight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewAlignNormalsWithAtmosphereLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAlignNormalsWithAtmosphereLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::NewProp_bNewAlignNormalsWithAtmosphereLight_SetBit(void* Obj)
{
	((CompositeMesh_eventSetAlignNormalsWithAtmosphereLight_Parms*)Obj)->bNewAlignNormalsWithAtmosphereLight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::NewProp_bNewAlignNormalsWithAtmosphereLight = { "bNewAlignNormalsWithAtmosphereLight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetAlignNormalsWithAtmosphereLight_Parms), &Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::NewProp_bNewAlignNormalsWithAtmosphereLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewAlignNormalsWithAtmosphereLight_MetaData), NewProp_bNewAlignNormalsWithAtmosphereLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::NewProp_bNewAlignNormalsWithAtmosphereLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetAlignNormalsWithAtmosphereLight", Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::CompositeMesh_eventSetAlignNormalsWithAtmosphereLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::CompositeMesh_eventSetAlignNormalsWithAtmosphereLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetAlignNormalsWithAtmosphereLight)
{
	P_GET_UBOOL(Z_Param_bNewAlignNormalsWithAtmosphereLight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlignNormalsWithAtmosphereLight(Z_Param_bNewAlignNormalsWithAtmosphereLight);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetAlignNormalsWithAtmosphereLight *****************

// ********** Begin Class ACompositeMesh Function SetBypassDepthOfField ****************************
struct Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics
{
	struct CompositeMesh_eventSetBypassDepthOfField_Parms
	{
		bool bNewBypassDepthOfField;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewBypassDepthOfField_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewBypassDepthOfField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewBypassDepthOfField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::NewProp_bNewBypassDepthOfField_SetBit(void* Obj)
{
	((CompositeMesh_eventSetBypassDepthOfField_Parms*)Obj)->bNewBypassDepthOfField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::NewProp_bNewBypassDepthOfField = { "bNewBypassDepthOfField", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetBypassDepthOfField_Parms), &Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::NewProp_bNewBypassDepthOfField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewBypassDepthOfField_MetaData), NewProp_bNewBypassDepthOfField_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::NewProp_bNewBypassDepthOfField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetBypassDepthOfField", Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::CompositeMesh_eventSetBypassDepthOfField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::CompositeMesh_eventSetBypassDepthOfField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetBypassDepthOfField)
{
	P_GET_UBOOL(Z_Param_bNewBypassDepthOfField);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBypassDepthOfField(Z_Param_bNewBypassDepthOfField);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetBypassDepthOfField ******************************

// ********** Begin Class ACompositeMesh Function SetCastShadows ***********************************
struct Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics
{
	struct CompositeMesh_eventSetCastShadows_Parms
	{
		bool bNewCastShadows;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewCastShadows_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewCastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCastShadows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::NewProp_bNewCastShadows_SetBit(void* Obj)
{
	((CompositeMesh_eventSetCastShadows_Parms*)Obj)->bNewCastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::NewProp_bNewCastShadows = { "bNewCastShadows", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetCastShadows_Parms), &Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::NewProp_bNewCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewCastShadows_MetaData), NewProp_bNewCastShadows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::NewProp_bNewCastShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetCastShadows", Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::CompositeMesh_eventSetCastShadows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::CompositeMesh_eventSetCastShadows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetCastShadows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetCastShadows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetCastShadows)
{
	P_GET_UBOOL(Z_Param_bNewCastShadows);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastShadows(Z_Param_bNewCastShadows);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetCastShadows *************************************

// ********** Begin Class ACompositeMesh Function SetIsTwoSided ************************************
struct Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics
{
	struct CompositeMesh_eventSetIsTwoSided_Parms
	{
		bool bNewIsTwoSided;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewIsTwoSided_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsTwoSided;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::NewProp_bNewIsTwoSided_SetBit(void* Obj)
{
	((CompositeMesh_eventSetIsTwoSided_Parms*)Obj)->bNewIsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::NewProp_bNewIsTwoSided = { "bNewIsTwoSided", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetIsTwoSided_Parms), &Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::NewProp_bNewIsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewIsTwoSided_MetaData), NewProp_bNewIsTwoSided_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::NewProp_bNewIsTwoSided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetIsTwoSided", Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::CompositeMesh_eventSetIsTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::CompositeMesh_eventSetIsTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetIsTwoSided)
{
	P_GET_UBOOL(Z_Param_bNewIsTwoSided);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsTwoSided(Z_Param_bNewIsTwoSided);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetIsTwoSided **************************************

// ********** Begin Class ACompositeMesh Function SetLightingChannels ******************************
struct Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics
{
	struct CompositeMesh_eventSetLightingChannels_Parms
	{
		bool bChannel0;
		bool bChannel1;
		bool bChannel2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChannel0_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChannel1_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChannel2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bChannel0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel0;
	static void NewProp_bChannel1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel1;
	static void NewProp_bChannel2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel0_SetBit(void* Obj)
{
	((CompositeMesh_eventSetLightingChannels_Parms*)Obj)->bChannel0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel0 = { "bChannel0", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChannel0_MetaData), NewProp_bChannel0_MetaData) };
void Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel1_SetBit(void* Obj)
{
	((CompositeMesh_eventSetLightingChannels_Parms*)Obj)->bChannel1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel1 = { "bChannel1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChannel1_MetaData), NewProp_bChannel1_MetaData) };
void Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel2_SetBit(void* Obj)
{
	((CompositeMesh_eventSetLightingChannels_Parms*)Obj)->bChannel2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel2 = { "bChannel2", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChannel2_MetaData), NewProp_bChannel2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::NewProp_bChannel2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetLightingChannels", Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::CompositeMesh_eventSetLightingChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::CompositeMesh_eventSetLightingChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetLightingChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetLightingChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetLightingChannels)
{
	P_GET_UBOOL(Z_Param_bChannel0);
	P_GET_UBOOL(Z_Param_bChannel1);
	P_GET_UBOOL(Z_Param_bChannel2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightingChannels(Z_Param_bChannel0,Z_Param_bChannel1,Z_Param_bChannel2);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetLightingChannels ********************************

// ********** Begin Class ACompositeMesh Function SetPlanarReflectionBackgroundOcclusion ***********
struct Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics
{
	struct CompositeMesh_eventSetPlanarReflectionBackgroundOcclusion_Parms
	{
		float NewPlanarReflectionBackgroundOcclusion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlanarReflectionBackgroundOcclusion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlanarReflectionBackgroundOcclusion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::NewProp_NewPlanarReflectionBackgroundOcclusion = { "NewPlanarReflectionBackgroundOcclusion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeMesh_eventSetPlanarReflectionBackgroundOcclusion_Parms, NewPlanarReflectionBackgroundOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlanarReflectionBackgroundOcclusion_MetaData), NewProp_NewPlanarReflectionBackgroundOcclusion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::NewProp_NewPlanarReflectionBackgroundOcclusion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetPlanarReflectionBackgroundOcclusion", Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::CompositeMesh_eventSetPlanarReflectionBackgroundOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::CompositeMesh_eventSetPlanarReflectionBackgroundOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetPlanarReflectionBackgroundOcclusion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlanarReflectionBackgroundOcclusion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarReflectionBackgroundOcclusion(Z_Param_NewPlanarReflectionBackgroundOcclusion);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetPlanarReflectionBackgroundOcclusion *************

// ********** Begin Class ACompositeMesh Function SetPlanarReflectionColorIntensity ****************
struct Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics
{
	struct CompositeMesh_eventSetPlanarReflectionColorIntensity_Parms
	{
		float NewPlanarReflectionColorIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlanarReflectionColorIntensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlanarReflectionColorIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::NewProp_NewPlanarReflectionColorIntensity = { "NewPlanarReflectionColorIntensity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeMesh_eventSetPlanarReflectionColorIntensity_Parms, NewPlanarReflectionColorIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlanarReflectionColorIntensity_MetaData), NewProp_NewPlanarReflectionColorIntensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::NewProp_NewPlanarReflectionColorIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetPlanarReflectionColorIntensity", Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::CompositeMesh_eventSetPlanarReflectionColorIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::CompositeMesh_eventSetPlanarReflectionColorIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetPlanarReflectionColorIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlanarReflectionColorIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlanarReflectionColorIntensity(Z_Param_NewPlanarReflectionColorIntensity);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetPlanarReflectionColorIntensity ******************

// ********** Begin Class ACompositeMesh Function SetRayTracedBackfaceColor ************************
struct Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics
{
	struct CompositeMesh_eventSetRayTracedBackfaceColor_Parms
	{
		FLinearColor NewRayTracedBackfaceColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRayTracedBackfaceColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRayTracedBackfaceColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::NewProp_NewRayTracedBackfaceColor = { "NewRayTracedBackfaceColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeMesh_eventSetRayTracedBackfaceColor_Parms, NewRayTracedBackfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRayTracedBackfaceColor_MetaData), NewProp_NewRayTracedBackfaceColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::NewProp_NewRayTracedBackfaceColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetRayTracedBackfaceColor", Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::CompositeMesh_eventSetRayTracedBackfaceColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::CompositeMesh_eventSetRayTracedBackfaceColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetRayTracedBackfaceColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewRayTracedBackfaceColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRayTracedBackfaceColor(Z_Param_NewRayTracedBackfaceColor);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetRayTracedBackfaceColor **************************

// ********** Begin Class ACompositeMesh Function SetRayTracedOutOfFrustumColor ********************
struct Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics
{
	struct CompositeMesh_eventSetRayTracedOutOfFrustumColor_Parms
	{
		FLinearColor NewRayTracedOutOfFrustumColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRayTracedOutOfFrustumColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRayTracedOutOfFrustumColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::NewProp_NewRayTracedOutOfFrustumColor = { "NewRayTracedOutOfFrustumColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeMesh_eventSetRayTracedOutOfFrustumColor_Parms, NewRayTracedOutOfFrustumColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRayTracedOutOfFrustumColor_MetaData), NewProp_NewRayTracedOutOfFrustumColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::NewProp_NewRayTracedOutOfFrustumColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetRayTracedOutOfFrustumColor", Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::CompositeMesh_eventSetRayTracedOutOfFrustumColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::CompositeMesh_eventSetRayTracedOutOfFrustumColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetRayTracedOutOfFrustumColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewRayTracedOutOfFrustumColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRayTracedOutOfFrustumColor(Z_Param_NewRayTracedOutOfFrustumColor);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetRayTracedOutOfFrustumColor **********************

// ********** Begin Class ACompositeMesh Function SetReceiveShadowsIntensity ***********************
struct Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics
{
	struct CompositeMesh_eventSetReceiveShadowsIntensity_Parms
	{
		float NewReceiveShadowsIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewReceiveShadowsIntensity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewReceiveShadowsIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::NewProp_NewReceiveShadowsIntensity = { "NewReceiveShadowsIntensity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeMesh_eventSetReceiveShadowsIntensity_Parms, NewReceiveShadowsIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewReceiveShadowsIntensity_MetaData), NewProp_NewReceiveShadowsIntensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::NewProp_NewReceiveShadowsIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetReceiveShadowsIntensity", Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::CompositeMesh_eventSetReceiveShadowsIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::CompositeMesh_eventSetReceiveShadowsIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetReceiveShadowsIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewReceiveShadowsIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReceiveShadowsIntensity(Z_Param_NewReceiveShadowsIntensity);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetReceiveShadowsIntensity *************************

// ********** Begin Class ACompositeMesh Function SetRenderSoftMask ********************************
struct Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics
{
	struct CompositeMesh_eventSetRenderSoftMask_Parms
	{
		bool bNewRenderSoftMask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewRenderSoftMask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewRenderSoftMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRenderSoftMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::NewProp_bNewRenderSoftMask_SetBit(void* Obj)
{
	((CompositeMesh_eventSetRenderSoftMask_Parms*)Obj)->bNewRenderSoftMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::NewProp_bNewRenderSoftMask = { "bNewRenderSoftMask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeMesh_eventSetRenderSoftMask_Parms), &Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::NewProp_bNewRenderSoftMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewRenderSoftMask_MetaData), NewProp_bNewRenderSoftMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::NewProp_bNewRenderSoftMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetRenderSoftMask", Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::CompositeMesh_eventSetRenderSoftMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::CompositeMesh_eventSetRenderSoftMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetRenderSoftMask)
{
	P_GET_UBOOL(Z_Param_bNewRenderSoftMask);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderSoftMask(Z_Param_bNewRenderSoftMask);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetRenderSoftMask **********************************

// ********** Begin Class ACompositeMesh Function SetStaticMesh ************************************
struct Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics
{
	struct CompositeMesh_eventSetStaticMesh_Parms
	{
		UStaticMesh* NewStaticMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::NewProp_NewStaticMesh = { "NewStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeMesh_eventSetStaticMesh_Parms, NewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::NewProp_NewStaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "SetStaticMesh", Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::CompositeMesh_eventSetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::CompositeMesh_eventSetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACompositeMesh_SetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_SetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execSetStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_NewStaticMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStaticMesh(Z_Param_NewStaticMesh);
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function SetStaticMesh **************************************

// ********** Begin Class ACompositeMesh Function UnregisterCompositeMesh **************************
struct Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "UnregisterCompositeMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execUnregisterCompositeMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterCompositeMesh();
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function UnregisterCompositeMesh ****************************

// ********** Begin Class ACompositeMesh Function UpdateStencilValues ******************************
struct Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACompositeMesh, nullptr, "UpdateStencilValues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACompositeMesh::execUpdateStencilValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStencilValues();
	P_NATIVE_END;
}
// ********** End Class ACompositeMesh Function UpdateStencilValues ********************************

// ********** Begin Class ACompositeMesh ***********************************************************
void ACompositeMesh::StaticRegisterNativesACompositeMesh()
{
	UClass* Class = ACompositeMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignMaterialsToStaticMesh", &ACompositeMesh::execAssignMaterialsToStaticMesh },
		{ "InitializeMaterialData", &ACompositeMesh::execInitializeMaterialData },
		{ "InitializeUserProperties", &ACompositeMesh::execInitializeUserProperties },
		{ "RegisterCompositeMesh", &ACompositeMesh::execRegisterCompositeMesh },
		{ "SetAffectDistanceFieldLighting", &ACompositeMesh::execSetAffectDistanceFieldLighting },
		{ "SetAlignNormalsWithAtmosphereLight", &ACompositeMesh::execSetAlignNormalsWithAtmosphereLight },
		{ "SetBypassDepthOfField", &ACompositeMesh::execSetBypassDepthOfField },
		{ "SetCastShadows", &ACompositeMesh::execSetCastShadows },
		{ "SetIsTwoSided", &ACompositeMesh::execSetIsTwoSided },
		{ "SetLightingChannels", &ACompositeMesh::execSetLightingChannels },
		{ "SetPlanarReflectionBackgroundOcclusion", &ACompositeMesh::execSetPlanarReflectionBackgroundOcclusion },
		{ "SetPlanarReflectionColorIntensity", &ACompositeMesh::execSetPlanarReflectionColorIntensity },
		{ "SetRayTracedBackfaceColor", &ACompositeMesh::execSetRayTracedBackfaceColor },
		{ "SetRayTracedOutOfFrustumColor", &ACompositeMesh::execSetRayTracedOutOfFrustumColor },
		{ "SetReceiveShadowsIntensity", &ACompositeMesh::execSetReceiveShadowsIntensity },
		{ "SetRenderSoftMask", &ACompositeMesh::execSetRenderSoftMask },
		{ "SetStaticMesh", &ACompositeMesh::execSetStaticMesh },
		{ "UnregisterCompositeMesh", &ACompositeMesh::execUnregisterCompositeMesh },
		{ "UpdateStencilValues", &ACompositeMesh::execUpdateStencilValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACompositeMesh;
UClass* ACompositeMesh::GetPrivateStaticClass()
{
	using TClass = ACompositeMesh;
	if (!Z_Registration_Info_UClass_ACompositeMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeMesh"),
			Z_Registration_Info_UClass_ACompositeMesh.InnerSingleton,
			StaticRegisterNativesACompositeMesh,
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
	return Z_Registration_Info_UClass_ACompositeMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_ACompositeMesh_NoRegister()
{
	return ACompositeMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACompositeMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Replication Input Actor Physics Collision Activation Cooking Navigation VirtualTexture AssetUserData MaterialParameters HLOD LOD Mobile Materials" },
		{ "IncludePath", "Actors/CompositeMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMaskMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMaskComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueMID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilMID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentMID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMaskMID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite Mesh" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetStaticMesh" },
		{ "Category", "Mesh" },
		{ "Comment", "/** The static mesh on which the composite is applied. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "The static mesh on which the composite is applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBypassDepthOfField_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetBypassDepthOfField" },
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 * Bypass the depth of field by projecting the vertices at the focus distance of the camera.\n\x09 * Should only be necessary when you are keying and the silhouette of your talent is affected by the depth of field.\n\x09 * The mesh can't be projected closer than the near clipping plane.\n\x09 * If your focus distance plane clips with foreground elements make sure to manually assign foreground stencils to those actors like so:\n\x09 * Right Click on Actor -> Scripted Actions -> Choose either Opaque or Translucent forgeround.\n\x09 * Not recommended to use in a live environment due to the nasty side effects it can have with foreground elements.\n\x09 * If your focus distance is in front of a foreground mesh the depth of field will look incorrect, hard edges around the foreground mesh even when it is out of focus.\n\x09 * So when this is enabled always make sure your focus distance is in between your foreground mesh and your composite mesh.\n\x09 * If your focus is further than you composite mesh it might still show artifacts. To completely get rid of those artifacts you can hide the Opaque Component which will cause issues with refraction and you won't have support for reflections and shadows on the mesh.\n\x09 */" },
		{ "DisplayName", "Bypass Depth of Field (unsafe)" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Bypass the depth of field by projecting the vertices at the focus distance of the camera.\nShould only be necessary when you are keying and the silhouette of your talent is affected by the depth of field.\nThe mesh can't be projected closer than the near clipping plane.\nIf your focus distance plane clips with foreground elements make sure to manually assign foreground stencils to those actors like so:\nRight Click on Actor -> Scripted Actions -> Choose either Opaque or Translucent forgeround.\nNot recommended to use in a live environment due to the nasty side effects it can have with foreground elements.\nIf your focus distance is in front of a foreground mesh the depth of field will look incorrect, hard edges around the foreground mesh even when it is out of focus.\nSo when this is enabled always make sure your focus distance is in between your foreground mesh and your composite mesh.\nIf your focus is further than you composite mesh it might still show artifacts. To completely get rid of those artifacts you can hide the Opaque Component which will cause issues with refraction and you won't have support for reflections and shadows on the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Channels that this component should be in.  Lights with matching channels will affect the component.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Channels that this component should be in.  Lights with matching channels will affect the component.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetCastShadows" },
		{ "Category", "Shadows" },
		{ "Comment", "/** Does this actor casts shadows. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Does this actor casts shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetAffectDistanceFieldLighting" },
		{ "Category", "Shadows" },
		{ "Comment", "/** Does this actor affect distance field lighting. */" },
		{ "EditCondition", "bCastShadows" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Does this actor affect distance field lighting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveShadowsIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetReceiveShadowsIntensity" },
		{ "Category", "Shadows" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How visible the shadows are on the media. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "How visible the shadows are on the media." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionColorIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetPlanarReflectionColorIntensity" },
		{ "Category", "Planar Reflection" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09\x09The intensity of the color itself over the media. 1 = Full color, 0 = black.\n\x09\x09Setting PlanarReflectionColorIntensity to 1 and PlanarReflectionMediaSuppression to 0 equals an additive reflection.\n\x09\x09Setting both PlanarReflectionColorIntensity and PlanarReflectionMediaSuppression to 1 equals an alpha blended reflection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "The intensity of the color itself over the media. 1 = Full color, 0 = black.\nSetting PlanarReflectionColorIntensity to 1 and PlanarReflectionMediaSuppression to 0 equals an additive reflection.\nSetting both PlanarReflectionColorIntensity and PlanarReflectionMediaSuppression to 1 equals an alpha blended reflection." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionBackgroundOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetPlanarReflectionBackgroundOcclusion" },
		{ "Category", "Planar Reflection" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09\x09Remove the background where the is reflection. This is useful when doing augmented reality on highly reflective mirror-like floors.\n\x09\x09Setting PlanarReflectionColorIntensity to 1 and PlanarReflectionMediaOcclusion to 0 equals an additive reflection.\n\x09\x09Setting both PlanarReflectionColorIntensity and PlanarReflectionMediaOcclusion to 1 equals an alpha blended reflection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Remove the background where the is reflection. This is useful when doing augmented reality on highly reflective mirror-like floors.\nSetting PlanarReflectionColorIntensity to 1 and PlanarReflectionMediaOcclusion to 0 equals an additive reflection.\nSetting both PlanarReflectionColorIntensity and PlanarReflectionMediaOcclusion to 1 equals an alpha blended reflection." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTwoSided_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetIsTwoSided" },
		{ "Category", "Shading" },
		{ "Comment", "/** Is this Composite Mesh rendering on both sides of the surface. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Is this Composite Mesh rendering on both sides of the surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignNormalsWithAtmosphereLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetAlignNormalsWithAtmosphereLight" },
		{ "Category", "Shading" },
		{ "Comment", "/** Align the mesh normals with the first atmospheric light found in the scene, when not found this will be top down. When disabled it will use the mesh normal. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Align the mesh normals with the first atmospheric light found in the scene, when not found this will be top down. When disabled it will use the mesh normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracedBackfaceColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetRayTracedBackfaceColor" },
		{ "Category", "Shading" },
		{ "Comment", "/** The color of the back side of the mesh when it is ray traced.\n\x09""Alpha = 0: Color is multiplied with Media.\n\x09""Alpha = 1: Only the Color is visible. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "The color of the back side of the mesh when it is ray traced.\n      Alpha = 0: Color is multiplied with Media.\n      Alpha = 1: Only the Color is visible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracedOutOfFrustumColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetRayTracedOutOfFrustumColor" },
		{ "Category", "Shading" },
		{ "Comment", "/** The color of the mesh when it is ray traced outside of the camera frustum.\n\x09""Alpha = 0: Color is multiplied with Media.\n\x09""Alpha = 1: Only the Color is visible.\n\x09This value only works for non keyed areas. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "The color of the mesh when it is ray traced outside of the camera frustum.\n      Alpha = 0: Color is multiplied with Media.\n      Alpha = 1: Only the Color is visible.\n      This value only works for non keyed areas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderSoftMask_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetRenderSoftMask" },
		{ "Category", "Soft Mask" },
		{ "Comment", "/** Is this Composite Mesh rendering to the soft mask. This allows for soft fading the mesh using vertex color alpha. */" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Is this Composite Mesh rendering to the soft mask. This allows for soft fading the mesh using vertex color alpha." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldComposite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Composite" },
		{ "Comment", "// Pointer to the world composite for quick access.\n" },
		{ "ModuleRelativePath", "Public/Actors/CompositeMesh.h" },
		{ "ToolTip", "Pointer to the world composite for quick access." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StencilMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoftMaskMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpaqueComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StencilComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslucentComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoftMaskComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpaqueMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StencilMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslucentMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoftMaskMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static void NewProp_bBypassDepthOfField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassDepthOfField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static void NewProp_bCastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReceiveShadowsIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanarReflectionColorIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanarReflectionBackgroundOcclusion;
	static void NewProp_bIsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTwoSided;
	static void NewProp_bAlignNormalsWithAtmosphereLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignNormalsWithAtmosphereLight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTracedBackfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTracedOutOfFrustumColor;
	static void NewProp_bRenderSoftMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderSoftMask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldComposite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompositeMesh_AssignMaterialsToStaticMesh, "AssignMaterialsToStaticMesh" }, // 2614428529
		{ &Z_Construct_UFunction_ACompositeMesh_InitializeMaterialData, "InitializeMaterialData" }, // 3117694062
		{ &Z_Construct_UFunction_ACompositeMesh_InitializeUserProperties, "InitializeUserProperties" }, // 2338155380
		{ &Z_Construct_UFunction_ACompositeMesh_RegisterCompositeMesh, "RegisterCompositeMesh" }, // 3831435271
		{ &Z_Construct_UFunction_ACompositeMesh_SetAffectDistanceFieldLighting, "SetAffectDistanceFieldLighting" }, // 1662048782
		{ &Z_Construct_UFunction_ACompositeMesh_SetAlignNormalsWithAtmosphereLight, "SetAlignNormalsWithAtmosphereLight" }, // 3688092367
		{ &Z_Construct_UFunction_ACompositeMesh_SetBypassDepthOfField, "SetBypassDepthOfField" }, // 1595910742
		{ &Z_Construct_UFunction_ACompositeMesh_SetCastShadows, "SetCastShadows" }, // 1652161614
		{ &Z_Construct_UFunction_ACompositeMesh_SetIsTwoSided, "SetIsTwoSided" }, // 505103771
		{ &Z_Construct_UFunction_ACompositeMesh_SetLightingChannels, "SetLightingChannels" }, // 4009005447
		{ &Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionBackgroundOcclusion, "SetPlanarReflectionBackgroundOcclusion" }, // 2222592412
		{ &Z_Construct_UFunction_ACompositeMesh_SetPlanarReflectionColorIntensity, "SetPlanarReflectionColorIntensity" }, // 4281928870
		{ &Z_Construct_UFunction_ACompositeMesh_SetRayTracedBackfaceColor, "SetRayTracedBackfaceColor" }, // 1888649925
		{ &Z_Construct_UFunction_ACompositeMesh_SetRayTracedOutOfFrustumColor, "SetRayTracedOutOfFrustumColor" }, // 630084414
		{ &Z_Construct_UFunction_ACompositeMesh_SetReceiveShadowsIntensity, "SetReceiveShadowsIntensity" }, // 1531568113
		{ &Z_Construct_UFunction_ACompositeMesh_SetRenderSoftMask, "SetRenderSoftMask" }, // 1707586432
		{ &Z_Construct_UFunction_ACompositeMesh_SetStaticMesh, "SetStaticMesh" }, // 3851565439
		{ &Z_Construct_UFunction_ACompositeMesh_UnregisterCompositeMesh, "UnregisterCompositeMesh" }, // 876232191
		{ &Z_Construct_UFunction_ACompositeMesh_UpdateStencilValues, "UpdateStencilValues" }, // 1631518080
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositeMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_OpaqueMaterial = { "OpaqueMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, OpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpaqueMaterial_MetaData), NewProp_OpaqueMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StencilMaterial = { "StencilMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, StencilMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilMaterial_MetaData), NewProp_StencilMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_TranslucentMaterial = { "TranslucentMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, TranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentMaterial_MetaData), NewProp_TranslucentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_SoftMaskMaterial = { "SoftMaskMaterial", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, SoftMaskMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMaskMaterial_MetaData), NewProp_SoftMaskMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_RootSceneComponent = { "RootSceneComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, RootSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootSceneComponent_MetaData), NewProp_RootSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_OpaqueComponent = { "OpaqueComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, OpaqueComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpaqueComponent_MetaData), NewProp_OpaqueComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StencilComponent = { "StencilComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, StencilComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilComponent_MetaData), NewProp_StencilComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_TranslucentComponent = { "TranslucentComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, TranslucentComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentComponent_MetaData), NewProp_TranslucentComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_SoftMaskComponent = { "SoftMaskComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, SoftMaskComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMaskComponent_MetaData), NewProp_SoftMaskComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_OpaqueMID = { "OpaqueMID", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, OpaqueMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpaqueMID_MetaData), NewProp_OpaqueMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StencilMID = { "StencilMID", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, StencilMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilMID_MetaData), NewProp_StencilMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_TranslucentMID = { "TranslucentMID", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, TranslucentMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentMID_MetaData), NewProp_TranslucentMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_SoftMaskMID = { "SoftMaskMID", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, SoftMaskMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMaskMID_MetaData), NewProp_SoftMaskMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
void Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bBypassDepthOfField_SetBit(void* Obj)
{
	((ACompositeMesh*)Obj)->bBypassDepthOfField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bBypassDepthOfField = { "bBypassDepthOfField", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACompositeMesh), &Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bBypassDepthOfField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBypassDepthOfField_MetaData), NewProp_bBypassDepthOfField_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 3420985076
void Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bCastShadows_SetBit(void* Obj)
{
	((ACompositeMesh*)Obj)->bCastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACompositeMesh), &Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadows_MetaData), NewProp_bCastShadows_MetaData) };
void Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((ACompositeMesh*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACompositeMesh), &Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_ReceiveShadowsIntensity = { "ReceiveShadowsIntensity", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, ReceiveShadowsIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveShadowsIntensity_MetaData), NewProp_ReceiveShadowsIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_PlanarReflectionColorIntensity = { "PlanarReflectionColorIntensity", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, PlanarReflectionColorIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionColorIntensity_MetaData), NewProp_PlanarReflectionColorIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_PlanarReflectionBackgroundOcclusion = { "PlanarReflectionBackgroundOcclusion", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, PlanarReflectionBackgroundOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanarReflectionBackgroundOcclusion_MetaData), NewProp_PlanarReflectionBackgroundOcclusion_MetaData) };
void Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bIsTwoSided_SetBit(void* Obj)
{
	((ACompositeMesh*)Obj)->bIsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bIsTwoSided = { "bIsTwoSided", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACompositeMesh), &Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bIsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTwoSided_MetaData), NewProp_bIsTwoSided_MetaData) };
void Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAlignNormalsWithAtmosphereLight_SetBit(void* Obj)
{
	((ACompositeMesh*)Obj)->bAlignNormalsWithAtmosphereLight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAlignNormalsWithAtmosphereLight = { "bAlignNormalsWithAtmosphereLight", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACompositeMesh), &Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAlignNormalsWithAtmosphereLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignNormalsWithAtmosphereLight_MetaData), NewProp_bAlignNormalsWithAtmosphereLight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_RayTracedBackfaceColor = { "RayTracedBackfaceColor", nullptr, (EPropertyFlags)0x0040040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, RayTracedBackfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracedBackfaceColor_MetaData), NewProp_RayTracedBackfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_RayTracedOutOfFrustumColor = { "RayTracedOutOfFrustumColor", nullptr, (EPropertyFlags)0x0040040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, RayTracedOutOfFrustumColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracedOutOfFrustumColor_MetaData), NewProp_RayTracedOutOfFrustumColor_MetaData) };
void Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bRenderSoftMask_SetBit(void* Obj)
{
	((ACompositeMesh*)Obj)->bRenderSoftMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bRenderSoftMask = { "bRenderSoftMask", nullptr, (EPropertyFlags)0x0040000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACompositeMesh), &Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bRenderSoftMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderSoftMask_MetaData), NewProp_bRenderSoftMask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACompositeMesh_Statics::NewProp_WorldComposite = { "WorldComposite", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACompositeMesh, WorldComposite), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldComposite_MetaData), NewProp_WorldComposite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositeMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_OpaqueMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StencilMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_TranslucentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_SoftMaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_RootSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_OpaqueComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StencilComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_TranslucentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_SoftMaskComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_OpaqueMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StencilMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_TranslucentMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_SoftMaskMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bBypassDepthOfField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bCastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_ReceiveShadowsIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_PlanarReflectionColorIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_PlanarReflectionBackgroundOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bIsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bAlignNormalsWithAtmosphereLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_RayTracedBackfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_RayTracedOutOfFrustumColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_bRenderSoftMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositeMesh_Statics::NewProp_WorldComposite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACompositeMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACompositeMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCompositeUpdateInterface_NoRegister, (int32)VTABLE_OFFSET(ACompositeMesh, ICompositeUpdateInterface), false },  // 811909774
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompositeMesh_Statics::ClassParams = {
	&ACompositeMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACompositeMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACompositeMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_ACompositeMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACompositeMesh()
{
	if (!Z_Registration_Info_UClass_ACompositeMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompositeMesh.OuterSingleton, Z_Construct_UClass_ACompositeMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACompositeMesh.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositeMesh);
ACompositeMesh::~ACompositeMesh() {}
// ********** End Class ACompositeMesh *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACompositeMesh, ACompositeMesh::StaticClass, TEXT("ACompositeMesh"), &Z_Registration_Info_UClass_ACompositeMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositeMesh), 4214124949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h__Script_Compositor_3509743228(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Actors_CompositeMesh_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
