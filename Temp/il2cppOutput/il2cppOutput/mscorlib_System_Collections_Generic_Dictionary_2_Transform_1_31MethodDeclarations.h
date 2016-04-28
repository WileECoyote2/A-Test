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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
struct Transform_1_t2861;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19844_gshared (Transform_1_t2861 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19844(__this, ___object, ___method, method) (( void (*) (Transform_1_t2861 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19844_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m19845_gshared (Transform_1_t2861 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19845(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2861 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m19845_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19846_gshared (Transform_1_t2861 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19846(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2861 *, int32_t, Object_t *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19846_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m19847_gshared (Transform_1_t2861 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19847(__this, ___result, method) (( Object_t * (*) (Transform_1_t2861 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19847_gshared)(__this, ___result, method)
