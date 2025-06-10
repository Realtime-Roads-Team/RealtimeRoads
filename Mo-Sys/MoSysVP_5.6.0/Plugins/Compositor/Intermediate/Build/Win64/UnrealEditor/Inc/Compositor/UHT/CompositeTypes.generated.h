// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositeTypes.h"

#ifdef COMPOSITOR_CompositeTypes_generated_h
#error "CompositeTypes.generated.h already included, missing '#pragma once' in CompositeTypes.h"
#endif
#define COMPOSITOR_CompositeTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Compositor_Source_Compositor_Public_CompositeTypes_h

// ********** Begin Enum EOutputRgbEncoding ********************************************************
#define FOREACH_ENUM_EOUTPUTRGBENCODING(op) \
	op(EOutputRgbEncoding::Linear) \
	op(EOutputRgbEncoding::Srgb) 

enum class EOutputRgbEncoding : uint8;
template<> struct TIsUEnumClass<EOutputRgbEncoding> { enum { Value = true }; };
template<> COMPOSITOR_API UEnum* StaticEnum<EOutputRgbEncoding>();
// ********** End Enum EOutputRgbEncoding **********************************************************

// ********** Begin Enum EMediaBlend ***************************************************************
#define FOREACH_ENUM_EMEDIABLEND(op) \
	op(EMediaBlend::None) \
	op(EMediaBlend::PreToneCurve) \
	op(EMediaBlend::PostToneCurve) 

enum class EMediaBlend : uint8;
template<> struct TIsUEnumClass<EMediaBlend> { enum { Value = true }; };
template<> COMPOSITOR_API UEnum* StaticEnum<EMediaBlend>();
// ********** End Enum EMediaBlend *****************************************************************

// ********** Begin Enum EOutputAlpha **************************************************************
#define FOREACH_ENUM_EOUTPUTALPHA(op) \
	op(EOutputAlpha::Black) \
	op(EOutputAlpha::White) \
	op(EOutputAlpha::Opacity) \
	op(EOutputAlpha::InvertedOpacity) 

enum class EOutputAlpha : uint8;
template<> struct TIsUEnumClass<EOutputAlpha> { enum { Value = true }; };
template<> COMPOSITOR_API UEnum* StaticEnum<EOutputAlpha>();
// ********** End Enum EOutputAlpha ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
