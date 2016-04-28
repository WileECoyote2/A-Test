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

// Pathfinding.Serialization.LayerMaskConverter
struct LayerMaskConverter_t144;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.LayerMaskConverter::.ctor()
extern "C" void LayerMaskConverter__ctor_m707 (LayerMaskConverter_t144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.LayerMaskConverter::CanConvert(System.Type)
extern "C" bool LayerMaskConverter_CanConvert_m708 (LayerMaskConverter_t144 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.LayerMaskConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * LayerMaskConverter_ReadJson_m709 (LayerMaskConverter_t144 * __this, Type_t * ___type, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.LayerMaskConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * LayerMaskConverter_WriteJson_m710 (LayerMaskConverter_t144 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
