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

// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,Pathfinding.Int2>
struct Transform_1_t2693;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,Pathfinding.Int2>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17496_gshared (Transform_1_t2693 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17496(__this, ___object, ___method, method) (( void (*) (Transform_1_t2693 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17496_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,Pathfinding.Int2>::Invoke(TKey,TValue)
extern "C" Int2_t112  Transform_1_Invoke_m17497_gshared (Transform_1_t2693 * __this, Int2_t112  ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17497(__this, ___key, ___value, method) (( Int2_t112  (*) (Transform_1_t2693 *, Int2_t112 , Object_t *, const MethodInfo*))Transform_1_Invoke_m17497_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,Pathfinding.Int2>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17498_gshared (Transform_1_t2693 * __this, Int2_t112  ___key, Object_t * ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17498(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2693 *, Int2_t112 , Object_t *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17498_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,Pathfinding.Int2>::EndInvoke(System.IAsyncResult)
extern "C" Int2_t112  Transform_1_EndInvoke_m17499_gshared (Transform_1_t2693 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17499(__this, ___result, method) (( Int2_t112  (*) (Transform_1_t2693 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17499_gshared)(__this, ___result, method)
