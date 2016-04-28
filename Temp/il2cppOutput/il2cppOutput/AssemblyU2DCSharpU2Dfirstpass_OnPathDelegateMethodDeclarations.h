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

// OnPathDelegate
struct OnPathDelegate_t17;
// System.Object
struct Object_t;
// Pathfinding.Path
struct Path_t10;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void OnPathDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void OnPathDelegate__ctor_m1660 (OnPathDelegate_t17 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnPathDelegate::Invoke(Pathfinding.Path)
extern "C" void OnPathDelegate_Invoke_m1661 (OnPathDelegate_t17 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnPathDelegate_t17(Il2CppObject* delegate, Path_t10 * ___p);
// System.IAsyncResult OnPathDelegate::BeginInvoke(Pathfinding.Path,System.AsyncCallback,System.Object)
extern "C" Object_t * OnPathDelegate_BeginInvoke_m1662 (OnPathDelegate_t17 * __this, Path_t10 * ___p, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnPathDelegate::EndInvoke(System.IAsyncResult)
extern "C" void OnPathDelegate_EndInvoke_m1663 (OnPathDelegate_t17 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
