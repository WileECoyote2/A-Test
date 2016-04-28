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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t3031;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m22303_gshared (DefaultComparer_t3031 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22303(__this, method) (( void (*) (DefaultComparer_t3031 *, const MethodInfo*))DefaultComparer__ctor_m22303_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22304_gshared (DefaultComparer_t3031 * __this, KeyValuePair_2_t2529  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22304(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3031 *, KeyValuePair_2_t2529 , const MethodInfo*))DefaultComparer_GetHashCode_m22304_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22305_gshared (DefaultComparer_t3031 * __this, KeyValuePair_2_t2529  ___x, KeyValuePair_2_t2529  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22305(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3031 *, KeyValuePair_2_t2529 , KeyValuePair_2_t2529 , const MethodInfo*))DefaultComparer_Equals_m22305_gshared)(__this, ___x, ___y, method)
