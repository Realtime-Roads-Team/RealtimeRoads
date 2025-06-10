// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositorEditorFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositorEditorFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositorEditorFunctionLibrary();
COMPOSITOREDITOR_API UClass* Z_Construct_UClass_UCompositorEditorFunctionLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_CompositorEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCompositorEditorFunctionLibrary Function GetCurrentWorld ****************
struct Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics
{
	struct CompositorEditorFunctionLibrary_eventGetCurrentWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Compositor Helpers" },
		{ "Comment", "/** Get the editor or game world depending on if we are in PIE */" },
		{ "ModuleRelativePath", "Private/CompositorEditorFunctionLibrary.h" },
		{ "ToolTip", "Get the editor or game world depending on if we are in PIE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CompositorEditorFunctionLibrary_eventGetCurrentWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCompositorEditorFunctionLibrary, nullptr, "GetCurrentWorld", Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::CompositorEditorFunctionLibrary_eventGetCurrentWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::CompositorEditorFunctionLibrary_eventGetCurrentWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCompositorEditorFunctionLibrary::execGetCurrentWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=UCompositorEditorFunctionLibrary::GetCurrentWorld();
	P_NATIVE_END;
}
// ********** End Class UCompositorEditorFunctionLibrary Function GetCurrentWorld ******************

// ********** Begin Class UCompositorEditorFunctionLibrary *****************************************
void UCompositorEditorFunctionLibrary::StaticRegisterNativesUCompositorEditorFunctionLibrary()
{
	UClass* Class = UCompositorEditorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentWorld", &UCompositorEditorFunctionLibrary::execGetCurrentWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary;
UClass* UCompositorEditorFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UCompositorEditorFunctionLibrary;
	if (!Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CompositorEditorFunctionLibrary"),
			Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUCompositorEditorFunctionLibrary,
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
	return Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UCompositorEditorFunctionLibrary_NoRegister()
{
	return UCompositorEditorFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Mo-Sys added\n" },
		{ "IncludePath", "CompositorEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/CompositorEditorFunctionLibrary.h" },
		{ "ToolTip", "Mo-Sys added" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositorEditorFunctionLibrary_GetCurrentWorld, "GetCurrentWorld" }, // 3646976661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositorEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CompositorEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics::ClassParams = {
	&UCompositorEditorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositorEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCompositorEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary.OuterSingleton;
}
UCompositorEditorFunctionLibrary::UCompositorEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositorEditorFunctionLibrary);
UCompositorEditorFunctionLibrary::~UCompositorEditorFunctionLibrary() {}
// ********** End Class UCompositorEditorFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h__Script_CompositorEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositorEditorFunctionLibrary, UCompositorEditorFunctionLibrary::StaticClass, TEXT("UCompositorEditorFunctionLibrary"), &Z_Registration_Info_UClass_UCompositorEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositorEditorFunctionLibrary), 2251921355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h__Script_CompositorEditor_3467974775(TEXT("/Script/CompositorEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h__Script_CompositorEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_CompositorEditor_Private_CompositorEditorFunctionLibrary_h__Script_CompositorEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
