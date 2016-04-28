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

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>
struct WriteDelegate_1_t3146;
// System.Object
struct Object_t;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t445;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate_1__ctor_m23635_gshared (WriteDelegate_1_t3146 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define WriteDelegate_1__ctor_m23635(__this, ___object, ___method, method) (( void (*) (WriteDelegate_1_t3146 *, Object_t *, IntPtr_t, const MethodInfo*))WriteDelegate_1__ctor_m23635_gshared)(__this, ___object, ___method, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
extern "C" void WriteDelegate_1_Invoke_m23636_gshared (WriteDelegate_1_t3146 * __this, JsonWriter_t445 * ___writer, Object_t * ___value, const MethodInfo* method);
#define WriteDelegate_1_Invoke_m23636(__this, ___writer, ___value, method) (( void (*) (WriteDelegate_1_t3146 *, JsonWriter_t445 *, Object_t *, const MethodInfo*))WriteDelegate_1_Invoke_m23636_gshared)(__this, ___writer, ___value, method)
// System.IAsyncResult Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::BeginInvoke(Pathfinding.Serialization.JsonFx.JsonWriter,T,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_1_BeginInvoke_m23637_gshared (WriteDelegate_1_t3146 * __this, JsonWriter_t445 * ___writer, Object_t * ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define WriteDelegate_1_BeginInvoke_m23637(__this, ___writer, ___value, ___callback, ___object, method) (( Object_t * (*) (WriteDelegate_1_t3146 *, JsonWriter_t445 *, Object_t *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))WriteDelegate_1_BeginInvoke_m23637_gshared)(__this, ___writer, ___value, ___callback, ___object, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_1_EndInvoke_m23638_gshared (WriteDelegate_1_t3146 * __this, Object_t * ___result, const MethodInfo* method);
#define WriteDelegate_1_EndInvoke_m23638(__this, ___result, method) (( void (*) (WriteDelegate_1_t3146 *, Object_t *, const MethodInfo*))WriteDelegate_1_EndInvoke_m23638_gshared)(__this, ___result, method)
