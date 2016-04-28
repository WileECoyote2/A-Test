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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2937;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2475;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t3548;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3549;
// System.Collections.ICollection
struct ICollection_t1496;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3547;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t3550;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2942;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2946;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m21046_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21046(__this, method) (( void (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2__ctor_m21046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21048_gshared (Dictionary_2_t2937 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21048(__this, ___comparer, method) (( void (*) (Dictionary_2_t2937 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21048_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21050_gshared (Dictionary_2_t2937 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21050(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2937 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21050_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21052_gshared (Dictionary_2_t2937 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21052(__this, ___capacity, method) (( void (*) (Dictionary_2_t2937 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21052_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21054_gshared (Dictionary_2_t2937 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21054(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2937 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21054_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21056_gshared (Dictionary_2_t2937 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21056(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2937 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2__ctor_m21056_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21058_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21058(__this, method) (( Object_t* (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21058_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21060_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21060(__this, method) (( Object_t* (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21060_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21062_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21062(__this, method) (( Object_t * (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21062_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21064_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21064(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21064_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21066_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21066(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2937 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21066_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21068_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21068(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2937 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21068_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21070_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21070(__this, ___key, method) (( bool (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21070_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21072_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21072(__this, ___key, method) (( void (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21072_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21074_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21074(__this, method) (( bool (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21074_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21076_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21076(__this, method) (( Object_t * (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21078_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21078(__this, method) (( bool (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21078_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21080_gshared (Dictionary_2_t2937 * __this, KeyValuePair_2_t2939  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21080(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2937 *, KeyValuePair_2_t2939 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21080_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21082_gshared (Dictionary_2_t2937 * __this, KeyValuePair_2_t2939  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21082(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2937 *, KeyValuePair_2_t2939 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21082_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21084_gshared (Dictionary_2_t2937 * __this, KeyValuePair_2U5BU5D_t3547* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21084(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2937 *, KeyValuePair_2U5BU5D_t3547*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21084_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21086_gshared (Dictionary_2_t2937 * __this, KeyValuePair_2_t2939  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21086(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2937 *, KeyValuePair_2_t2939 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21086_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21088_gshared (Dictionary_2_t2937 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21088(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2937 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21088_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21090_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21090(__this, method) (( Object_t * (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21090_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21092_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21092(__this, method) (( Object_t* (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21092_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21094_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21094(__this, method) (( Object_t * (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21094_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21096_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21096(__this, method) (( int32_t (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_get_Count_m21096_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m21098_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21098(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21098_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21100_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21100(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2937 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m21100_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21102_gshared (Dictionary_2_t2937 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21102(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2937 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21102_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21104_gshared (Dictionary_2_t2937 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21104(__this, ___size, method) (( void (*) (Dictionary_2_t2937 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21104_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21106_gshared (Dictionary_2_t2937 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21106(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2937 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21106_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2939  Dictionary_2_make_pair_m21108_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21108(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2939  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m21108_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21110_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21110(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m21110_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m21112_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21112(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m21112_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21114_gshared (Dictionary_2_t2937 * __this, KeyValuePair_2U5BU5D_t3547* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21114(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2937 *, KeyValuePair_2U5BU5D_t3547*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21114_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m21116_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21116(__this, method) (( void (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_Resize_m21116_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21118_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21118(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2937 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m21118_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m21120_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21120(__this, method) (( void (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_Clear_m21120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21122_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21122(__this, ___key, method) (( bool (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21122_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21124_gshared (Dictionary_2_t2937 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21124(__this, ___value, method) (( bool (*) (Dictionary_2_t2937 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m21124_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21126_gshared (Dictionary_2_t2937 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21126(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2937 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2_GetObjectData_m21126_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21128_gshared (Dictionary_2_t2937 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21128(__this, ___sender, method) (( void (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21128_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21130_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21130(__this, ___key, method) (( bool (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21130_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21132_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21132(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2937 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m21132_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2942 * Dictionary_2_get_Keys_m21134_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21134(__this, method) (( KeyCollection_t2942 * (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_get_Keys_m21134_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2946 * Dictionary_2_get_Values_m21136_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21136(__this, method) (( ValueCollection_t2946 * (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_get_Values_m21136_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21138_gshared (Dictionary_2_t2937 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21138(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21138_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m21140_gshared (Dictionary_2_t2937 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21140(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2937 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21140_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21142_gshared (Dictionary_2_t2937 * __this, KeyValuePair_2_t2939  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21142(__this, ___pair, method) (( bool (*) (Dictionary_2_t2937 *, KeyValuePair_2_t2939 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21142_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2944  Dictionary_2_GetEnumerator_m21144_gshared (Dictionary_2_t2937 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21144(__this, method) (( Enumerator_t2944  (*) (Dictionary_2_t2937 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21144_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t963  Dictionary_2_U3CCopyToU3Em__0_m21146_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21146(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21146_gshared)(__this /* static, unused */, ___key, ___value, method)
