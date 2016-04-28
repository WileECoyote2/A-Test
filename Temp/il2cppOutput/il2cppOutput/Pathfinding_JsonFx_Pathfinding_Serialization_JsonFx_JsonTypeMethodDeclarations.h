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

// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct JsonTypeCoercionException_t946;
// System.String
struct String_t;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
extern "C" void JsonTypeCoercionException__ctor_m4369 (JsonTypeCoercionException_t946 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
extern "C" void JsonTypeCoercionException__ctor_m4370 (JsonTypeCoercionException_t946 * __this, String_t* ___message, Exception_t52 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
