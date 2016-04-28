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

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>
struct Node_t2610;
// System.Collections.Generic.RBTree/Node
struct Node_t1476;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::.ctor(TKey)
extern "C" void Node__ctor_m16533_gshared (Node_t2610 * __this, int32_t ___key, const MethodInfo* method);
#define Node__ctor_m16533(__this, ___key, method) (( void (*) (Node_t2610 *, int32_t, const MethodInfo*))Node__ctor_m16533_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C" void Node__ctor_m16534_gshared (Node_t2610 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Node__ctor_m16534(__this, ___key, ___value, method) (( void (*) (Node_t2610 *, int32_t, int32_t, const MethodInfo*))Node__ctor_m16534_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C" void Node_SwapValue_m16535_gshared (Node_t2610 * __this, Node_t1476 * ___other, const MethodInfo* method);
#define Node_SwapValue_m16535(__this, ___other, method) (( void (*) (Node_t2610 *, Node_t1476 *, const MethodInfo*))Node_SwapValue_m16535_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::AsKV()
extern "C" KeyValuePair_2_t440  Node_AsKV_m16536_gshared (Node_t2610 * __this, const MethodInfo* method);
#define Node_AsKV_m16536(__this, method) (( KeyValuePair_2_t440  (*) (Node_t2610 *, const MethodInfo*))Node_AsKV_m16536_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.Int32>::AsDE()
extern "C" DictionaryEntry_t963  Node_AsDE_m16537_gshared (Node_t2610 * __this, const MethodInfo* method);
#define Node_AsDE_m16537(__this, method) (( DictionaryEntry_t963  (*) (Node_t2610 *, const MethodInfo*))Node_AsDE_m16537_gshared)(__this, method)
