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

// Pathfinding.Serialization.VectorConverter
struct VectorConverter_t145;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.VectorConverter::.ctor()
extern "C" void VectorConverter__ctor_m711 (VectorConverter_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.VectorConverter::CanConvert(System.Type)
extern "C" bool VectorConverter_CanConvert_m712 (VectorConverter_t145 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.VectorConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * VectorConverter_ReadJson_m713 (VectorConverter_t145 * __this, Type_t * ___type, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.VectorConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * VectorConverter_WriteJson_m714 (VectorConverter_t145 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
