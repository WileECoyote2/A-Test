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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t3050;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2475;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct IDictionary_2_t3586;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>
struct ICollection_1_t3587;
// System.Collections.ICollection
struct ICollection_t1496;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3585;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3588;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t3055;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t3059;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m22417_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m22417(__this, method) (( void (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2__ctor_m22417_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22419_gshared (Dictionary_2_t3050 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22419(__this, ___comparer, method) (( void (*) (Dictionary_2_t3050 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22419_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22421_gshared (Dictionary_2_t3050 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m22421(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3050 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22421_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22423_gshared (Dictionary_2_t3050 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22423(__this, ___capacity, method) (( void (*) (Dictionary_2_t3050 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22423_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22425_gshared (Dictionary_2_t3050 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22425(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3050 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22425_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22427_gshared (Dictionary_2_t3050 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22427(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3050 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2__ctor_m22427_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22429_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22429(__this, method) (( Object_t* (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22429_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22431_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22431(__this, method) (( Object_t* (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22431_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m22433_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22433(__this, method) (( Object_t * (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m22433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22435_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22435(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22435_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22437_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22437(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3050 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22437_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22439_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22439(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3050 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22439_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m22441_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m22441(__this, ___key, method) (( bool (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m22441_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22443_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22443(__this, ___key, method) (( void (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22443_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22445_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22445(__this, method) (( bool (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22445_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22447_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22447(__this, method) (( Object_t * (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22449_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22449(__this, method) (( bool (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22449_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22451_gshared (Dictionary_2_t3050 * __this, KeyValuePair_2_t3052  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22451(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3050 *, KeyValuePair_2_t3052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22451_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22453_gshared (Dictionary_2_t3050 * __this, KeyValuePair_2_t3052  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22453(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3050 *, KeyValuePair_2_t3052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22453_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22455_gshared (Dictionary_2_t3050 * __this, KeyValuePair_2U5BU5D_t3585* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22455(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3050 *, KeyValuePair_2U5BU5D_t3585*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22455_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22457_gshared (Dictionary_2_t3050 * __this, KeyValuePair_2_t3052  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22457(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3050 *, KeyValuePair_2_t3052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22457_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22459_gshared (Dictionary_2_t3050 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22459(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3050 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22459_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22461_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22461(__this, method) (( Object_t * (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22461_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22463_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22463(__this, method) (( Object_t* (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22463_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22465_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22465(__this, method) (( Object_t * (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22467_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22467(__this, method) (( int32_t (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_get_Count_m22467_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m22469_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22469(__this, ___key, method) (( int32_t (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m22469_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22471_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22471(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3050 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m22471_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22473_gshared (Dictionary_2_t3050 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22473(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3050 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22473_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22475_gshared (Dictionary_2_t3050 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22475(__this, ___size, method) (( void (*) (Dictionary_2_t3050 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22475_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22477_gshared (Dictionary_2_t3050 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22477(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3050 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22477_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3052  Dictionary_2_make_pair_m22479_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22479(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3052  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m22479_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22481_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22481(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m22481_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m22483_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22483(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m22483_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22485_gshared (Dictionary_2_t3050 * __this, KeyValuePair_2U5BU5D_t3585* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22485(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3050 *, KeyValuePair_2U5BU5D_t3585*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22485_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m22487_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22487(__this, method) (( void (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_Resize_m22487_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22489_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22489(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3050 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m22489_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m22491_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22491(__this, method) (( void (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_Clear_m22491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22493_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22493(__this, ___key, method) (( bool (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m22493_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22495_gshared (Dictionary_2_t3050 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22495(__this, ___value, method) (( bool (*) (Dictionary_2_t3050 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m22495_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22497_gshared (Dictionary_2_t3050 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22497(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3050 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2_GetObjectData_m22497_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22499_gshared (Dictionary_2_t3050 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22499(__this, ___sender, method) (( void (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22499_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22501_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22501(__this, ___key, method) (( bool (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m22501_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22503_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22503(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3050 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m22503_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t3055 * Dictionary_2_get_Keys_m22505_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22505(__this, method) (( KeyCollection_t3055 * (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_get_Keys_m22505_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t3059 * Dictionary_2_get_Values_m22507_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22507(__this, method) (( ValueCollection_t3059 * (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_get_Values_m22507_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22509_gshared (Dictionary_2_t3050 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22509(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22509_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m22511_gshared (Dictionary_2_t3050 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22511(__this, ___value, method) (( int32_t (*) (Dictionary_2_t3050 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22511_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22513_gshared (Dictionary_2_t3050 * __this, KeyValuePair_2_t3052  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22513(__this, ___pair, method) (( bool (*) (Dictionary_2_t3050 *, KeyValuePair_2_t3052 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22513_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t3057  Dictionary_2_GetEnumerator_m22515_gshared (Dictionary_2_t3050 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22515(__this, method) (( Enumerator_t3057  (*) (Dictionary_2_t3050 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22515_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t963  Dictionary_2_U3CCopyToU3Em__0_m22517_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22517(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22517_gshared)(__this /* static, unused */, ___key, ___value, method)
