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

// System.ComponentModel.ReflectionEventDescriptor
struct ReflectionEventDescriptor_t1536;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1523;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Reflection.EventInfo)
extern "C" void ReflectionEventDescriptor__ctor_m7951 (ReflectionEventDescriptor_t1536 * __this, EventInfo_t * ___eventInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C" void ReflectionEventDescriptor__ctor_m7952 (ReflectionEventDescriptor_t1536 * __this, Type_t * ___componentType, EventDescriptor_t1523 * ___oldEventDescriptor, AttributeU5BU5D_t1531* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void ReflectionEventDescriptor__ctor_m7953 (ReflectionEventDescriptor_t1536 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1531* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_EventType()
extern "C" Type_t * ReflectionEventDescriptor_get_EventType_m7954 (ReflectionEventDescriptor_t1536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
