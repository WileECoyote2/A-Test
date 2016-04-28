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

// System.ComponentModel.NullableConverter
struct NullableConverter_t1532;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.Collections.IDictionary
struct IDictionary_t957;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1511;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.ComponentModel.NullableConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertFrom_m7877 (NullableConverter_t1532 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertTo_m7878 (NullableConverter_t1532 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * NullableConverter_ConvertFrom_m7879 (NullableConverter_t1532 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * NullableConverter_ConvertTo_m7880 (NullableConverter_t1532 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C" Object_t * NullableConverter_CreateInstance_m7881 (NullableConverter_t1532 * __this, Object_t * ___context, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetCreateInstanceSupported_m7882 (NullableConverter_t1532 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.NullableConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t1533 * NullableConverter_GetProperties_m7883 (NullableConverter_t1532 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetPropertiesSupported_m7884 (NullableConverter_t1532 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.NullableConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t1511 * NullableConverter_GetStandardValues_m7885 (NullableConverter_t1532 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesExclusive_m7886 (NullableConverter_t1532 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesSupported_m7887 (NullableConverter_t1532 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool NullableConverter_IsValid_m7888 (NullableConverter_t1532 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
