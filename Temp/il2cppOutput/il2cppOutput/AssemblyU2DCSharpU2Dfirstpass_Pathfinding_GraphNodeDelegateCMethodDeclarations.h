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

// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t78;
// System.Object
struct Object_t;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Pathfinding.GraphNodeDelegateCancelable::.ctor(System.Object,System.IntPtr)
extern "C" void GraphNodeDelegateCancelable__ctor_m1656 (GraphNodeDelegateCancelable_t78 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNodeDelegateCancelable::Invoke(Pathfinding.GraphNode)
extern "C" bool GraphNodeDelegateCancelable_Invoke_m1657 (GraphNodeDelegateCancelable_t78 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_GraphNodeDelegateCancelable_t78(Il2CppObject* delegate, GraphNode_t61 * ___node);
// System.IAsyncResult Pathfinding.GraphNodeDelegateCancelable::BeginInvoke(Pathfinding.GraphNode,System.AsyncCallback,System.Object)
extern "C" Object_t * GraphNodeDelegateCancelable_BeginInvoke_m1658 (GraphNodeDelegateCancelable_t78 * __this, GraphNode_t61 * ___node, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNodeDelegateCancelable::EndInvoke(System.IAsyncResult)
extern "C" bool GraphNodeDelegateCancelable_EndInvoke_m1659 (GraphNodeDelegateCancelable_t78 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
