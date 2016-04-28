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

// Pathfinding.Serialization.BoundsConverter
struct BoundsConverter_t143;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.BoundsConverter::.ctor()
extern "C" void BoundsConverter__ctor_m703 (BoundsConverter_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.BoundsConverter::CanConvert(System.Type)
extern "C" bool BoundsConverter_CanConvert_m704 (BoundsConverter_t143 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.BoundsConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * BoundsConverter_ReadJson_m705 (BoundsConverter_t143 * __this, Type_t * ___objectType, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.BoundsConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * BoundsConverter_WriteJson_m706 (BoundsConverter_t143 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
