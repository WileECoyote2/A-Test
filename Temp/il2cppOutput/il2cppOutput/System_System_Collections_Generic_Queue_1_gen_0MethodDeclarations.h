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

// System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>
struct Queue_1_t72;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<AstarPath/AstarWorkItem>
struct IEnumerator_1_t3451;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// AstarPath/AstarWorkItem[]
struct AstarWorkItemU5BU5D_t2493;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarPath_AstarWorkItem.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::.ctor()
extern "C" void Queue_1__ctor_m1799_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1799(__this, method) (( void (*) (Queue_1_t72 *, const MethodInfo*))Queue_1__ctor_m1799_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m15146_gshared (Queue_1_t72 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m15146(__this, ___array, ___idx, method) (( void (*) (Queue_1_t72 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m15146_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m15147_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m15147(__this, method) (( bool (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m15147_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m15148_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m15148(__this, method) (( Object_t * (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m15148_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15149_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15149(__this, method) (( Object_t* (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15149_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m15150_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m15150(__this, method) (( Object_t * (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m15150_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Clear()
extern "C" void Queue_1_Clear_m15151_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_Clear_m15151(__this, method) (( void (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_Clear_m15151_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m15152_gshared (Queue_1_t72 * __this, AstarWorkItemU5BU5D_t2493* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m15152(__this, ___array, ___idx, method) (( void (*) (Queue_1_t72 *, AstarWorkItemU5BU5D_t2493*, int32_t, const MethodInfo*))Queue_1_CopyTo_m15152_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Dequeue()
extern "C" AstarWorkItem_t44  Queue_1_Dequeue_m1815_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m1815(__this, method) (( AstarWorkItem_t44  (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_Dequeue_m1815_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Peek()
extern "C" AstarWorkItem_t44  Queue_1_Peek_m1813_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_Peek_m1813(__this, method) (( AstarWorkItem_t44  (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_Peek_m1813_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m1812_gshared (Queue_1_t72 * __this, AstarWorkItem_t44  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m1812(__this, ___item, method) (( void (*) (Queue_1_t72 *, AstarWorkItem_t44 , const MethodInfo*))Queue_1_Enqueue_m1812_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m15153_gshared (Queue_1_t72 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m15153(__this, ___new_size, method) (( void (*) (Queue_1_t72 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m15153_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::get_Count()
extern "C" int32_t Queue_1_get_Count_m15154_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m15154(__this, method) (( int32_t (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_get_Count_m15154_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<AstarPath/AstarWorkItem>::GetEnumerator()
extern "C" Enumerator_t2495  Queue_1_GetEnumerator_m15155_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m15155(__this, method) (( Enumerator_t2495  (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_GetEnumerator_m15155_gshared)(__this, method)
