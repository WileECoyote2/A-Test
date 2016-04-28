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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarDebugger_PathTypeDebug.h"

// System.Void System.Array/InternalEnumerator`1<AstarDebugger/PathTypeDebug>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15399_gshared (InternalEnumerator_1_t2520 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15399(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2520 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15399_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<AstarDebugger/PathTypeDebug>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15400_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15400(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15400_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<AstarDebugger/PathTypeDebug>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15401_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15401(__this, method) (( void (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15401_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<AstarDebugger/PathTypeDebug>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15402_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15402(__this, method) (( bool (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15402_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<AstarDebugger/PathTypeDebug>::get_Current()
extern "C" PathTypeDebug_t91  InternalEnumerator_1_get_Current_m15403_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15403(__this, method) (( PathTypeDebug_t91  (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15403_gshared)(__this, method)
