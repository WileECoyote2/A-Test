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

// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct JsonSerializationException_t944;
// System.String
struct String_t;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
extern "C" void JsonSerializationException__ctor_m4365 (JsonSerializationException_t944 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String,System.Exception)
extern "C" void JsonSerializationException__ctor_m4366 (JsonSerializationException_t944 * __this, String_t* ___message, Exception_t52 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
