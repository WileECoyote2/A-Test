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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>
struct DefaultComparer_t2641;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::.ctor()
extern "C" void DefaultComparer__ctor_m16918_gshared (DefaultComparer_t2641 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16918(__this, method) (( void (*) (DefaultComparer_t2641 *, const MethodInfo*))DefaultComparer__ctor_m16918_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16919_gshared (DefaultComparer_t2641 * __this, uint32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16919(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2641 *, uint32_t, const MethodInfo*))DefaultComparer_GetHashCode_m16919_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16920_gshared (DefaultComparer_t2641 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16920(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2641 *, uint32_t, uint32_t, const MethodInfo*))DefaultComparer_Equals_m16920_gshared)(__this, ___x, ___y, method)
