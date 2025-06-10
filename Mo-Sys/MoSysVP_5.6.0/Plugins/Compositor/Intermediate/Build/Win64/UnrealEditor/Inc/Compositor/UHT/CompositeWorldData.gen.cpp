// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Objects/CompositeWorldData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeWorldData() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_ACompositePlanarReflection_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UComposite_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeWorldData();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeWorldData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeWorldData Function GetCompositePlanarReflection ****************
struct Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics
{
	struct CompositeWorldData_eventGetCompositePlanarReflection_Parms
	{
		ACompositePlanarReflection* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Composite|WorldData" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeWorldData_eventGetCompositePlanarReflection_Parms, ReturnValue), Z_Construct_UClass_ACompositePlanarReflection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeWorldData, nullptr, "GetCompositePlanarReflection", Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::CompositeWorldData_eventGetCompositePlanarReflection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::CompositeWorldData_eventGetCompositePlanarReflection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeWorldData::execGetCompositePlanarReflection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACompositePlanarReflection**)Z_Param__Result=P_THIS->GetCompositePlanarReflection();
	P_NATIVE_END;
}
// ********** End Class UCompositeWorldData Function GetCompositePlanarReflection ******************

// ********** Begin Class UCompositeWorldData Function SetCompositePlanarReflection ****************
struct Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics
{
	struct CompositeWorldData_eventSetCompositePlanarReflection_Parms
	{
		ACompositePlanarReflection* NewCompositePlanarReflection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor|Composite|WorldData" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCompositePlanarReflection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::NewProp_NewCompositePlanarReflection = { "NewCompositePlanarReflection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeWorldData_eventSetCompositePlanarReflection_Parms, NewCompositePlanarReflection), Z_Construct_UClass_ACompositePlanarReflection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::NewProp_NewCompositePlanarReflection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeWorldData, nullptr, "SetCompositePlanarReflection", Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::CompositeWorldData_eventSetCompositePlanarReflection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::CompositeWorldData_eventSetCompositePlanarReflection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeWorldData::execSetCompositePlanarReflection)
{
	P_GET_OBJECT(ACompositePlanarReflection,Z_Param_NewCompositePlanarReflection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCompositePlanarReflection(Z_Param_NewCompositePlanarReflection);
	P_NATIVE_END;
}
// ********** End Class UCompositeWorldData Function SetCompositePlanarReflection ******************

// ********** Begin Class UCompositeWorldData ******************************************************
void UCompositeWorldData::StaticRegisterNativesUCompositeWorldData()
{
	UClass* Class = UCompositeWorldData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCompositePlanarReflection", &UCompositeWorldData::execGetCompositePlanarReflection },
		{ "SetCompositePlanarReflection", &UCompositeWorldData::execSetCompositePlanarReflection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeWorldData;
UClass* UCompositeWorldData::GetPrivateStaticClass()
{
	using TClass = UCompositeWorldData;
	if (!Z_Registration_Info_UClass_UCompositeWorldData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeWorldData"),
			Z_Registration_Info_UClass_UCompositeWorldData.InnerSingleton,
			StaticRegisterNativesUCompositeWorldData,
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
	return Z_Registration_Info_UClass_UCompositeWorldData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeWorldData_NoRegister()
{
	return UCompositeWorldData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeWorldData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asset user data added to the world settings which keeps track of the Composite used in the world.\n */" },
		{ "IncludePath", "Objects/CompositeWorldData.h" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "Asset user data added to the world settings which keeps track of the Composite used in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWorldCompositeEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CompositeWorldData" },
		{ "Comment", "/** Is the world composite applied to the view. */" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "Is the world composite applied to the view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeCompositeMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "Comment", "/** Visualize the composite meshes by projecting a world aligned grid. */" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "Visualize the composite meshes by projecting a world aligned grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeShadows_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "Comment", "/** Output the shadows to the RGB for debugging. */" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "Output the shadows to the RGB for debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugVisualizeAlphaInRgb_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "Comment", "/** Output alpha in rgb for debugging. */" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "Output alpha in rgb for debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraMotionBlur_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SceneView" },
		{ "Comment", "/**\n\x09* Is camera motion blur enabled in the scene.\n\x09* This is disabled by default to minimize artifacts on the composite mask in the scene.\n\x09* Only enable this when you are not keying.\n\x09* This only disables motion blur caused by the movement of the camera, object based motion blur will still work when this is disabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "Is camera motion blur enabled in the scene.\nThis is disabled by default to minimize artifacts on the composite mask in the scene.\nOnly enable this when you are not keying.\nThis only disables motion blur caused by the movement of the camera, object based motion blur will still work when this is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldComposite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CompositeWorldData" },
		{ "Comment", "/** The composite stored for this world, this is instanced so the user can adjust the variables easily per world while still able to have global settings using the parent asset. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "The composite stored for this world, this is instanced so the user can adjust the variables easily per world while still able to have global settings using the parent asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositePlanarReflection_MetaData[] = {
		{ "Category", "PlanarReflectionWorldData" },
		{ "Comment", "/** The planar reflection active for the composite. */" },
		{ "ModuleRelativePath", "Public/Objects/CompositeWorldData.h" },
		{ "ToolTip", "The planar reflection active for the composite." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWorldCompositeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorldCompositeEnabled;
	static void NewProp_bDebugVisualizeCompositeMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeCompositeMeshes;
	static void NewProp_bDebugVisualizeShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeShadows;
	static void NewProp_bDebugVisualizeAlphaInRgb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugVisualizeAlphaInRgb;
	static void NewProp_bEnableCameraMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraMotionBlur;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldComposite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositePlanarReflection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositeWorldData_GetCompositePlanarReflection, "GetCompositePlanarReflection" }, // 1757054070
		{ &Z_Construct_UFunction_UCompositeWorldData_SetCompositePlanarReflection, "SetCompositePlanarReflection" }, // 4068392432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeWorldData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bIsWorldCompositeEnabled_SetBit(void* Obj)
{
	((UCompositeWorldData*)Obj)->bIsWorldCompositeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bIsWorldCompositeEnabled = { "bIsWorldCompositeEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositeWorldData), &Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bIsWorldCompositeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWorldCompositeEnabled_MetaData), NewProp_bIsWorldCompositeEnabled_MetaData) };
void Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeCompositeMeshes_SetBit(void* Obj)
{
	((UCompositeWorldData*)Obj)->bDebugVisualizeCompositeMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeCompositeMeshes = { "bDebugVisualizeCompositeMeshes", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositeWorldData), &Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeCompositeMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugVisualizeCompositeMeshes_MetaData), NewProp_bDebugVisualizeCompositeMeshes_MetaData) };
void Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeShadows_SetBit(void* Obj)
{
	((UCompositeWorldData*)Obj)->bDebugVisualizeShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeShadows = { "bDebugVisualizeShadows", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositeWorldData), &Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugVisualizeShadows_MetaData), NewProp_bDebugVisualizeShadows_MetaData) };
void Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeAlphaInRgb_SetBit(void* Obj)
{
	((UCompositeWorldData*)Obj)->bDebugVisualizeAlphaInRgb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeAlphaInRgb = { "bDebugVisualizeAlphaInRgb", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositeWorldData), &Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeAlphaInRgb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugVisualizeAlphaInRgb_MetaData), NewProp_bDebugVisualizeAlphaInRgb_MetaData) };
void Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bEnableCameraMotionBlur_SetBit(void* Obj)
{
	((UCompositeWorldData*)Obj)->bEnableCameraMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bEnableCameraMotionBlur = { "bEnableCameraMotionBlur", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositeWorldData), &Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bEnableCameraMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraMotionBlur_MetaData), NewProp_bEnableCameraMotionBlur_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_WorldComposite = { "WorldComposite", nullptr, (EPropertyFlags)0x004200000208081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeWorldData, WorldComposite), Z_Construct_UClass_UComposite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldComposite_MetaData), NewProp_WorldComposite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_CompositePlanarReflection = { "CompositePlanarReflection", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeWorldData, CompositePlanarReflection), Z_Construct_UClass_ACompositePlanarReflection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositePlanarReflection_MetaData), NewProp_CompositePlanarReflection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeWorldData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bIsWorldCompositeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeCompositeMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bDebugVisualizeAlphaInRgb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_bEnableCameraMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_WorldComposite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeWorldData_Statics::NewProp_CompositePlanarReflection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeWorldData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeWorldData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeWorldData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeWorldData_Statics::ClassParams = {
	&UCompositeWorldData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCompositeWorldData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeWorldData_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeWorldData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeWorldData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeWorldData()
{
	if (!Z_Registration_Info_UClass_UCompositeWorldData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeWorldData.OuterSingleton, Z_Construct_UClass_UCompositeWorldData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeWorldData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeWorldData);
UCompositeWorldData::~UCompositeWorldData() {}
// ********** End Class UCompositeWorldData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeWorldData, UCompositeWorldData::StaticClass, TEXT("UCompositeWorldData"), &Z_Registration_Info_UClass_UCompositeWorldData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeWorldData), 931510259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h__Script_Compositor_2381040340(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Objects_CompositeWorldData_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
