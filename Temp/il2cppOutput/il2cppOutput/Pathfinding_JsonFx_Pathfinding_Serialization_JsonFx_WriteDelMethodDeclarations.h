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

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t951;
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
#include "mscorlib_System_DateTime.h"

// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate_1__ctor_m23539_gshared (WriteDelegate_1_t951 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define WriteDelegate_1__ctor_m23539(__this, ___object, ___method, method) (( void (*) (WriteDelegate_1_t951 *, Object_t *, IntPtr_t, const MethodInfo*))WriteDelegate_1__ctor_m23539_gshared)(__this, ___object, ___method, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
extern "C" void WriteDelegate_1_Invoke_m4469_gshared (WriteDelegate_1_t951 * __this, JsonWriter_t445 * ___writer, DateTime_t134  ___value, const MethodInfo* method);
#define WriteDelegate_1_Invoke_m4469(__this, ___writer, ___value, method) (( void (*) (WriteDelegate_1_t951 *, JsonWriter_t445 *, DateTime_t134 , const MethodInfo*))WriteDelegate_1_Invoke_m4469_gshared)(__this, ___writer, ___value, method)
// System.IAsyncResult Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::BeginInvoke(Pathfinding.Serialization.JsonFx.JsonWriter,T,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_1_BeginInvoke_m23540_gshared (WriteDelegate_1_t951 * __this, JsonWriter_t445 * ___writer, DateTime_t134  ___value, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define WriteDelegate_1_BeginInvoke_m23540(__this, ___writer, ___value, ___callback, ___object, method) (( Object_t * (*) (WriteDelegate_1_t951 *, JsonWriter_t445 *, DateTime_t134 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))WriteDelegate_1_BeginInvoke_m23540_gshared)(__this, ___writer, ___value, ___callback, ___object, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_1_EndInvoke_m23541_gshared (WriteDelegate_1_t951 * __this, Object_t * ___result, const MethodInfo* method);
#define WriteDelegate_1_EndInvoke_m23541(__this, ___result, method) (( void (*) (WriteDelegate_1_t951 *, Object_t *, const MethodInfo*))WriteDelegate_1_EndInvoke_m23541_gshared)(__this, ___result, method)
