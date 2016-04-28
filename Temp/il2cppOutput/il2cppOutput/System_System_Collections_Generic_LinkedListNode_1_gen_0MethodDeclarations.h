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

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3325;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3324;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m26447_gshared (LinkedListNode_1_t3325 * __this, LinkedList_1_t3324 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m26447(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t3325 *, LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m26447_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m26448_gshared (LinkedListNode_1_t3325 * __this, LinkedList_1_t3324 * ___list, Object_t * ___value, LinkedListNode_1_t3325 * ___previousNode, LinkedListNode_1_t3325 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m26448(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t3325 *, LinkedList_1_t3324 *, Object_t *, LinkedListNode_1_t3325 *, LinkedListNode_1_t3325 *, const MethodInfo*))LinkedListNode_1__ctor_m26448_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m26449_gshared (LinkedListNode_1_t3325 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m26449(__this, method) (( void (*) (LinkedListNode_1_t3325 *, const MethodInfo*))LinkedListNode_1_Detach_m26449_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t3324 * LinkedListNode_1_get_List_m26450_gshared (LinkedListNode_1_t3325 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m26450(__this, method) (( LinkedList_1_t3324 * (*) (LinkedListNode_1_t3325 *, const MethodInfo*))LinkedListNode_1_get_List_m26450_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Previous()
extern "C" LinkedListNode_1_t3325 * LinkedListNode_1_get_Previous_m26451_gshared (LinkedListNode_1_t3325 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Previous_m26451(__this, method) (( LinkedListNode_1_t3325 * (*) (LinkedListNode_1_t3325 *, const MethodInfo*))LinkedListNode_1_get_Previous_m26451_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m26452_gshared (LinkedListNode_1_t3325 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m26452(__this, method) (( Object_t * (*) (LinkedListNode_1_t3325 *, const MethodInfo*))LinkedListNode_1_get_Value_m26452_gshared)(__this, method)
