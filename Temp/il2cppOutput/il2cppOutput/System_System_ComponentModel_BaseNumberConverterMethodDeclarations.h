﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t1502;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern "C" void BaseNumberConverter__ctor_m7712 (BaseNumberConverter_t1502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BaseNumberConverter_CanConvertFrom_m7713 (BaseNumberConverter_t1502 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BaseNumberConverter_CanConvertTo_m7714 (BaseNumberConverter_t1502 * __this, Object_t * ___context, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * BaseNumberConverter_ConvertFrom_m7715 (BaseNumberConverter_t1502 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * BaseNumberConverter_ConvertTo_m7716 (BaseNumberConverter_t1502 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * BaseNumberConverter_ConvertFromString_m7717 (BaseNumberConverter_t1502 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
