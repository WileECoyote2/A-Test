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

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>
struct NodeHelper_t2607;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t2619;
// System.Collections.Generic.RBTree/Node
struct Node_t1476;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C" void NodeHelper__ctor_m16650_gshared (NodeHelper_t2607 * __this, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper__ctor_m16650(__this, ___cmp, method) (( void (*) (NodeHelper_t2607 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m16650_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::.cctor()
extern "C" void NodeHelper__cctor_m16651_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m16651(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m16651_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C" int32_t NodeHelper_Compare_m16652_gshared (NodeHelper_t2607 * __this, int32_t ___key, Node_t1476 * ___node, const MethodInfo* method);
#define NodeHelper_Compare_m16652(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t2607 *, int32_t, Node_t1476 *, const MethodInfo*))NodeHelper_Compare_m16652_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::CreateNode(TKey)
extern "C" Node_t1476 * NodeHelper_CreateNode_m16653_gshared (NodeHelper_t2607 * __this, int32_t ___key, const MethodInfo* method);
#define NodeHelper_CreateNode_m16653(__this, ___key, method) (( Node_t1476 * (*) (NodeHelper_t2607 *, int32_t, const MethodInfo*))NodeHelper_CreateNode_m16653_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C" NodeHelper_t2607 * NodeHelper_GetHelper_m16654_gshared (Object_t * __this /* static, unused */, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper_GetHelper_m16654(__this /* static, unused */, ___cmp, method) (( NodeHelper_t2607 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m16654_gshared)(__this /* static, unused */, ___cmp, method)
