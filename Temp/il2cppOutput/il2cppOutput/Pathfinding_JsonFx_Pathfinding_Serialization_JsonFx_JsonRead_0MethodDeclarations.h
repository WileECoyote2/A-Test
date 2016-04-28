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

// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t446;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t158;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t955;
// System.Collections.IEnumerable
struct IEnumerable_t389;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx_JsonToke.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
extern "C" void JsonReader__ctor_m2027 (JsonReader_t446 * __this, String_t* ___input, JsonReaderSettings_t158 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.cctor()
extern "C" void JsonReader__cctor_m4347 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Type)
extern "C" Object_t * JsonReader_Deserialize_m2036 (JsonReader_t446 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean)
extern "C" Object_t * JsonReader_Read_m4348 (JsonReader_t446 * __this, Type_t * ___expectedType, bool ___typeIsHint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&)
extern "C" void JsonReader_PopulateObject_m4349 (JsonReader_t446 * __this, Object_t ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
extern "C" Object_t * JsonReader_ReadObject_m4350 (JsonReader_t446 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
extern "C" Type_t * JsonReader_GetGenericDictionaryType_m4351 (JsonReader_t446 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
extern "C" void JsonReader_PopulateObject_m4352 (JsonReader_t446 * __this, Object_t ** ___result, Type_t * ___objectType, Dictionary_2_t955 * ___memberMap, Type_t * ___genericDictionaryType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
extern "C" Object_t * JsonReader_ReadArray_m4353 (JsonReader_t446 * __this, Type_t * ___arrayType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
extern "C" String_t* JsonReader_ReadUnquotedKey_m4354 (JsonReader_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
extern "C" Object_t * JsonReader_ReadString_m4355 (JsonReader_t446 * __this, Type_t * ___expectedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
extern "C" Object_t * JsonReader_ReadNumber_m4356 (JsonReader_t446 * __this, Type_t * ___expectedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
extern "C" int32_t JsonReader_Tokenize_m4357 (JsonReader_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
extern "C" int32_t JsonReader_Tokenize_m4358 (JsonReader_t446 * __this, bool ___allowUnquotedString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
extern "C" bool JsonReader_MatchLiteral_m4359 (JsonReader_t446 * __this, String_t* ___literal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
