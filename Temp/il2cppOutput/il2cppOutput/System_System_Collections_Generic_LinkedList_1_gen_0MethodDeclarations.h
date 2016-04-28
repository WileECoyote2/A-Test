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

// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t3324;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t388;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3325;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge.h"

// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m26423_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1__ctor_m26423(__this, method) (( void (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1__ctor_m26423_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1__ctor_m26424_gshared (LinkedList_1_t3324 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define LinkedList_1__ctor_m26424(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3324 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))LinkedList_1__ctor_m26424_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26425_gshared (LinkedList_1_t3324 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26425(__this, ___value, method) (( void (*) (LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26425_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m26426_gshared (LinkedList_1_t3324 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_CopyTo_m26426(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3324 *, Array_t *, int32_t, const MethodInfo*))LinkedList_1_System_Collections_ICollection_CopyTo_m26426_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26427_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26427(__this, method) (( Object_t* (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26427_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m26428_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m26428(__this, method) (( Object_t * (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m26428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26429_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26429(__this, method) (( bool (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m26430_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m26430(__this, method) (( bool (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m26430_gshared)(__this, method)
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m26431_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_System_Collections_ICollection_get_SyncRoot_m26431(__this, method) (( Object_t * (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_System_Collections_ICollection_get_SyncRoot_m26431_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m26432_gshared (LinkedList_1_t3324 * __this, LinkedListNode_1_t3325 * ___node, const MethodInfo* method);
#define LinkedList_1_VerifyReferencedNode_m26432(__this, ___node, method) (( void (*) (LinkedList_1_t3324 *, LinkedListNode_1_t3325 *, const MethodInfo*))LinkedList_1_VerifyReferencedNode_m26432_gshared)(__this, ___node, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t3325 * LinkedList_1_AddLast_m26433_gshared (LinkedList_1_t3324 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_AddLast_m26433(__this, ___value, method) (( LinkedListNode_1_t3325 * (*) (LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedList_1_AddLast_m26433_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m26434_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_Clear_m26434(__this, method) (( void (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_Clear_m26434_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m26435_gshared (LinkedList_1_t3324 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Contains_m26435(__this, ___value, method) (( bool (*) (LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedList_1_Contains_m26435_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m26436_gshared (LinkedList_1_t3324 * __this, ObjectU5BU5D_t408* ___array, int32_t ___index, const MethodInfo* method);
#define LinkedList_1_CopyTo_m26436(__this, ___array, ___index, method) (( void (*) (LinkedList_1_t3324 *, ObjectU5BU5D_t408*, int32_t, const MethodInfo*))LinkedList_1_CopyTo_m26436_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t3325 * LinkedList_1_Find_m26437_gshared (LinkedList_1_t3324 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Find_m26437(__this, ___value, method) (( LinkedListNode_1_t3325 * (*) (LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedList_1_Find_m26437_gshared)(__this, ___value, method)
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3326  LinkedList_1_GetEnumerator_m26438_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_GetEnumerator_m26438(__this, method) (( Enumerator_t3326  (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_GetEnumerator_m26438_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LinkedList_1_GetObjectData_m26439_gshared (LinkedList_1_t3324 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define LinkedList_1_GetObjectData_m26439(__this, ___info, ___context, method) (( void (*) (LinkedList_1_t3324 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))LinkedList_1_GetObjectData_m26439_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern "C" void LinkedList_1_OnDeserialization_m26440_gshared (LinkedList_1_t3324 * __this, Object_t * ___sender, const MethodInfo* method);
#define LinkedList_1_OnDeserialization_m26440(__this, ___sender, method) (( void (*) (LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedList_1_OnDeserialization_m26440_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m26441_gshared (LinkedList_1_t3324 * __this, Object_t * ___value, const MethodInfo* method);
#define LinkedList_1_Remove_m26441(__this, ___value, method) (( bool (*) (LinkedList_1_t3324 *, Object_t *, const MethodInfo*))LinkedList_1_Remove_m26441_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m26442_gshared (LinkedList_1_t3324 * __this, LinkedListNode_1_t3325 * ___node, const MethodInfo* method);
#define LinkedList_1_Remove_m26442(__this, ___node, method) (( void (*) (LinkedList_1_t3324 *, LinkedListNode_1_t3325 *, const MethodInfo*))LinkedList_1_Remove_m26442_gshared)(__this, ___node, method)
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m26443_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_RemoveLast_m26443(__this, method) (( void (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_RemoveLast_m26443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m26444_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_get_Count_m26444(__this, method) (( int32_t (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_get_Count_m26444_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t3325 * LinkedList_1_get_First_m26445_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_get_First_m26445(__this, method) (( LinkedListNode_1_t3325 * (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_get_First_m26445_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t3325 * LinkedList_1_get_Last_m26446_gshared (LinkedList_1_t3324 * __this, const MethodInfo* method);
#define LinkedList_1_get_Last_m26446(__this, method) (( LinkedListNode_1_t3325 * (*) (LinkedList_1_t3324 *, const MethodInfo*))LinkedList_1_get_Last_m26446_gshared)(__this, method)
