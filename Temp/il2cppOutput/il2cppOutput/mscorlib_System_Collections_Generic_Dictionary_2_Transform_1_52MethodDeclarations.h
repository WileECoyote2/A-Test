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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Transform_1_t3027;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m22280_gshared (Transform_1_t3027 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m22280(__this, ___object, ___method, method) (( void (*) (Transform_1_t3027 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m22280_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2529  Transform_1_Invoke_m22281_gshared (Transform_1_t3027 * __this, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m22281(__this, ___key, ___value, method) (( KeyValuePair_2_t2529  (*) (Transform_1_t3027 *, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Transform_1_Invoke_m22281_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m22282_gshared (Transform_1_t3027 * __this, Object_t * ___key, KeyValuePair_2_t2529  ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m22282(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3027 *, Object_t *, KeyValuePair_2_t2529 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m22282_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2529  Transform_1_EndInvoke_m22283_gshared (Transform_1_t3027 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m22283(__this, ___result, method) (( KeyValuePair_2_t2529  (*) (Transform_1_t3027 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m22283_gshared)(__this, ___result, method)
