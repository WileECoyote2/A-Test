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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t3051;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m22592_gshared (Transform_1_t3051 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m22592(__this, ___object, ___method, method) (( void (*) (Transform_1_t3051 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m22592_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t963  Transform_1_Invoke_m22593_gshared (Transform_1_t3051 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m22593(__this, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Transform_1_t3051 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m22593_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m22594_gshared (Transform_1_t3051 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m22594(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3051 *, Object_t *, int32_t, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m22594_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t963  Transform_1_EndInvoke_m22595_gshared (Transform_1_t3051 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m22595(__this, ___result, method) (( DictionaryEntry_t963  (*) (Transform_1_t3051 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m22595_gshared)(__this, ___result, method)
