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

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t1554;
// System.ComponentModel.IComponent
struct IComponent_t1555;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1501;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t1525;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m8120 (ComponentInfo_t1554 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t1501 * ComponentInfo_GetAttributes_m8121 (ComponentInfo_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::GetEvents()
extern "C" EventDescriptorCollection_t1525 * ComponentInfo_GetEvents_m8122 (ComponentInfo_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t1533 * ComponentInfo_GetProperties_m8123 (ComponentInfo_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
