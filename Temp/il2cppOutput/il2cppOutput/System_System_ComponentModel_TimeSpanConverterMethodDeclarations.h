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

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_t1542;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TimeSpanConverter_CanConvertFrom_m7976 (TimeSpanConverter_t1542 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TimeSpanConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TimeSpanConverter_CanConvertTo_m7977 (TimeSpanConverter_t1542 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TimeSpanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * TimeSpanConverter_ConvertFrom_m7978 (TimeSpanConverter_t1542 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TimeSpanConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * TimeSpanConverter_ConvertTo_m7979 (TimeSpanConverter_t1542 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
