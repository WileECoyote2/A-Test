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

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t1498;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1524;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1655;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C" void PropertyDescriptor__ctor_m7889 (PropertyDescriptor_t1498 * __this, MemberDescriptor_t1524 * ___reference, AttributeU5BU5D_t1531* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void PropertyDescriptor__ctor_m7890 (PropertyDescriptor_t1498 * __this, String_t* ___name, AttributeU5BU5D_t1531* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void PropertyDescriptor_FillAttributes_m7891 (PropertyDescriptor_t1498 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C" bool PropertyDescriptor_Equals_m7892 (PropertyDescriptor_t1498 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C" int32_t PropertyDescriptor_GetHashCode_m7893 (PropertyDescriptor_t1498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
