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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"

// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15394_gshared (InternalEnumerator_1_t2519 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15394(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2519 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15394_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15395_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15395(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15395_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15396_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15396(__this, method) (( void (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15396_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15397_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15397(__this, method) (( bool (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15397_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m15398_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15398(__this, method) (( float (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15398_gshared)(__this, method)
