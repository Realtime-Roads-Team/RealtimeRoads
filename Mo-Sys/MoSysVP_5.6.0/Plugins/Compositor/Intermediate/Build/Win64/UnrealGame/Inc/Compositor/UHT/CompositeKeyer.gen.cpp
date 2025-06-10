// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assets/CompositeKeyer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeKeyer() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister();
COMPOSITOR_API UClass* Z_Construct_UClass_UCompositorSubsystem_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositeKeyer Function GetCompositeKeyerMaterial ***********************
struct CompositeKeyer_eventGetCompositeKeyerMaterial_Parms
{
	UMaterialInterface* ReturnValue;

	/** Constructor, initializes return property only **/
	CompositeKeyer_eventGetCompositeKeyerMaterial_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UCompositeKeyer_GetCompositeKeyerMaterial = FName(TEXT("GetCompositeKeyerMaterial"));
UMaterialInterface* UCompositeKeyer::GetCompositeKeyerMaterial() const
{
	UFunction* Func = FindFunctionChecked(NAME_UCompositeKeyer_GetCompositeKeyerMaterial);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CompositeKeyer_eventGetCompositeKeyerMaterial_Parms Parms;
		const_cast<UCompositeKeyer*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCompositeKeyer*>(this)->GetCompositeKeyerMaterial_Implementation();
	}
}
struct Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Return the CompositeKeyer material executed by this CompositeKeyer. */" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Return the CompositeKeyer material executed by this CompositeKeyer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeKeyer_eventGetCompositeKeyerMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "GetCompositeKeyerMaterial", Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::PropPointers), sizeof(CompositeKeyer_eventGetCompositeKeyerMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CompositeKeyer_eventGetCompositeKeyerMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyer::execGetCompositeKeyerMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetCompositeKeyerMaterial_Implementation();
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyer Function GetCompositeKeyerMaterial *************************

