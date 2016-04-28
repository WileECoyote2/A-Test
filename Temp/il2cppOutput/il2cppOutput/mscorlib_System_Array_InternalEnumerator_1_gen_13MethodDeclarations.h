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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarPath_AstarWorkItem.h"

// System.Void System.Array/InternalEnumerator`1<AstarPath/AstarWorkItem>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15156_gshared (InternalEnumerator_1_t2494 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15156(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2494 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15156_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<AstarPath/AstarWorkItem>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15157_gshared (InternalEnumerator_1_t2494 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15157(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2494 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15157_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<AstarPath/AstarWorkItem>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15158_gshared (InternalEnumerator_1_t2494 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15158(__this, method) (( void (*) (InternalEnumerator_1_t2494 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15158_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<AstarPath/AstarWorkItem>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15159_gshared (InternalEnumerator_1_t2494 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15159(__this, method) (( bool (*) (InternalEnumerator_1_t2494 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15159_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<AstarPath/AstarWorkItem>::get_Current()
extern "C" AstarWorkItem_t44  InternalEnumerator_1_get_Current_m15160_gshared (InternalEnumerator_1_t2494 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15160(__this, method) (( AstarWorkItem_t44  (*) (InternalEnumerator_1_t2494 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15160_gshared)(__this, method)
