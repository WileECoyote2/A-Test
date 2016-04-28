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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3433;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m27404_gshared (DefaultComparer_t3433 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m27404(__this, method) (( void (*) (DefaultComparer_t3433 *, const MethodInfo*))DefaultComparer__ctor_m27404_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27405_gshared (DefaultComparer_t3433 * __this, DateTime_t134  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m27405(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3433 *, DateTime_t134 , const MethodInfo*))DefaultComparer_GetHashCode_m27405_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27406_gshared (DefaultComparer_t3433 * __this, DateTime_t134  ___x, DateTime_t134  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m27406(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3433 *, DateTime_t134 , DateTime_t134 , const MethodInfo*))DefaultComparer_Equals_m27406_gshared)(__this, ___x, ___y, method)