// ********** Begin Class UCompositeKeyer Function GetCompositeKeyerMID ****************************
struct Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics
{
	struct CompositeKeyer_eventGetCompositeKeyerMID_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Return the CompositeKeyer material instance dynamic executed by this CompositeKeyer. */" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Return the CompositeKeyer material instance dynamic executed by this CompositeKeyer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeKeyer_eventGetCompositeKeyerMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "GetCompositeKeyerMID", Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::CompositeKeyer_eventGetCompositeKeyerMID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::CompositeKeyer_eventGetCompositeKeyerMID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyer::execGetCompositeKeyerMID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetCompositeKeyerMID();
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyer Function GetCompositeKeyerMID ******************************

// ********** Begin Class UCompositeKeyer Function GetIsKeyerEnabled *******************************
struct Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics
{
	struct CompositeKeyer_eventGetIsKeyerEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Is the CompositeKeyer enabled. */" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Is the CompositeKeyer enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CompositeKeyer_eventGetIsKeyerEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeKeyer_eventGetIsKeyerEnabled_Parms), &Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "GetIsKeyerEnabled", Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::CompositeKeyer_eventGetIsKeyerEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::CompositeKeyer_eventGetIsKeyerEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyer::execGetIsKeyerEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsKeyerEnabled();
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyer Function GetIsKeyerEnabled *********************************

// ********** Begin Class UCompositeKeyer Function InitializeCompositeKeyer ************************
struct Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics
{
	struct CompositeKeyer_eventInitializeCompositeKeyer_Parms
	{
		UCompositorSubsystem* CompositorSubsystem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositorSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::NewProp_CompositorSubsystem = { "CompositorSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeKeyer_eventInitializeCompositeKeyer_Parms, CompositorSubsystem), Z_Construct_UClass_UCompositorSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::NewProp_CompositorSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "InitializeCompositeKeyer", Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::CompositeKeyer_eventInitializeCompositeKeyer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::CompositeKeyer_eventInitializeCompositeKeyer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyer::execInitializeCompositeKeyer)
{
	P_GET_OBJECT(UCompositorSubsystem,Z_Param_CompositorSubsystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCompositeKeyer(Z_Param_CompositorSubsystem);
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyer Function InitializeCompositeKeyer **************************

// ********** Begin Class UCompositeKeyer Function ReceiveInitializeCompositeKeyer *****************
static FName NAME_UCompositeKeyer_ReceiveInitializeCompositeKeyer = FName(TEXT("ReceiveInitializeCompositeKeyer"));
void UCompositeKeyer::ReceiveInitializeCompositeKeyer()
{
	UFunction* Func = FindFunctionChecked(NAME_UCompositeKeyer_ReceiveInitializeCompositeKeyer);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Event called when the CompositeKeyer is internally initialized. */" },
		{ "DisplayName", "InitializeCompositeKeyer" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Event called when the CompositeKeyer is internally initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "ReceiveInitializeCompositeKeyer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCompositeKeyer Function ReceiveInitializeCompositeKeyer *******************

// ********** Begin Class UCompositeKeyer Function ReceiveUpdateCompositeKeyer *********************
static FName NAME_UCompositeKeyer_ReceiveUpdateCompositeKeyer = FName(TEXT("ReceiveUpdateCompositeKeyer"));
void UCompositeKeyer::ReceiveUpdateCompositeKeyer()
{
	UFunction* Func = FindFunctionChecked(NAME_UCompositeKeyer_ReceiveUpdateCompositeKeyer);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Event called to update the CompositeKeyer. */" },
		{ "DisplayName", "UpdateCompositeKeyer" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Event called to update the CompositeKeyer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "ReceiveUpdateCompositeKeyer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCompositeKeyer Function ReceiveUpdateCompositeKeyer ***********************

// ********** Begin Class UCompositeKeyer Function SetKeyerEnabled *********************************
struct Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics
{
	struct CompositeKeyer_eventSetKeyerEnabled_Parms
	{
		bool IsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Enable/Disable CompositeKeyer. */" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Enable/Disable CompositeKeyer." },
	};
#endif // WITH_METADATA
	static void NewProp_IsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::NewProp_IsEnabled_SetBit(void* Obj)
{
	((CompositeKeyer_eventSetKeyerEnabled_Parms*)Obj)->IsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CompositeKeyer_eventSetKeyerEnabled_Parms), &Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::NewProp_IsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "SetKeyerEnabled", Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::CompositeKeyer_eventSetKeyerEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::CompositeKeyer_eventSetKeyerEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyer::execSetKeyerEnabled)
{
	P_GET_UBOOL(Z_Param_IsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetKeyerEnabled(Z_Param_IsEnabled);
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyer Function SetKeyerEnabled ***********************************

// ********** Begin Class UCompositeKeyer Function UpdateCompositeKeyer ****************************
struct Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics
{
	struct CompositeKeyer_eventUpdateCompositeKeyer_Parms
	{
		UCompositorSubsystem* CompositorSubsystem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositorSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::NewProp_CompositorSubsystem = { "CompositorSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositeKeyer_eventUpdateCompositeKeyer_Parms, CompositorSubsystem), Z_Construct_UClass_UCompositorSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::NewProp_CompositorSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositeKeyer, nullptr, "UpdateCompositeKeyer", Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::CompositeKeyer_eventUpdateCompositeKeyer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::CompositeKeyer_eventUpdateCompositeKeyer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositeKeyer::execUpdateCompositeKeyer)
{
	P_GET_OBJECT(UCompositorSubsystem,Z_Param_CompositorSubsystem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCompositeKeyer(Z_Param_CompositorSubsystem);
	P_NATIVE_END;
}
// ********** End Class UCompositeKeyer Function UpdateCompositeKeyer ******************************

// ********** Begin Class UCompositeKeyer **********************************************************
void UCompositeKeyer::StaticRegisterNativesUCompositeKeyer()
{
	UClass* Class = UCompositeKeyer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCompositeKeyerMaterial", &UCompositeKeyer::execGetCompositeKeyerMaterial },
		{ "GetCompositeKeyerMID", &UCompositeKeyer::execGetCompositeKeyerMID },
		{ "GetIsKeyerEnabled", &UCompositeKeyer::execGetIsKeyerEnabled },
		{ "InitializeCompositeKeyer", &UCompositeKeyer::execInitializeCompositeKeyer },
		{ "SetKeyerEnabled", &UCompositeKeyer::execSetKeyerEnabled },
		{ "UpdateCompositeKeyer", &UCompositeKeyer::execUpdateCompositeKeyer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositeKeyer;
UClass* UCompositeKeyer::GetPrivateStaticClass()
{
	using TClass = UCompositeKeyer;
	if (!Z_Registration_Info_UClass_UCompositeKeyer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositeKeyer"),
			Z_Registration_Info_UClass_UCompositeKeyer.InnerSingleton,
			StaticRegisterNativesUCompositeKeyer,
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
	return Z_Registration_Info_UClass_UCompositeKeyer.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositeKeyer_NoRegister()
{
	return UCompositeKeyer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositeKeyer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Compositor" },
		{ "ClassGroupNames", "Compositor" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Assets/CompositeKeyer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCompositeKeyerEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** Is the CompositeKeyer enabled. */" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "Is the CompositeKeyer enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeKeyerMID_MetaData[] = {
		{ "Category", "CompositeKeyer" },
		{ "Comment", "/** The material instance dynamic created from the CompositeKeyer material. */" },
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
		{ "ToolTip", "The material instance dynamic created from the CompositeKeyer material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaInputKeyedRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Assets/CompositeKeyer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsCompositeKeyerEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCompositeKeyerEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompositeKeyerMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaInputKeyedRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMaterial, "GetCompositeKeyerMaterial" }, // 2798191083
		{ &Z_Construct_UFunction_UCompositeKeyer_GetCompositeKeyerMID, "GetCompositeKeyerMID" }, // 2506081778
		{ &Z_Construct_UFunction_UCompositeKeyer_GetIsKeyerEnabled, "GetIsKeyerEnabled" }, // 3002409341
		{ &Z_Construct_UFunction_UCompositeKeyer_InitializeCompositeKeyer, "InitializeCompositeKeyer" }, // 1925603226
		{ &Z_Construct_UFunction_UCompositeKeyer_ReceiveInitializeCompositeKeyer, "ReceiveInitializeCompositeKeyer" }, // 80984410
		{ &Z_Construct_UFunction_UCompositeKeyer_ReceiveUpdateCompositeKeyer, "ReceiveUpdateCompositeKeyer" }, // 2165125606
		{ &Z_Construct_UFunction_UCompositeKeyer_SetKeyerEnabled, "SetKeyerEnabled" }, // 2813404600
		{ &Z_Construct_UFunction_UCompositeKeyer_UpdateCompositeKeyer, "UpdateCompositeKeyer" }, // 326526163
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeKeyer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_IsCompositeKeyerEnabled_SetBit(void* Obj)
{
	((UCompositeKeyer*)Obj)->IsCompositeKeyerEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_IsCompositeKeyerEnabled = { "IsCompositeKeyerEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositeKeyer), &Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_IsCompositeKeyerEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCompositeKeyerEnabled_MetaData), NewProp_IsCompositeKeyerEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_CompositeKeyerMID = { "CompositeKeyerMID", nullptr, (EPropertyFlags)0x0040040000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeKeyer, CompositeKeyerMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeKeyerMID_MetaData), NewProp_CompositeKeyerMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_MediaInputKeyedRenderTarget = { "MediaInputKeyedRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositeKeyer, MediaInputKeyedRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaInputKeyedRenderTarget_MetaData), NewProp_MediaInputKeyedRenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeKeyer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_IsCompositeKeyerEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_CompositeKeyerMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeKeyer_Statics::NewProp_MediaInputKeyedRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositeKeyer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Compositor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeKeyer_Statics::ClassParams = {
	&UCompositeKeyer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCompositeKeyer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyer_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeKeyer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositeKeyer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositeKeyer()
{
	if (!Z_Registration_Info_UClass_UCompositeKeyer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeKeyer.OuterSingleton, Z_Construct_UClass_UCompositeKeyer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositeKeyer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeKeyer);
UCompositeKeyer::~UCompositeKeyer() {}
// ********** End Class UCompositeKeyer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h__Script_Compositor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeKeyer, UCompositeKeyer::StaticClass, TEXT("UCompositeKeyer"), &Z_Registration_Info_UClass_UCompositeKeyer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeKeyer), 3617059650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h__Script_Compositor_158450457(TEXT("/Script/Compositor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h__Script_Compositor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_Assets_CompositeKeyer_h__Script_Compositor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
