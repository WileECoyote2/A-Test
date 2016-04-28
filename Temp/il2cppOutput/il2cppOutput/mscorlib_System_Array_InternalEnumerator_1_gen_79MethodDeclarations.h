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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_79.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21147_gshared (InternalEnumerator_1_t2940 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m21147(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2940 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m21147_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21148_gshared (InternalEnumerator_1_t2940 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21148(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2940 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21148_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21149_gshared (InternalEnumerator_1_t2940 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21149(__this, method) (( void (*) (InternalEnumerator_1_t2940 *, const MethodInfo*))InternalEnumerator_1_Dispose_m21149_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21150_gshared (InternalEnumerator_1_t2940 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21150(__this, method) (( bool (*) (InternalEnumerator_1_t2940 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m21150_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
extern "C" KeyValuePair_2_t2939  InternalEnumerator_1_get_Current_m21151_gshared (InternalEnumerator_1_t2940 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21151(__this, method) (( KeyValuePair_2_t2939  (*) (InternalEnumerator_1_t2940 *, const MethodInfo*))InternalEnumerator_1_get_Current_m21151_gshared)(__this, method)
