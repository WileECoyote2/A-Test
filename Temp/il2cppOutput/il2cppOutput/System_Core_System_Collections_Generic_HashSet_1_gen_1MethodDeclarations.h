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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2472;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t388;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2475;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m14972_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m14972(__this, method) (( void (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1__ctor_m14972_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m14974_gshared (HashSet_1_t2472 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m14974(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2472 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))HashSet_1__ctor_m14974_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14976_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14976(__this, method) (( Object_t* (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14976_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14978_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14978(__this, method) (( bool (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14978_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14980_gshared (HashSet_1_t2472 * __this, ObjectU5BU5D_t408* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14980(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2472 *, ObjectU5BU5D_t408*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14980_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14982_gshared (HashSet_1_t2472 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14982(__this, ___item, method) (( void (*) (HashSet_1_t2472 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14982_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14984_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14984(__this, method) (( Object_t * (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14984_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m14986_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m14986(__this, method) (( int32_t (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1_get_Count_m14986_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m14988_gshared (HashSet_1_t2472 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m14988(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2472 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m14988_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m14990_gshared (HashSet_1_t2472 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m14990(__this, ___size, method) (( void (*) (HashSet_1_t2472 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m14990_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m14992_gshared (HashSet_1_t2472 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m14992(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2472 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m14992_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m14994_gshared (HashSet_1_t2472 * __this, ObjectU5BU5D_t408* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m14994(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2472 *, ObjectU5BU5D_t408*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14994_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m14996_gshared (HashSet_1_t2472 * __this, ObjectU5BU5D_t408* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m14996(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2472 *, ObjectU5BU5D_t408*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14996_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m14998_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m14998(__this, method) (( void (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1_Resize_m14998_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m15000_gshared (HashSet_1_t2472 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m15000(__this, ___index, method) (( int32_t (*) (HashSet_1_t2472 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m15000_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m15002_gshared (HashSet_1_t2472 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m15002(__this, ___item, method) (( int32_t (*) (HashSet_1_t2472 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m15002_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m15004_gshared (HashSet_1_t2472 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m15004(__this, ___item, method) (( bool (*) (HashSet_1_t2472 *, Object_t *, const MethodInfo*))HashSet_1_Add_m15004_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m15006_gshared (HashSet_1_t2472 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m15006(__this, method) (( void (*) (HashSet_1_t2472 *, const MethodInfo*))HashSet_1_Clear_m15006_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m15008_gshared (HashSet_1_t2472 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m15008(__this, ___item, method) (( bool (*) (HashSet_1_t2472 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m15008_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m15010_gshared (HashSet_1_t2472 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m15010(__this, ___item, method) (( bool (*) (HashSet_1_t2472 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m15010_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m15012_gshared (HashSet_1_t2472 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m15012(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2472 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))HashSet_1_GetObjectData_m15012_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m15014_gshared (HashSet_1_t2472 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m15014(__this, ___sender, method) (( void (*) (HashSet_1_t2472 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m15014_gshared)(__this, ___sender, method)
