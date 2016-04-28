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

// Pathfinding.Serialization.UnityObjectConverter
struct UnityObjectConverter_t139;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.UnityObjectConverter::.ctor()
extern "C" void UnityObjectConverter__ctor_m691 (UnityObjectConverter_t139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.UnityObjectConverter::CanConvert(System.Type)
extern "C" bool UnityObjectConverter_CanConvert_m692 (UnityObjectConverter_t139 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.UnityObjectConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * UnityObjectConverter_ReadJson_m693 (UnityObjectConverter_t139 * __this, Type_t * ___objectType, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.UnityObjectConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * UnityObjectConverter_WriteJson_m694 (UnityObjectConverter_t139 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
