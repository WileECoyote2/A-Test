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

// UnityEngine.Animation/Enumerator
struct Enumerator_t658;
// UnityEngine.Animation
struct Animation_t208;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m3511 (Enumerator_t658 * __this, Animation_t208 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m3512 (Enumerator_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m3513 (Enumerator_t658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
