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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14334_gshared (InternalEnumerator_1_t2425 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14334(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2425 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14334_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14335_gshared (InternalEnumerator_1_t2425 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14335(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2425 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14335_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14336_gshared (InternalEnumerator_1_t2425 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14336(__this, method) (( void (*) (InternalEnumerator_1_t2425 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14336_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14337_gshared (InternalEnumerator_1_t2425 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14337(__this, method) (( bool (*) (InternalEnumerator_1_t2425 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14337_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m14338_gshared (InternalEnumerator_1_t2425 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14338(__this, method) (( double (*) (InternalEnumerator_1_t2425 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14338_gshared)(__this, method)
