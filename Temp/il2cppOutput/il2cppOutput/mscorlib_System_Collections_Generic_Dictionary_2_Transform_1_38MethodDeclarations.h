﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>
struct Transform_1_t2948;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m21217_gshared (Transform_1_t2948 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m21217(__this, ___object, ___method, method) (( void (*) (Transform_1_t2948 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m21217_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m21218_gshared (Transform_1_t2948 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m21218(__this, ___key, ___value, method) (( int64_t (*) (Transform_1_t2948 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m21218_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m21219_gshared (Transform_1_t2948 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m21219(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2948 *, Object_t *, int64_t, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m21219_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m21220_gshared (Transform_1_t2948 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m21220(__this, ___result, method) (( int64_t (*) (Transform_1_t2948 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m21220_gshared)(__this, ___result, method)
