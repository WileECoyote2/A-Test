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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3358;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2475;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t3641;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t3642;
// System.Collections.ICollection
struct ICollection_t1496;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3640;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3643;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t3362;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t3366;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m26824_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m26824(__this, method) (( void (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2__ctor_m26824_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26825_gshared (Dictionary_2_t3358 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26825(__this, ___comparer, method) (( void (*) (Dictionary_2_t3358 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26825_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m26827_gshared (Dictionary_2_t3358 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m26827(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3358 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26827_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m26829_gshared (Dictionary_2_t3358 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m26829(__this, ___capacity, method) (( void (*) (Dictionary_2_t3358 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26829_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m26831_gshared (Dictionary_2_t3358 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m26831(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3358 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26831_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m26833_gshared (Dictionary_2_t3358 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m26833(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3358 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2__ctor_m26833_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26835_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26835(__this, method) (( Object_t* (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26835_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26837_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26837(__this, method) (( Object_t* (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26837_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m26839_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m26839(__this, method) (( Object_t * (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26839_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m26841_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m26841(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26841_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m26843_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m26843(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3358 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26843_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m26845_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m26845(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3358 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26845_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m26847_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m26847(__this, ___key, method) (( bool (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26847_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m26849_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m26849(__this, ___key, method) (( void (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26851_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26851(__this, method) (( bool (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26851_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26853_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26853(__this, method) (( Object_t * (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26853_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26855_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26855(__this, method) (( bool (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26857_gshared (Dictionary_2_t3358 * __this, KeyValuePair_2_t3360  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26857(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3358 *, KeyValuePair_2_t3360 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26857_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26859_gshared (Dictionary_2_t3358 * __this, KeyValuePair_2_t3360  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26859(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3358 *, KeyValuePair_2_t3360 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26859_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26861_gshared (Dictionary_2_t3358 * __this, KeyValuePair_2U5BU5D_t3640* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26861(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3358 *, KeyValuePair_2U5BU5D_t3640*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26861_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26863_gshared (Dictionary_2_t3358 * __this, KeyValuePair_2_t3360  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26863(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3358 *, KeyValuePair_2_t3360 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26863_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m26865_gshared (Dictionary_2_t3358 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m26865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3358 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26865_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26867_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26867(__this, method) (( Object_t * (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26867_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26869_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26869(__this, method) (( Object_t* (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26869_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26871_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26871(__this, method) (( Object_t * (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26871_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m26873_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m26873(__this, method) (( int32_t (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_get_Count_m26873_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m26875_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m26875(__this, ___key, method) (( bool (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26875_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m26877_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m26877(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3358 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m26877_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m26879_gshared (Dictionary_2_t3358 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m26879(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3358 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26879_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m26881_gshared (Dictionary_2_t3358 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m26881(__this, ___size, method) (( void (*) (Dictionary_2_t3358 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26881_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m26883_gshared (Dictionary_2_t3358 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m26883(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3358 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26883_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3360  Dictionary_2_make_pair_m26885_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m26885(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3360  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m26885_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m26887_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m26887(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m26887_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m26889_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m26889(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m26889_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m26891_gshared (Dictionary_2_t3358 * __this, KeyValuePair_2U5BU5D_t3640* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m26891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3358 *, KeyValuePair_2U5BU5D_t3640*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26891_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m26893_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m26893(__this, method) (( void (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_Resize_m26893_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m26895_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m26895(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3358 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m26895_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m26897_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m26897(__this, method) (( void (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_Clear_m26897_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m26899_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m26899(__this, ___key, method) (( bool (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m26901_gshared (Dictionary_2_t3358 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m26901(__this, ___value, method) (( bool (*) (Dictionary_2_t3358 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m26901_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m26903_gshared (Dictionary_2_t3358 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m26903(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3358 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2_GetObjectData_m26903_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m26905_gshared (Dictionary_2_t3358 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m26905(__this, ___sender, method) (( void (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26905_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m26907_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m26907(__this, ___key, method) (( bool (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26907_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m26909_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m26909(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3358 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m26909_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t3362 * Dictionary_2_get_Keys_m26911_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m26911(__this, method) (( KeyCollection_t3362 * (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_get_Keys_m26911_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t3366 * Dictionary_2_get_Values_m26913_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m26913(__this, method) (( ValueCollection_t3366 * (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_get_Values_m26913_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m26915_gshared (Dictionary_2_t3358 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m26915(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26915_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m26917_gshared (Dictionary_2_t3358 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m26917(__this, ___value, method) (( bool (*) (Dictionary_2_t3358 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26917_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m26919_gshared (Dictionary_2_t3358 * __this, KeyValuePair_2_t3360  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m26919(__this, ___pair, method) (( bool (*) (Dictionary_2_t3358 *, KeyValuePair_2_t3360 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26919_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t3364  Dictionary_2_GetEnumerator_m26921_gshared (Dictionary_2_t3358 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m26921(__this, method) (( Enumerator_t3364  (*) (Dictionary_2_t3358 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26921_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t963  Dictionary_2_U3CCopyToU3Em__0_m26923_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m26923(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m26923_gshared)(__this /* static, unused */, ___key, ___value, method)
