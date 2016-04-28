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

// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int2,System.Object>>
struct Transform_1_t2697;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int2,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17527_gshared (Transform_1_t2697 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17527(__this, ___object, ___method, method) (( void (*) (Transform_1_t2697 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17527_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int2,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2687  Transform_1_Invoke_m17528_gshared (Transform_1_t2697 * __this, Int2_t112  ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17528(__this, ___key, ___value, method) (( KeyValuePair_2_t2687  (*) (Transform_1_t2697 *, Int2_t112 , Object_t *, const MethodInfo*))Transform_1_Invoke_m17528_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int2,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17529_gshared (Transform_1_t2697 * __this, Int2_t112  ___key, Object_t * ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17529(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2697 *, Int2_t112 , Object_t *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17529_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,System.Collections.Generic.KeyValuePair`2<Pathfinding.Int2,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2687  Transform_1_EndInvoke_m17530_gshared (Transform_1_t2697 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17530(__this, ___result, method) (( KeyValuePair_2_t2687  (*) (Transform_1_t2697 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17530_gshared)(__this, ___result, method)
