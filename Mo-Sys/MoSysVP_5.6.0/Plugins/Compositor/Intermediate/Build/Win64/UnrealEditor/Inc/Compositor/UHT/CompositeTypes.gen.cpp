// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCompositeTypes() {}

// ********** Begin Cross Module References ********************************************************
COMPOSITOR_API UEnum* Z_Construct_UEnum_Compositor_EMediaBlend();
COMPOSITOR_API UEnum* Z_Construct_UEnum_Compositor_EOutputAlpha();
COMPOSITOR_API UEnum* Z_Construct_UEnum_Compositor_EOutputRgbEncoding();
UPackage* Z_Construct_UPackage__Script_Compositor();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOutputRgbEncoding ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputRgbEncoding;
static UEnum* EOutputRgbEncoding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOutputRgbEncoding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOutputRgbEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Compositor_EOutputRgbEncoding, (UObject*)Z_Construct_UPackage__Script_Compositor(), TEXT("EOutputRgbEncoding"));
	}
	return Z_Registration_Info_UEnum_EOutputRgbEncoding.OuterSingleton;
}
template<> COMPOSITOR_API UEnum* StaticEnum<EOutputRgbEncoding>()
{
	return EOutputRgbEncoding_StaticEnum();
}
struct Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Linear.Comment", "/** \n\x09* No gamma curve is applied.\n\x09* The output is a linear encoded image.\n\x09*/" },
		{ "Linear.Name", "EOutputRgbEncoding::Linear" },
		{ "Linear.ToolTip", "No gamma curve is applied.\nThe output is a linear encoded image." },
		{ "ModuleRelativePath", "Public/CompositeTypes.h" },
		{ "Srgb.Comment", "/** \n\x09* A linear to sRGB curve is applied (~2.2).\n\x09* The output is an sRGB encoded image.\n\x09*/" },
		{ "Srgb.DisplayName", "sRGB" },
		{ "Srgb.Name", "EOutputRgbEncoding::Srgb" },
		{ "Srgb.ToolTip", "A linear to sRGB curve is applied (~2.2).\nThe output is an sRGB encoded image." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutputRgbEncoding::Linear", (int64)EOutputRgbEncoding::Linear },
		{ "EOutputRgbEncoding::Srgb", (int64)EOutputRgbEncoding::Srgb },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Compositor,
	nullptr,
	"EOutputRgbEncoding",
	"EOutputRgbEncoding",
	Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Compositor_EOutputRgbEncoding()
{
	if (!Z_Registration_Info_UEnum_EOutputRgbEncoding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputRgbEncoding.InnerSingleton, Z_Construct_UEnum_Compositor_EOutputRgbEncoding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOutputRgbEncoding.InnerSingleton;
}
// ********** End Enum EOutputRgbEncoding **********************************************************

// ********** Begin Enum EMediaBlend ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaBlend;
static UEnum* EMediaBlend_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaBlend.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Compositor_EMediaBlend, (UObject*)Z_Construct_UPackage__Script_Compositor(), TEXT("EMediaBlend"));
	}
	return Z_Registration_Info_UEnum_EMediaBlend.OuterSingleton;
}
template<> COMPOSITOR_API UEnum* StaticEnum<EMediaBlend>()
{
	return EMediaBlend_StaticEnum();
}
struct Z_Construct_UEnum_Compositor_EMediaBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompositeTypes.h" },
		{ "None.Comment", "/** This won't blend in the media, so the composite meshes stay black.\n\x09* The output is essentially a premultiplied RGB.\n\x09* This can be used for external compositing.\n\x09* Make sure to still supply a media import as an approximation for reflections.\n\x09* Only use separate translucency, otherwise it won't show up in the alpha.\n\x09*/" },
		{ "None.Name", "EMediaBlend::None" },
		{ "None.ToolTip", "This won't blend in the media, so the composite meshes stay black.\nThe output is essentially a premultiplied RGB.\nThis can be used for external compositing.\nMake sure to still supply a media import as an approximation for reflections.\nOnly use separate translucency, otherwise it won't show up in the alpha." },
		{ "PostToneCurve.Comment", "/**\n\x09* Media will be blended after the tone curve.\n\x09* This can cause clipping artifacts which are reduced by a brightness mask.\n\x09* Use the brightness mask gamma to tweak it to your liking.\n\x09*/" },
		{ "PostToneCurve.Name", "EMediaBlend::PostToneCurve" },
		{ "PostToneCurve.ToolTip", "Media will be blended after the tone curve.\nThis can cause clipping artifacts which are reduced by a brightness mask.\nUse the brightness mask gamma to tweak it to your liking." },
		{ "PreToneCurve.Comment", "/** \n\x09* The media will be blended before the tone curve.\n\x09* Gives better color blending results but the media does change color based on the tone curve related settings.\n\x09* Only works properly if Tone Curve Amount = 1 in the post process settings.\n\x09*/" },
		{ "PreToneCurve.Name", "EMediaBlend::PreToneCurve" },
		{ "PreToneCurve.ToolTip", "The media will be blended before the tone curve.\nGives better color blending results but the media does change color based on the tone curve related settings.\nOnly works properly if Tone Curve Amount = 1 in the post process settings." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaBlend::None", (int64)EMediaBlend::None },
		{ "EMediaBlend::PreToneCurve", (int64)EMediaBlend::PreToneCurve },
		{ "EMediaBlend::PostToneCurve", (int64)EMediaBlend::PostToneCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Compositor_EMediaBlend_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Compositor,
	nullptr,
	"EMediaBlend",
	"EMediaBlend",
	Z_Construct_UEnum_Compositor_EMediaBlend_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Compositor_EMediaBlend_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Compositor_EMediaBlend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Compositor_EMediaBlend_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Compositor_EMediaBlend()
{
	if (!Z_Registration_Info_UEnum_EMediaBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaBlend.InnerSingleton, Z_Construct_UEnum_Compositor_EMediaBlend_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaBlend.InnerSingleton;
}
// ********** End Enum EMediaBlend *****************************************************************

// ********** Begin Enum EOutputAlpha **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutputAlpha;
static UEnum* EOutputAlpha_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOutputAlpha.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOutputAlpha.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Compositor_EOutputAlpha, (UObject*)Z_Construct_UPackage__Script_Compositor(), TEXT("EOutputAlpha"));
	}
	return Z_Registration_Info_UEnum_EOutputAlpha.OuterSingleton;
}
template<> COMPOSITOR_API UEnum* StaticEnum<EOutputAlpha>()
{
	return EOutputAlpha_StaticEnum();
}
struct Z_Construct_UEnum_Compositor_EOutputAlpha_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Black.Comment", "/** Black */" },
		{ "Black.Name", "EOutputAlpha::Black" },
		{ "Black.ToolTip", "Black" },
		{ "InvertedOpacity.Comment", "/**\n\x09* The default value Unreal works with.\n\x09* Black = Opaque, White = Transparent.\n\x09* External Comp ~= unreal.a * your_media.rgb + unreal.rgb;\n\x09*/" },
		{ "InvertedOpacity.Name", "EOutputAlpha::InvertedOpacity" },
		{ "InvertedOpacity.ToolTip", "The default value Unreal works with.\nBlack = Opaque, White = Transparent.\nExternal Comp ~= unreal.a * your_media.rgb + unreal.rgb;" },
		{ "ModuleRelativePath", "Public/CompositeTypes.h" },
		{ "Opacity.Comment", "/**\n\x09* White = Opaque, Black = Transparent.\n\x09* Can be used when compositing externally using a pre-multipled alpha blend (AKA \"Over\" blend).\n\x09* External Comp ~= (1-unreal.a) * your_media.rgb + unreal.rgb;\n\x09*/" },
		{ "Opacity.Name", "EOutputAlpha::Opacity" },
		{ "Opacity.ToolTip", "White = Opaque, Black = Transparent.\nCan be used when compositing externally using a pre-multipled alpha blend (AKA \"Over\" blend).\nExternal Comp ~= (1-unreal.a) * your_media.rgb + unreal.rgb;" },
		{ "White.Comment", "/** White */" },
		{ "White.Name", "EOutputAlpha::White" },
		{ "White.ToolTip", "White" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOutputAlpha::Black", (int64)EOutputAlpha::Black },
		{ "EOutputAlpha::White", (int64)EOutputAlpha::White },
		{ "EOutputAlpha::Opacity", (int64)EOutputAlpha::Opacity },
		{ "EOutputAlpha::InvertedOpacity", (int64)EOutputAlpha::InvertedOpacity },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Compositor_EOutputAlpha_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Compositor,
	nullptr,
	"EOutputAlpha",
	"EOutputAlpha",
	Z_Construct_UEnum_Compositor_EOutputAlpha_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Compositor_EOutputAlpha_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Compositor_EOutputAlpha_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Compositor_EOutputAlpha_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Compositor_EOutputAlpha()
{
	if (!Z_Registration_Info_UEnum_EOutputAlpha.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutputAlpha.InnerSingleton, Z_Construct_UEnum_Compositor_EOutputAlpha_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOutputAlpha.InnerSingleton;
}
// ********** End Enum EOutputAlpha ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_CompositeTypes_h__Script_Compositor_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOutputRgbEncoding_StaticEnum, TEXT("EOutputRgbEncoding"), &Z_Registration_Info_UEnum_EOutputRgbEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2704225389U) },
		{ EMediaBlend_StaticEnum, TEXT("EMediaBlend"), &Z_Registration_Info_UEnum_EMediaBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1525429804U) },
		{ EOutputAlpha_StaticEnum, TEXT("EOutputAlpha"), &Z_Registration_Info_UEnum_EOutputAlpha, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 539946905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_CompositeTypes_h__Script_Compositor_3286758719(TEXT("/Script/Compositor"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_CompositeTypes_h__Script_Compositor_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Compositor_Source_Compositor_Public_CompositeTypes_h__Script_Compositor_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
