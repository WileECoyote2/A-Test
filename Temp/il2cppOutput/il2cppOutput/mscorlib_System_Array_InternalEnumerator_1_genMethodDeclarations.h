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
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14224_gshared (InternalEnumerator_1_t2412 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14224(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2412 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14224_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14225_gshared (InternalEnumerator_1_t2412 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14225(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2412 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14225_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14226_gshared (InternalEnumerator_1_t2412 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14226(__this, method) (( void (*) (InternalEnumerator_1_t2412 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14226_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14227_gshared (InternalEnumerator_1_t2412 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14227(__this, method) (( bool (*) (InternalEnumerator_1_t2412 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14227_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t7  InternalEnumerator_1_get_Current_m14228_gshared (InternalEnumerator_1_t2412 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14228(__this, method) (( Vector3_t7  (*) (InternalEnumerator_1_t2412 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14228_gshared)(__this, method)
