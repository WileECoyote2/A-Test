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

// OnScanDelegate
struct OnScanDelegate_t74;
// System.Object
struct Object_t;
// AstarPath
struct AstarPath_t48;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void OnScanDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void OnScanDelegate__ctor_m1676 (OnScanDelegate_t74 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanDelegate::Invoke(AstarPath)
extern "C" void OnScanDelegate_Invoke_m1677 (OnScanDelegate_t74 * __this, AstarPath_t48 * ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnScanDelegate_t74(Il2CppObject* delegate, AstarPath_t48 * ___script);
// System.IAsyncResult OnScanDelegate::BeginInvoke(AstarPath,System.AsyncCallback,System.Object)
extern "C" Object_t * OnScanDelegate_BeginInvoke_m1678 (OnScanDelegate_t74 * __this, AstarPath_t48 * ___script, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScanDelegate::EndInvoke(System.IAsyncResult)
extern "C" void OnScanDelegate_EndInvoke_m1679 (OnScanDelegate_t74 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
