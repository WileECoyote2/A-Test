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

// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct JsonDeserializationException_t945;
// System.String
struct String_t;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
extern "C" void JsonDeserializationException__ctor_m4367 (JsonDeserializationException_t945 * __this, String_t* ___message, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Exception,System.Int32)
extern "C" void JsonDeserializationException__ctor_m4368 (JsonDeserializationException_t945 * __this, String_t* ___message, Exception_t52 * ___innerException, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
