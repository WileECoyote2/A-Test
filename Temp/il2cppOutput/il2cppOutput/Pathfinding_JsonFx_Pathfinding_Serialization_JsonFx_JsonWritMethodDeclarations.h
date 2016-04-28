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

// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t157;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t951;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t140;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::.ctor()
extern "C" void JsonWriterSettings__ctor_m2003 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_HandleCyclicReferences()
extern "C" bool JsonWriterSettings_get_HandleCyclicReferences_m4411 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintName()
extern "C" String_t* JsonWriterSettings_get_TypeHintName_m4412 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_PrettyPrint()
extern "C" bool JsonWriterSettings_get_PrettyPrint_m4413 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::set_PrettyPrint(System.Boolean)
extern "C" void JsonWriterSettings_set_PrettyPrint_m4414 (JsonWriterSettings_t157 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_Tab()
extern "C" String_t* JsonWriterSettings_get_Tab_m4415 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_NewLine()
extern "C" String_t* JsonWriterSettings_get_NewLine_m4416 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth()
extern "C" int32_t JsonWriterSettings_get_MaxDepth_m4417 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_UseXmlSerializationAttributes()
extern "C" bool JsonWriterSettings_get_UseXmlSerializationAttributes_m4418 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DateTimeSerializer()
extern "C" WriteDelegate_1_t951 * JsonWriterSettings_get_DateTimeSerializer_m4419 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode()
extern "C" bool JsonWriterSettings_get_DebugMode_m4420 (JsonWriterSettings_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonWriterSettings::GetConverter(System.Type)
extern "C" JsonConverter_t140 * JsonWriterSettings_GetConverter_m4421 (JsonWriterSettings_t157 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::AddTypeConverter(Pathfinding.Serialization.JsonFx.JsonConverter)
extern "C" void JsonWriterSettings_AddTypeConverter_m4422 (JsonWriterSettings_t157 * __this, JsonConverter_t140 * ___converter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
