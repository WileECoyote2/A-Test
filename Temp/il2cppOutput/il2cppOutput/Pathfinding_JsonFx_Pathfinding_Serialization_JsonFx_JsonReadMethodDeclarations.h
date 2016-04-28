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

// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t158;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t140;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
extern "C" void JsonReaderSettings__ctor_m2016 (JsonReaderSettings_t158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
extern "C" bool JsonReaderSettings_get_HandleCyclicReferences_m4360 (JsonReaderSettings_t158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
extern "C" bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m4361 (JsonReaderSettings_t158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
extern "C" bool JsonReaderSettings_IsTypeHintName_m4362 (JsonReaderSettings_t158 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type)
extern "C" JsonConverter_t140 * JsonReaderSettings_GetConverter_m4363 (JsonReaderSettings_t158 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::AddTypeConverter(Pathfinding.Serialization.JsonFx.JsonConverter)
extern "C" void JsonReaderSettings_AddTypeConverter_m4364 (JsonReaderSettings_t158 * __this, JsonConverter_t140 * ___converter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
