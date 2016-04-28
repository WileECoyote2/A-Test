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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>
struct DefaultComparer_t2713;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>::.ctor()
extern "C" void DefaultComparer__ctor_m17738_gshared (DefaultComparer_t2713 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17738(__this, method) (( void (*) (DefaultComparer_t2713 *, const MethodInfo*))DefaultComparer__ctor_m17738_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17739_gshared (DefaultComparer_t2713 * __this, RaycastHit_t279  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17739(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2713 *, RaycastHit_t279 , const MethodInfo*))DefaultComparer_GetHashCode_m17739_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.RaycastHit>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17740_gshared (DefaultComparer_t2713 * __this, RaycastHit_t279  ___x, RaycastHit_t279  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17740(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2713 *, RaycastHit_t279 , RaycastHit_t279 , const MethodInfo*))DefaultComparer_Equals_m17740_gshared)(__this, ___x, ___y, method)
