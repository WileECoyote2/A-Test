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

// System.ComponentModel.ArrayConverter
struct ArrayConverter_t1499;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1695;
// System.Globalization.CultureInfo
struct CultureInfo_t867;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;
// System.Attribute[]
struct AttributeU5BU5D_t1531;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ArrayConverter::.ctor()
extern "C" void ArrayConverter__ctor_m7694 (ArrayConverter_t1499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ArrayConverter_ConvertTo_m7695 (ArrayConverter_t1499 * __this, Object_t * ___context, CultureInfo_t867 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t1533 * ArrayConverter_GetProperties_m7696 (ArrayConverter_t1499 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ArrayConverter_GetPropertiesSupported_m7697 (ArrayConverter_t1499 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
