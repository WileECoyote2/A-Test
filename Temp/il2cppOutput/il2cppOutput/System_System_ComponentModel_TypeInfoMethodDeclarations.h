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

// System.ComponentModel.TypeInfo
struct TypeInfo_t1556;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1501;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t1525;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m8124 (TypeInfo_t1556 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t1501 * TypeInfo_GetAttributes_m8125 (TypeInfo_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::GetEvents()
extern "C" EventDescriptorCollection_t1525 * TypeInfo_GetEvents_m8126 (TypeInfo_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t1533 * TypeInfo_GetProperties_m8127 (TypeInfo_t1556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
