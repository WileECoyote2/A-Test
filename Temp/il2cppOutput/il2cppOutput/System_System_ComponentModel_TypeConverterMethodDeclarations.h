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

// System.ComponentModel.TypeConverter
struct TypeConverter_t969;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.String
struct String_t;
// System.Exception
struct Exception_t52;
// System.Collections.IDictionary
struct IDictionary_t957;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.Collections.ICollection
struct ICollection_t1496;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1511;
// System.String[]
struct StringU5BU5D_t63;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C" void TypeConverter__ctor_m7989 (TypeConverter_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m4519 (TypeConverter_t969 * __this, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m7990 (TypeConverter_t969 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern "C" bool TypeConverter_CanConvertTo_m4521 (TypeConverter_t969 * __this, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TypeConverter_CanConvertTo_m7991 (TypeConverter_t969 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C" Object_t * TypeConverter_ConvertFrom_m4520 (TypeConverter_t969 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * TypeConverter_ConvertFrom_m7992 (TypeConverter_t969 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m7993 (TypeConverter_t969 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m7994 (TypeConverter_t969 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m7995 (TypeConverter_t969 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m7996 (TypeConverter_t969 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m7997 (TypeConverter_t969 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern "C" Object_t * TypeConverter_ConvertTo_m4522 (TypeConverter_t969 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * TypeConverter_ConvertTo_m7998 (TypeConverter_t969 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m7999 (TypeConverter_t969 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m8000 (TypeConverter_t969 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m8001 (TypeConverter_t969 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m8002 (TypeConverter_t969 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m8003 (TypeConverter_t969 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C" Exception_t52 * TypeConverter_GetConvertFromException_m8004 (TypeConverter_t969 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C" Exception_t52 * TypeConverter_GetConvertToException_m8005 (TypeConverter_t969 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.Collections.IDictionary)
extern "C" Object_t * TypeConverter_CreateInstance_m8006 (TypeConverter_t969 * __this, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C" Object_t * TypeConverter_CreateInstance_m8007 (TypeConverter_t969 * __this, Object_t * ___context, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported()
extern "C" bool TypeConverter_GetCreateInstanceSupported_m8008 (TypeConverter_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetCreateInstanceSupported_m8009 (TypeConverter_t969 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.Object)
extern "C" PropertyDescriptorCollection_t1533 * TypeConverter_GetProperties_m8010 (TypeConverter_t969 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" PropertyDescriptorCollection_t1533 * TypeConverter_GetProperties_m8011 (TypeConverter_t969 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t1533 * TypeConverter_GetProperties_m8012 (TypeConverter_t969 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported()
extern "C" bool TypeConverter_GetPropertiesSupported_m8013 (TypeConverter_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetPropertiesSupported_m8014 (TypeConverter_t969 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.TypeConverter::GetStandardValues()
extern "C" Object_t * TypeConverter_GetStandardValues_m8015 (TypeConverter_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t1511 * TypeConverter_GetStandardValues_m8016 (TypeConverter_t969 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive()
extern "C" bool TypeConverter_GetStandardValuesExclusive_m8017 (TypeConverter_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesExclusive_m8018 (TypeConverter_t969 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported()
extern "C" bool TypeConverter_GetStandardValuesSupported_m8019 (TypeConverter_t969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesSupported_m8020 (TypeConverter_t969 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.Object)
extern "C" bool TypeConverter_IsValid_m8021 (TypeConverter_t969 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool TypeConverter_IsValid_m8022 (TypeConverter_t969 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::SortProperties(System.ComponentModel.PropertyDescriptorCollection,System.String[])
extern "C" PropertyDescriptorCollection_t1533 * TypeConverter_SortProperties_m8023 (TypeConverter_t969 * __this, PropertyDescriptorCollection_t1533 * ___props, StringU5BU5D_t63* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
