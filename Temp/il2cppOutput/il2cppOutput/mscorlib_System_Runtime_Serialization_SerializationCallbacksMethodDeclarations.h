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

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t2151;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CallbackHandler__ctor_m12447 (CallbackHandler_t2151 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
extern "C" void CallbackHandler_Invoke_m12448 (CallbackHandler_t2151 * __this, StreamingContext_t846  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CallbackHandler_t2151(Il2CppObject* delegate, StreamingContext_t846  ___context);
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern "C" Object_t * CallbackHandler_BeginInvoke_m12449 (CallbackHandler_t2151 * __this, StreamingContext_t846  ___context, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
extern "C" void CallbackHandler_EndInvoke_m12450 (CallbackHandler_t2151 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
