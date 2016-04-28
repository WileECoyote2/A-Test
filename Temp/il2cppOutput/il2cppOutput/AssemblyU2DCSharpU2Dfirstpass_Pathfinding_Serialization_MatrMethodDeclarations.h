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

// Pathfinding.Serialization.MatrixConverter
struct MatrixConverter_t142;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.MatrixConverter::.ctor()
extern "C" void MatrixConverter__ctor_m699 (MatrixConverter_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.MatrixConverter::CanConvert(System.Type)
extern "C" bool MatrixConverter_CanConvert_m700 (MatrixConverter_t142 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.MatrixConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * MatrixConverter_ReadJson_m701 (MatrixConverter_t142 * __this, Type_t * ___objectType, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.MatrixConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * MatrixConverter_WriteJson_m702 (MatrixConverter_t142 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
