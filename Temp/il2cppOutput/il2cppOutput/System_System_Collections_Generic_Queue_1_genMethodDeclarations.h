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

// System.Collections.Generic.Queue`1<AstarPath/GUOSingle>
struct Queue_1_t69;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<AstarPath/GUOSingle>
struct IEnumerator_1_t3450;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// AstarPath/GUOSingle[]
struct GUOSingleU5BU5D_t2490;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarPath_GUOSingle.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::.ctor()
extern "C" void Queue_1__ctor_m1796_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1796(__this, method) (( void (*) (Queue_1_t69 *, const MethodInfo*))Queue_1__ctor_m1796_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m15127_gshared (Queue_1_t69 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m15127(__this, ___array, ___idx, method) (( void (*) (Queue_1_t69 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m15127_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m15128_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m15128(__this, method) (( bool (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m15128_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m15129_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m15129(__this, method) (( Object_t * (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m15129_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15130_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15130(__this, method) (( Object_t* (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15130_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m15131_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m15131(__this, method) (( Object_t * (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m15131_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::Clear()
extern "C" void Queue_1_Clear_m1827_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_Clear_m1827(__this, method) (( void (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_Clear_m1827_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m15132_gshared (Queue_1_t69 * __this, GUOSingleU5BU5D_t2490* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m15132(__this, ___array, ___idx, method) (( void (*) (Queue_1_t69 *, GUOSingleU5BU5D_t2490*, int32_t, const MethodInfo*))Queue_1_CopyTo_m15132_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::Dequeue()
extern "C" GUOSingle_t41  Queue_1_Dequeue_m1826_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m1826(__this, method) (( GUOSingle_t41  (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_Dequeue_m1826_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::Peek()
extern "C" GUOSingle_t41  Queue_1_Peek_m1822_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_Peek_m1822(__this, method) (( GUOSingle_t41  (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_Peek_m1822_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m1821_gshared (Queue_1_t69 * __this, GUOSingle_t41  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m1821(__this, ___item, method) (( void (*) (Queue_1_t69 *, GUOSingle_t41 , const MethodInfo*))Queue_1_Enqueue_m1821_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m15133_gshared (Queue_1_t69 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m15133(__this, ___new_size, method) (( void (*) (Queue_1_t69 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m15133_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::get_Count()
extern "C" int32_t Queue_1_get_Count_m15134_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m15134(__this, method) (( int32_t (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_get_Count_m15134_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<AstarPath/GUOSingle>::GetEnumerator()
extern "C" Enumerator_t2492  Queue_1_GetEnumerator_m15135_gshared (Queue_1_t69 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m15135(__this, method) (( Enumerator_t2492  (*) (Queue_1_t69 *, const MethodInfo*))Queue_1_GetEnumerator_m15135_gshared)(__this, method)
