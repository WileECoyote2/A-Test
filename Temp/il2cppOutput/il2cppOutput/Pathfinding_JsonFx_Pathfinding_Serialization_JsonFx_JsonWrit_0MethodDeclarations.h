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

// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t445;
// System.Text.StringBuilder
struct StringBuilder_t95;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t157;
// System.Object
struct Object_t;
// System.Enum
struct Enum_t838;
// System.String
struct String_t;
// System.Uri
struct Uri_t710;
// System.Version
struct Version_t165;
// System.Collections.IEnumerable
struct IEnumerable_t389;
// System.Collections.IDictionary
struct IDictionary_t957;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Enum[]
struct EnumU5BU5D_t956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Guid.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder,Pathfinding.Serialization.JsonFx.JsonWriterSettings)
extern "C" void JsonWriter__ctor_m2013 (JsonWriter_t445 * __this, StringBuilder_t95 * ___output, JsonWriterSettings_t157 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::System.IDisposable.Dispose()
extern "C" void JsonWriter_System_IDisposable_Dispose_m4373 (JsonWriter_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::get_Settings()
extern "C" JsonWriterSettings_t157 * JsonWriter_get_Settings_m4374 (JsonWriter_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object)
extern "C" void JsonWriter_Write_m2014 (JsonWriter_t445 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean)
extern "C" void JsonWriter_Write_m4375 (JsonWriter_t445 * __this, Object_t * ___value, bool ___isProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.DateTime)
extern "C" void JsonWriter_Write_m4376 (JsonWriter_t445 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Guid)
extern "C" void JsonWriter_Write_m4377 (JsonWriter_t445 * __this, Guid_t886  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Enum)
extern "C" void JsonWriter_Write_m4378 (JsonWriter_t445 * __this, Enum_t838 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String)
extern "C" void JsonWriter_Write_m4379 (JsonWriter_t445 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Boolean)
extern "C" void JsonWriter_Write_m4380 (JsonWriter_t445 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Byte)
extern "C" void JsonWriter_Write_m4381 (JsonWriter_t445 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.SByte)
extern "C" void JsonWriter_Write_m4382 (JsonWriter_t445 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int16)
extern "C" void JsonWriter_Write_m4383 (JsonWriter_t445 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt16)
extern "C" void JsonWriter_Write_m4384 (JsonWriter_t445 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int32)
extern "C" void JsonWriter_Write_m4385 (JsonWriter_t445 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt32)
extern "C" void JsonWriter_Write_m4386 (JsonWriter_t445 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int64)
extern "C" void JsonWriter_Write_m4387 (JsonWriter_t445 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt64)
extern "C" void JsonWriter_Write_m4388 (JsonWriter_t445 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Single)
extern "C" void JsonWriter_Write_m4389 (JsonWriter_t445 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Double)
extern "C" void JsonWriter_Write_m4390 (JsonWriter_t445 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Decimal)
extern "C" void JsonWriter_Write_m4391 (JsonWriter_t445 * __this, Decimal_t870  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Char)
extern "C" void JsonWriter_Write_m4392 (JsonWriter_t445 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.TimeSpan)
extern "C" void JsonWriter_Write_m4393 (JsonWriter_t445 * __this, TimeSpan_t422  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Uri)
extern "C" void JsonWriter_Write_m4394 (JsonWriter_t445 * __this, Uri_t710 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Version)
extern "C" void JsonWriter_Write_m4395 (JsonWriter_t445 * __this, Version_t165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArray(System.Collections.IEnumerable)
extern "C" void JsonWriter_WriteArray_m4396 (JsonWriter_t445 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItem(System.Object)
extern "C" void JsonWriter_WriteArrayItem_m4397 (JsonWriter_t445 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Collections.IDictionary)
extern "C" void JsonWriter_WriteObject_m4398 (JsonWriter_t445 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteDictionary(System.Collections.IEnumerable)
extern "C" void JsonWriter_WriteDictionary_m4399 (JsonWriter_t445 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectProperty(System.String,System.Object)
extern "C" void JsonWriter_WriteObjectProperty_m4400 (JsonWriter_t445 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyName(System.String)
extern "C" void JsonWriter_WriteObjectPropertyName_m4401 (JsonWriter_t445 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyValue(System.Object)
extern "C" void JsonWriter_WriteObjectPropertyValue_m4402 (JsonWriter_t445 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Object,System.Type,System.Boolean)
extern "C" void JsonWriter_WriteObject_m4403 (JsonWriter_t445 * __this, Object_t * ___value, Type_t * ___type, bool ___serializePrivate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItemDelim()
extern "C" void JsonWriter_WriteArrayItemDelim_m4404 (JsonWriter_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim()
extern "C" void JsonWriter_WriteObjectPropertyDelim_m4405 (JsonWriter_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine()
extern "C" void JsonWriter_WriteLine_m4406 (JsonWriter_t445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsIgnored(System.Type,System.Reflection.MemberInfo,System.Object)
extern "C" bool JsonWriter_IsIgnored_m4407 (JsonWriter_t445 * __this, Type_t * ___objType, MemberInfo_t * ___member, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::IsDefaultValue(System.Reflection.MemberInfo,System.Object)
extern "C" bool JsonWriter_IsDefaultValue_m4408 (JsonWriter_t445 * __this, MemberInfo_t * ___member, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Enum[] Pathfinding.Serialization.JsonFx.JsonWriter::GetFlagList(System.Type,System.Object)
extern "C" EnumU5BU5D_t956* JsonWriter_GetFlagList_m4409 (Object_t * __this /* static, unused */, Type_t * ___enumType, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal)
extern "C" bool JsonWriter_InvalidIeee754_m4410 (JsonWriter_t445 * __this, Decimal_t870  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
