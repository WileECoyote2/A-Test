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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20595_gshared (InternalEnumerator_1_t2905 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20595(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2905 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20595_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20596_gshared (InternalEnumerator_1_t2905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20596(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2905 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20596_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20597_gshared (InternalEnumerator_1_t2905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20597(__this, method) (( void (*) (InternalEnumerator_1_t2905 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20597_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20598_gshared (InternalEnumerator_1_t2905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20598(__this, method) (( bool (*) (InternalEnumerator_1_t2905 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20598_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t467  InternalEnumerator_1_get_Current_m20599_gshared (InternalEnumerator_1_t2905 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20599(__this, method) (( RaycastHit2D_t467  (*) (InternalEnumerator_1_t2905 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20599_gshared)(__this, method)
