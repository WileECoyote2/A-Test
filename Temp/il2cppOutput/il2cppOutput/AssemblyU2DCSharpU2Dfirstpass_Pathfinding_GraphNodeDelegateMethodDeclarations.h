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

// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t219;
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

// System.Void Pathfinding.GraphNodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GraphNodeDelegate__ctor_m1652 (GraphNodeDelegate_t219 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNodeDelegate::Invoke(Pathfinding.GraphNode)
extern "C" void GraphNodeDelegate_Invoke_m1653 (GraphNodeDelegate_t219 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GraphNodeDelegate_t219(Il2CppObject* delegate, GraphNode_t61 * ___node);
// System.IAsyncResult Pathfinding.GraphNodeDelegate::BeginInvoke(Pathfinding.GraphNode,System.AsyncCallback,System.Object)
extern "C" Object_t * GraphNodeDelegate_BeginInvoke_m1654 (GraphNodeDelegate_t219 * __this, GraphNode_t61 * ___node, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void GraphNodeDelegate_EndInvoke_m1655 (GraphNodeDelegate_t219 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
