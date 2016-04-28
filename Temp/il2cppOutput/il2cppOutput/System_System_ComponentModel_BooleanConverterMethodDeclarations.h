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

// System.ComponentModel.BooleanConverter
struct BooleanConverter_t1503;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1511;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.BooleanConverter::.ctor()
extern "C" void BooleanConverter__ctor_m7718 (BooleanConverter_t1503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BooleanConverter_CanConvertFrom_m7719 (BooleanConverter_t1503 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BooleanConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * BooleanConverter_ConvertFrom_m7720 (BooleanConverter_t1503 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.BooleanConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t1511 * BooleanConverter_GetStandardValues_m7721 (BooleanConverter_t1503 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesExclusive_m7722 (BooleanConverter_t1503 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BooleanConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool BooleanConverter_GetStandardValuesSupported_m7723 (BooleanConverter_t1503 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
