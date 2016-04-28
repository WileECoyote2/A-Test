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

// UnityEngine.Coroutine
struct Coroutine_t454;
struct Coroutine_t454_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2560 (Coroutine_t454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2561 (Coroutine_t454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2562 (Coroutine_t454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t454_marshal(const Coroutine_t454& unmarshaled, Coroutine_t454_marshaled& marshaled);
extern "C" void Coroutine_t454_marshal_back(const Coroutine_t454_marshaled& marshaled, Coroutine_t454& unmarshaled);
extern "C" void Coroutine_t454_marshal_cleanup(Coroutine_t454_marshaled& marshaled);
