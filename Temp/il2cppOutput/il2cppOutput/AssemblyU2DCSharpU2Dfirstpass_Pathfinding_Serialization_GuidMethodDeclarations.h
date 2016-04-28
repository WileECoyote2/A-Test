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

// Pathfinding.Serialization.GuidConverter
struct GuidConverter_t141;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.GuidConverter::.ctor()
extern "C" void GuidConverter__ctor_m695 (GuidConverter_t141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.GuidConverter::CanConvert(System.Type)
extern "C" bool GuidConverter_CanConvert_m696 (GuidConverter_t141 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.GuidConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * GuidConverter_ReadJson_m697 (GuidConverter_t141 * __this, Type_t * ___objectType, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.GuidConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * GuidConverter_WriteJson_m698 (GuidConverter_t141 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
