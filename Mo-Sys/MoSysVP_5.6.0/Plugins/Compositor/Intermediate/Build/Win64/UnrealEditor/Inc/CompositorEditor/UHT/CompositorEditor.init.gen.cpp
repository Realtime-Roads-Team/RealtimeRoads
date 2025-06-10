// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositorEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CompositorEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CompositorEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_CompositorEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CompositorEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xB629477A,
				0xB816F6F1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CompositorEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CompositorEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CompositorEditor(Z_Construct_UPackage__Script_CompositorEditor, TEXT("/Script/CompositorEditor"), Z_Registration_Info_UPackage__Script_CompositorEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB629477A, 0xB816F6F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
