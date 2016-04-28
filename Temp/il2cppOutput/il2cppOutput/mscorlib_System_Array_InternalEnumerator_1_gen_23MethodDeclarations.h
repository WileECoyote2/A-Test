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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15517_gshared (InternalEnumerator_1_t2530 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15517(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2530 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15517_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15518_gshared (InternalEnumerator_1_t2530 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15518(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2530 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15518_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15519_gshared (InternalEnumerator_1_t2530 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15519(__this, method) (( void (*) (InternalEnumerator_1_t2530 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15519_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15520_gshared (InternalEnumerator_1_t2530 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15520(__this, method) (( bool (*) (InternalEnumerator_1_t2530 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15520_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2529  InternalEnumerator_1_get_Current_m15521_gshared (InternalEnumerator_1_t2530 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15521(__this, method) (( KeyValuePair_2_t2529  (*) (InternalEnumerator_1_t2530 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15521_gshared)(__this, method)
