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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24.h"
#include "mscorlib_System_Collections_Generic_Link.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15528_gshared (InternalEnumerator_1_t2531 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15528(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2531 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15528_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15529_gshared (InternalEnumerator_1_t2531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15529(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2531 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15529_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15530_gshared (InternalEnumerator_1_t2531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15530(__this, method) (( void (*) (InternalEnumerator_1_t2531 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15530_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15531_gshared (InternalEnumerator_1_t2531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15531(__this, method) (( bool (*) (InternalEnumerator_1_t2531 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15531_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.Link>::get_Current()
extern "C" Link_t1830  InternalEnumerator_1_get_Current_m15532_gshared (InternalEnumerator_1_t2531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15532(__this, method) (( Link_t1830  (*) (InternalEnumerator_1_t2531 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15532_gshared)(__this, method)
