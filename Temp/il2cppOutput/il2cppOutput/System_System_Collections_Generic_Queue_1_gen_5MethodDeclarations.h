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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2482;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t388;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m15040_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1__ctor_m15040(__this, method) (( void (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1__ctor_m15040_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m15042_gshared (Queue_1_t2482 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m15042(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2482 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m15042_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m15044_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m15044(__this, method) (( bool (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m15044_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m15046_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m15046(__this, method) (( Object_t * (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m15046_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15048_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15048(__this, method) (( Object_t* (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15048_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m15050_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m15050(__this, method) (( Object_t * (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m15050_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m15052_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_Clear_m15052(__this, method) (( void (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_Clear_m15052_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m15054_gshared (Queue_1_t2482 * __this, ObjectU5BU5D_t408* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m15054(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2482 *, ObjectU5BU5D_t408*, int32_t, const MethodInfo*))Queue_1_CopyTo_m15054_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m15055_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m15055(__this, method) (( Object_t * (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_Dequeue_m15055_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m15057_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_Peek_m15057(__this, method) (( Object_t * (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_Peek_m15057_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m15058_gshared (Queue_1_t2482 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m15058(__this, ___item, method) (( void (*) (Queue_1_t2482 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m15058_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m15060_gshared (Queue_1_t2482 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m15060(__this, ___new_size, method) (( void (*) (Queue_1_t2482 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m15060_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m15062_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m15062(__this, method) (( int32_t (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_get_Count_m15062_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2483  Queue_1_GetEnumerator_m15064_gshared (Queue_1_t2482 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m15064(__this, method) (( Enumerator_t2483  (*) (Queue_1_t2482 *, const MethodInfo*))Queue_1_GetEnumerator_m15064_gshared)(__this, method)
