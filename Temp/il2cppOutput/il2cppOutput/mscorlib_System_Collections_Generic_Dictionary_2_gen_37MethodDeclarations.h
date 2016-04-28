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

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2974;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2973;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t3556;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t3557;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.ICollection
struct ICollection_t1496;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t3555;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t3558;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t2979;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t2983;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m21486_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21486(__this, method) (( void (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2__ctor_m21486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21488_gshared (Dictionary_2_t2974 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21488(__this, ___comparer, method) (( void (*) (Dictionary_2_t2974 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21488_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m21490_gshared (Dictionary_2_t2974 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m21490(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2974 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21490_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21492_gshared (Dictionary_2_t2974 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21492(__this, ___capacity, method) (( void (*) (Dictionary_2_t2974 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21492_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21494_gshared (Dictionary_2_t2974 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21494(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2974 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21494_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21496_gshared (Dictionary_2_t2974 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21496(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2974 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2__ctor_m21496_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21498_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21498(__this, method) (( Object_t* (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21498_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21500_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21500(__this, method) (( Object_t* (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21500_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21502_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21502(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21502_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21504_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21504(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21504_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21506_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21506(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21506_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21508_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21508(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21508_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21510_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21510(__this, ___key, method) (( bool (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21510_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21512_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21512(__this, ___key, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21512_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21514_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21514(__this, method) (( bool (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21514_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21516_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21516(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21516_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21518_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21518(__this, method) (( bool (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21518_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21520_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2976  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21520(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2976 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21520_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21522_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2976  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21522(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2976 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21522_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21524_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3555* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21524(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3555*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21524_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21526_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2976  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21526(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2976 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21526_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21528_gshared (Dictionary_2_t2974 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21528(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21528_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21530_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21530(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21530_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21532_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21532(__this, method) (( Object_t* (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21532_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21534_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21534(__this, method) (( Object_t * (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21534_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21536_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21536(__this, method) (( int32_t (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_get_Count_m21536_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m21538_gshared (Dictionary_2_t2974 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21538(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2974 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m21538_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21540_gshared (Dictionary_2_t2974 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21540(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m21540_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21542_gshared (Dictionary_2_t2974 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21542(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2974 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21542_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21544_gshared (Dictionary_2_t2974 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21544(__this, ___size, method) (( void (*) (Dictionary_2_t2974 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21544_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21546_gshared (Dictionary_2_t2974 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21546(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21546_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2976  Dictionary_2_make_pair_m21548_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21548(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2976  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m21548_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m21550_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21550(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m21550_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m21552_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21552(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m21552_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21554_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2U5BU5D_t3555* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21554(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2974 *, KeyValuePair_2U5BU5D_t3555*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21554_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m21556_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21556(__this, method) (( void (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_Resize_m21556_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21558_gshared (Dictionary_2_t2974 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21558(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2974 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m21558_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m21560_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21560(__this, method) (( void (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_Clear_m21560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21562_gshared (Dictionary_2_t2974 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21562(__this, ___key, method) (( bool (*) (Dictionary_2_t2974 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m21562_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21564_gshared (Dictionary_2_t2974 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21564(__this, ___value, method) (( bool (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21564_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21566_gshared (Dictionary_2_t2974 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21566(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2974 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2_GetObjectData_m21566_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21568_gshared (Dictionary_2_t2974 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21568(__this, ___sender, method) (( void (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21568_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21570_gshared (Dictionary_2_t2974 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21570(__this, ___key, method) (( bool (*) (Dictionary_2_t2974 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m21570_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21572_gshared (Dictionary_2_t2974 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21572(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2974 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21572_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t2979 * Dictionary_2_get_Keys_m21574_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21574(__this, method) (( KeyCollection_t2979 * (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_get_Keys_m21574_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t2983 * Dictionary_2_get_Values_m21576_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21576(__this, method) (( ValueCollection_t2983 * (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_get_Values_m21576_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m21578_gshared (Dictionary_2_t2974 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21578(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21578_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m21580_gshared (Dictionary_2_t2974 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21580(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2974 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21580_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21582_gshared (Dictionary_2_t2974 * __this, KeyValuePair_2_t2976  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21582(__this, ___pair, method) (( bool (*) (Dictionary_2_t2974 *, KeyValuePair_2_t2976 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21582_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t2981  Dictionary_2_GetEnumerator_m21584_gshared (Dictionary_2_t2974 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21584(__this, method) (( Enumerator_t2981  (*) (Dictionary_2_t2974 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21584_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t963  Dictionary_2_U3CCopyToU3Em__0_m21586_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21586(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21586_gshared)(__this /* static, unused */, ___key, ___value, method)
