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

// System.EventHandler`1<System.Object>
struct EventHandler_1_t3153;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler_1__ctor_m23748_gshared (EventHandler_1_t3153 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventHandler_1__ctor_m23748(__this, ___object, ___method, method) (( void (*) (EventHandler_1_t3153 *, Object_t *, IntPtr_t, const MethodInfo*))EventHandler_1__ctor_m23748_gshared)(__this, ___object, ___method, method)
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
extern "C" void EventHandler_1_Invoke_m23749_gshared (EventHandler_1_t3153 * __this, Object_t * ___sender, Object_t * ___e, const MethodInfo* method);
#define EventHandler_1_Invoke_m23749(__this, ___sender, ___e, method) (( void (*) (EventHandler_1_t3153 *, Object_t *, Object_t *, const MethodInfo*))EventHandler_1_Invoke_m23749_gshared)(__this, ___sender, ___e, method)
// System.IAsyncResult System.EventHandler`1<System.Object>::BeginInvoke(System.Object,TEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_1_BeginInvoke_m23751_gshared (EventHandler_1_t3153 * __this, Object_t * ___sender, Object_t * ___e, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventHandler_1_BeginInvoke_m23751(__this, ___sender, ___e, ___callback, ___object, method) (( Object_t * (*) (EventHandler_1_t3153 *, Object_t *, Object_t *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))EventHandler_1_BeginInvoke_m23751_gshared)(__this, ___sender, ___e, ___callback, ___object, method)
// System.Void System.EventHandler`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_1_EndInvoke_m23753_gshared (EventHandler_1_t3153 * __this, Object_t * ___result, const MethodInfo* method);
#define EventHandler_1_EndInvoke_m23753(__this, ___result, method) (( void (*) (EventHandler_1_t3153 *, Object_t *, const MethodInfo*))EventHandler_1_EndInvoke_m23753_gshared)(__this, ___result, method)
