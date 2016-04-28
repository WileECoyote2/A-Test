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

// System.ComponentModel.Info
struct Info_t1553;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t1525;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t1533;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1523;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t1498;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1501;
// System.ComponentModel.IComponent
struct IComponent_t1555;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m8113 (Info_t1553 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m8114 (Info_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.Info::GetEvents(System.Attribute[])
extern "C" EventDescriptorCollection_t1525 * Info_GetEvents_m8115 (Info_t1553 * __this, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t1533 * Info_GetProperties_m8116 (Info_t1553 * __this, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.Info::GetDefaultEvent()
extern "C" EventDescriptor_t1523 * Info_GetDefaultEvent_m8117 (Info_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::GetDefaultProperty()
extern "C" PropertyDescriptor_t1498 * Info_GetDefaultProperty_m8118 (Info_t1553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C" AttributeCollection_t1501 * Info_GetAttributes_m8119 (Info_t1553 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
