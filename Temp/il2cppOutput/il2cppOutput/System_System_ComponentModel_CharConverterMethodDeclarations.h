#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.CharConverter
struct CharConverter_t1506;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.CharConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool CharConverter_CanConvertFrom_m7735 (CharConverter_t1506 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CharConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * CharConverter_ConvertFrom_m7736 (CharConverter_t1506 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CharConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CharConverter_ConvertTo_m7737 (CharConverter_t1506 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
