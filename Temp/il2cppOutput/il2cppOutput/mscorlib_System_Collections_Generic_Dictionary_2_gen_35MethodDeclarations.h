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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2851;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2598;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t3530;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3470;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.ICollection
struct ICollection_t1496;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3529;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3531;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2855;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2859;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m19678_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19678(__this, method) (( void (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2__ctor_m19678_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19680_gshared (Dictionary_2_t2851 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19680(__this, ___comparer, method) (( void (*) (Dictionary_2_t2851 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19680_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19682_gshared (Dictionary_2_t2851 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19682(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2851 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19682_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19684_gshared (Dictionary_2_t2851 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19684(__this, ___capacity, method) (( void (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19684_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19686_gshared (Dictionary_2_t2851 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19686(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2851 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19686_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19688_gshared (Dictionary_2_t2851 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19688(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2851 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2__ctor_m19688_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19690_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19690(__this, method) (( Object_t* (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19690_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19692_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19692(__this, method) (( Object_t* (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19692_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m19694_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19694(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m19694_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19696_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19696(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19698_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19698(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19700_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19700(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19700_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19702_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19702(__this, ___key, method) (( bool (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19702_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19704_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19704(__this, ___key, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19704_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19706_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19706(__this, method) (( bool (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19708_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19708(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19708_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19710_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19710(__this, method) (( bool (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19710_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19712_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t2853  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19712(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2851 *, KeyValuePair_2_t2853 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19712_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19714_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t2853  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19714(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2851 *, KeyValuePair_2_t2853 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19714_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19716_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2U5BU5D_t3529* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, KeyValuePair_2U5BU5D_t3529*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19716_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19718_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t2853  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19718(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2851 *, KeyValuePair_2_t2853 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19718_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19720_gshared (Dictionary_2_t2851 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19720(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19720_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19722_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19722(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19722_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19724_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19724(__this, method) (( Object_t* (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19724_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19726_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19726(__this, method) (( Object_t * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19726_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19728_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19728(__this, method) (( int32_t (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_get_Count_m19728_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m19730_gshared (Dictionary_2_t2851 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19730(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m19730_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19732_gshared (Dictionary_2_t2851 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19732(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m19732_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19734_gshared (Dictionary_2_t2851 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19734(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2851 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19734_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19736_gshared (Dictionary_2_t2851 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19736(__this, ___size, method) (( void (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19736_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19738_gshared (Dictionary_2_t2851 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19738(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19738_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2853  Dictionary_2_make_pair_m19740_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19740(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2853  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m19740_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m19742_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19742(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m19742_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m19744_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19744(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m19744_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19746_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2U5BU5D_t3529* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19746(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2851 *, KeyValuePair_2U5BU5D_t3529*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19746_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m19748_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19748(__this, method) (( void (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_Resize_m19748_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19750_gshared (Dictionary_2_t2851 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19750(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2851 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m19750_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m19752_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19752(__this, method) (( void (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_Clear_m19752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19754_gshared (Dictionary_2_t2851 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19754(__this, ___key, method) (( bool (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m19754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19756_gshared (Dictionary_2_t2851 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19756(__this, ___value, method) (( bool (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m19756_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19758_gshared (Dictionary_2_t2851 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19758(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2851 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2_GetObjectData_m19758_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19760_gshared (Dictionary_2_t2851 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19760(__this, ___sender, method) (( void (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19760_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19762_gshared (Dictionary_2_t2851 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19762(__this, ___key, method) (( bool (*) (Dictionary_2_t2851 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m19762_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19764_gshared (Dictionary_2_t2851 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19764(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2851 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m19764_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2855 * Dictionary_2_get_Keys_m19766_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19766(__this, method) (( KeyCollection_t2855 * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_get_Keys_m19766_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2859 * Dictionary_2_get_Values_m19768_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19768(__this, method) (( ValueCollection_t2859 * (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_get_Values_m19768_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m19770_gshared (Dictionary_2_t2851 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19770(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19770_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m19772_gshared (Dictionary_2_t2851 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19772(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2851 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19772_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19774_gshared (Dictionary_2_t2851 * __this, KeyValuePair_2_t2853  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19774(__this, ___pair, method) (( bool (*) (Dictionary_2_t2851 *, KeyValuePair_2_t2853 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19774_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2857  Dictionary_2_GetEnumerator_m19776_gshared (Dictionary_2_t2851 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19776(__this, method) (( Enumerator_t2857  (*) (Dictionary_2_t2851 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19776_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t963  Dictionary_2_U3CCopyToU3Em__0_m19778_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19778(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19778_gshared)(__this /* static, unused */, ___key, ___value, method)
