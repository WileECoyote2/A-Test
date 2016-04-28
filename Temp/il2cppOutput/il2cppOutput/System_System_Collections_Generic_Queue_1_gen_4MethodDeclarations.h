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

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t1050;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3449;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m5228_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1__ctor_m5228(__this, method) (( void (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1__ctor_m5228_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m24071_gshared (Queue_1_t1050 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m24071(__this, ___array, ___idx, method) (( void (*) (Queue_1_t1050 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m24071_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m24072_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m24072(__this, method) (( bool (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m24072_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m24073_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m24073(__this, method) (( Object_t * (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m24073_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24074_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24074(__this, method) (( Object_t* (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24074_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m24075_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m24075(__this, method) (( Object_t * (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m24075_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m5235_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_Clear_m5235(__this, method) (( void (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_Clear_m5235_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m24076_gshared (Queue_1_t1050 * __this, Int32U5BU5D_t16* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m24076(__this, ___array, ___idx, method) (( void (*) (Queue_1_t1050 *, Int32U5BU5D_t16*, int32_t, const MethodInfo*))Queue_1_CopyTo_m24076_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
extern "C" int32_t Queue_1_Dequeue_m5232_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m5232(__this, method) (( int32_t (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_Dequeue_m5232_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Peek()
extern "C" int32_t Queue_1_Peek_m24077_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_Peek_m24077(__this, method) (( int32_t (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_Peek_m24077_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m5231_gshared (Queue_1_t1050 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m5231(__this, ___item, method) (( void (*) (Queue_1_t1050 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m5231_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m24078_gshared (Queue_1_t1050 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m24078(__this, ___new_size, method) (( void (*) (Queue_1_t1050 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m24078_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m24079_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m24079(__this, method) (( int32_t (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_get_Count_m24079_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3172  Queue_1_GetEnumerator_m24080_gshared (Queue_1_t1050 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m24080(__this, method) (( Enumerator_t3172  (*) (Queue_1_t1050 *, const MethodInfo*))Queue_1_GetEnumerator_m24080_gshared)(__this, method)
