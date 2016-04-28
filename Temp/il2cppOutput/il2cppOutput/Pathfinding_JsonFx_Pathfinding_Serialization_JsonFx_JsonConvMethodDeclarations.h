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

// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t140;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t445;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t446;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonConverter::.ctor()
extern "C" void JsonConverter__ctor_m1965 (JsonConverter_t140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonConverter::Write(Pathfinding.Serialization.JsonFx.JsonWriter,System.Type,System.Object)
extern "C" void JsonConverter_Write_m4423 (JsonConverter_t140 * __this, JsonWriter_t445 * ___writer, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" Object_t * JsonConverter_Read_m4424 (JsonConverter_t140 * __this, JsonReader_t446 * ___reader, Type_t * ___type, Dictionary_2_t390 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Pathfinding.Serialization.JsonFx.JsonConverter::CastFloat(System.Object)
extern "C" float JsonConverter_CastFloat_m1978 (JsonConverter_t140 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
