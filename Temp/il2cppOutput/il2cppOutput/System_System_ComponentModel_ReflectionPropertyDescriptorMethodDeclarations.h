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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t1537;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t1498;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.String
struct String_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.IList
struct IList_t1655;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C" void ReflectionPropertyDescriptor__ctor_m7955 (ReflectionPropertyDescriptor_t1537 * __this, Type_t * ___componentType, PropertyDescriptor_t1498 * ___oldPropertyDescriptor, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void ReflectionPropertyDescriptor__ctor_m7956 (ReflectionPropertyDescriptor_t1537 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C" void ReflectionPropertyDescriptor__ctor_m7957 (ReflectionPropertyDescriptor_t1537 * __this, PropertyInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C" PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m7958 (ReflectionPropertyDescriptor_t1537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_ComponentType_m7959 (ReflectionPropertyDescriptor_t1537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_PropertyType_m7960 (ReflectionPropertyDescriptor_t1537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void ReflectionPropertyDescriptor_FillAttributes_m7961 (ReflectionPropertyDescriptor_t1537 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
