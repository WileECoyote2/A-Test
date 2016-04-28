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

// NodeDelegate
struct NodeDelegate_t382;
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

// System.Void NodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NodeDelegate__ctor_m1668 (NodeDelegate_t382 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodeDelegate::Invoke(Pathfinding.GraphNode)
extern "C" void NodeDelegate_Invoke_m1669 (NodeDelegate_t382 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NodeDelegate_t382(Il2CppObject* delegate, GraphNode_t61 * ___node);
// System.IAsyncResult NodeDelegate::BeginInvoke(Pathfinding.GraphNode,System.AsyncCallback,System.Object)
extern "C" Object_t * NodeDelegate_BeginInvoke_m1670 (NodeDelegate_t382 * __this, GraphNode_t61 * ___node, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NodeDelegate_EndInvoke_m1671 (NodeDelegate_t382 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
