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

// Pathfinding.Serialization.IntKeyDictionaryConverter
struct IntKeyDictionaryConverter_t146;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.IntKeyDictionaryConverter::.ctor()
extern "C" void IntKeyDictionaryConverter__ctor_m715 (IntKeyDictionaryConverter_t146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.IntKeyDictionaryConverter::CanConvert(System.Type)
extern "C" bool IntKeyDictionaryConverter_CanConvert_m716 (IntKeyDictionaryConverter_t146 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.IntKeyDictionaryConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * IntKeyDictionaryConverter_ReadJson_m717 (IntKeyDictionaryConverter_t146 * __this, Type_t * ___type, Dictionary_2_t390 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.IntKeyDictionaryConverter::WriteJson(System.Type,System.Object)
extern "C" Dictionary_2_t390 * IntKeyDictionaryConverter_WriteJson_m718 (IntKeyDictionaryConverter_t146 * __this, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
