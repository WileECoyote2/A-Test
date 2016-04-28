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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_134.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m27208_gshared (InternalEnumerator_1_t3407 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m27208(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3407 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m27208_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27209_gshared (InternalEnumerator_1_t3407 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27209(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3407 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m27209_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m27210_gshared (InternalEnumerator_1_t3407 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m27210(__this, method) (( void (*) (InternalEnumerator_1_t3407 *, const MethodInfo*))InternalEnumerator_1_Dispose_m27210_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m27211_gshared (InternalEnumerator_1_t3407 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m27211(__this, method) (( bool (*) (InternalEnumerator_1_t3407 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m27211_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1924  InternalEnumerator_1_get_Current_m27212_gshared (InternalEnumerator_1_t3407 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m27212(__this, method) (( LabelFixup_t1924  (*) (InternalEnumerator_1_t3407 *, const MethodInfo*))InternalEnumerator_1_get_Current_m27212_gshared)(__this, method)
