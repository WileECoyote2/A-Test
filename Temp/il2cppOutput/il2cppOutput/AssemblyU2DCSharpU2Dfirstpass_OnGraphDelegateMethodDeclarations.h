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

// OnGraphDelegate
struct OnGraphDelegate_t73;
// System.Object
struct Object_t;
// Pathfinding.NavGraph
struct NavGraph_t109;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void OnGraphDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void OnGraphDelegate__ctor_m1672 (OnGraphDelegate_t73 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnGraphDelegate::Invoke(Pathfinding.NavGraph)
extern "C" void OnGraphDelegate_Invoke_m1673 (OnGraphDelegate_t73 * __this, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnGraphDelegate_t73(Il2CppObject* delegate, NavGraph_t109 * ___graph);
// System.IAsyncResult OnGraphDelegate::BeginInvoke(Pathfinding.NavGraph,System.AsyncCallback,System.Object)
extern "C" Object_t * OnGraphDelegate_BeginInvoke_m1674 (OnGraphDelegate_t73 * __this, NavGraph_t109 * ___graph, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnGraphDelegate::EndInvoke(System.IAsyncResult)
extern "C" void OnGraphDelegate_EndInvoke_m1675 (OnGraphDelegate_t73 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
