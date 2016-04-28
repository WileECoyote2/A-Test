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

// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t1551;
// System.Object
struct Object_t;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t1538;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RefreshEventHandler__ctor_m8937 (RefreshEventHandler_t1551 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern "C" void RefreshEventHandler_Invoke_m8938 (RefreshEventHandler_t1551 * __this, RefreshEventArgs_t1538 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RefreshEventHandler_t1551(Il2CppObject* delegate, RefreshEventArgs_t1538 * ___e);
// System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * RefreshEventHandler_BeginInvoke_m8939 (RefreshEventHandler_t1551 * __this, RefreshEventArgs_t1538 * ___e, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RefreshEventHandler_EndInvoke_m8940 (RefreshEventHandler_t1551 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
