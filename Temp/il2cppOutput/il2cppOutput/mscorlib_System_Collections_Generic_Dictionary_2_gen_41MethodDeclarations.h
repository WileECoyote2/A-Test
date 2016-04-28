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

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3018;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2475;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t3579;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t3580;
// System.Collections.ICollection
struct ICollection_t1496;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t3578;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t3581;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t3021;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t3025;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m22125_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m22125(__this, method) (( void (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2__ctor_m22125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22127_gshared (Dictionary_2_t3018 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22127(__this, ___comparer, method) (( void (*) (Dictionary_2_t3018 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22127_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m22129_gshared (Dictionary_2_t3018 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m22129(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3018 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22129_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m22131_gshared (Dictionary_2_t3018 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m22131(__this, ___capacity, method) (( void (*) (Dictionary_2_t3018 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m22131_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m22133_gshared (Dictionary_2_t3018 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m22133(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3018 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m22133_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m22135_gshared (Dictionary_2_t3018 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m22135(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3018 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2__ctor_m22135_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22137_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22137(__this, method) (( Object_t* (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22137_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22139_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22139(__this, method) (( Object_t* (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22139_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m22141_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22141(__this, method) (( Object_t * (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m22141_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m22143_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22143(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m22143_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m22145_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22145(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3018 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m22145_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m22147_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m22147(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3018 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m22147_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m22149_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m22149(__this, ___key, method) (( bool (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m22149_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m22151_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m22151(__this, ___key, method) (( void (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m22151_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22153_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22153(__this, method) (( bool (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22153_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22155_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22155(__this, method) (( Object_t * (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22157_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22157(__this, method) (( bool (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22157_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22159_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2_t2995  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22159(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3018 *, KeyValuePair_2_t2995 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22159_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22161_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2_t2995  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22161(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3018 *, KeyValuePair_2_t2995 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22161_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22163_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2U5BU5D_t3578* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22163(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3018 *, KeyValuePair_2U5BU5D_t3578*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22163_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22165_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2_t2995  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22165(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3018 *, KeyValuePair_2_t2995 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22165_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m22167_gshared (Dictionary_2_t3018 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22167(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3018 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m22167_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22169_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22169(__this, method) (( Object_t * (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22169_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22171_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22171(__this, method) (( Object_t* (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22171_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22173_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22173(__this, method) (( Object_t * (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22173_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m22175_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m22175(__this, method) (( int32_t (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_get_Count_m22175_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2529  Dictionary_2_get_Item_m22177_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m22177(__this, ___key, method) (( KeyValuePair_2_t2529  (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m22177_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m22179_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m22179(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3018 *, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_set_Item_m22179_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m22181_gshared (Dictionary_2_t3018 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m22181(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3018 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m22181_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m22183_gshared (Dictionary_2_t3018 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m22183(__this, ___size, method) (( void (*) (Dictionary_2_t3018 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m22183_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m22185_gshared (Dictionary_2_t3018 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m22185(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3018 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m22185_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2995  Dictionary_2_make_pair_m22187_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m22187(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2995  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_make_pair_m22187_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m22189_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m22189(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_pick_key_m22189_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2529  Dictionary_2_pick_value_m22191_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m22191(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2529  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_pick_value_m22191_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m22193_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2U5BU5D_t3578* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m22193(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3018 *, KeyValuePair_2U5BU5D_t3578*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m22193_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m22195_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m22195(__this, method) (( void (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_Resize_m22195_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m22197_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m22197(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3018 *, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_Add_m22197_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m22199_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m22199(__this, method) (( void (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_Clear_m22199_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m22201_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m22201(__this, ___key, method) (( bool (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m22201_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m22203_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m22203(__this, ___value, method) (( bool (*) (Dictionary_2_t3018 *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_ContainsValue_m22203_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m22205_gshared (Dictionary_2_t3018 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m22205(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3018 *, SerializationInfo_t845 *, StreamingContext_t846 , const MethodInfo*))Dictionary_2_GetObjectData_m22205_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m22207_gshared (Dictionary_2_t3018 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m22207(__this, ___sender, method) (( void (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m22207_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m22209_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m22209(__this, ___key, method) (( bool (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m22209_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m22211_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, KeyValuePair_2_t2529 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m22211(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3018 *, Object_t *, KeyValuePair_2_t2529 *, const MethodInfo*))Dictionary_2_TryGetValue_m22211_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t3021 * Dictionary_2_get_Keys_m22213_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m22213(__this, method) (( KeyCollection_t3021 * (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_get_Keys_m22213_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t3025 * Dictionary_2_get_Values_m22215_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m22215(__this, method) (( ValueCollection_t3025 * (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_get_Values_m22215_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m22217_gshared (Dictionary_2_t3018 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m22217(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m22217_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2529  Dictionary_2_ToTValue_m22219_gshared (Dictionary_2_t3018 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m22219(__this, ___value, method) (( KeyValuePair_2_t2529  (*) (Dictionary_2_t3018 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m22219_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m22221_gshared (Dictionary_2_t3018 * __this, KeyValuePair_2_t2995  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m22221(__this, ___pair, method) (( bool (*) (Dictionary_2_t3018 *, KeyValuePair_2_t2995 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m22221_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3023  Dictionary_2_GetEnumerator_m22223_gshared (Dictionary_2_t3018 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m22223(__this, method) (( Enumerator_t3023  (*) (Dictionary_2_t3018 *, const MethodInfo*))Dictionary_2_GetEnumerator_m22223_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t963  Dictionary_2_U3CCopyToU3Em__0_m22225_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2529  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m22225(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t963  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2529 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m22225_gshared)(__this /* static, unused */, ___key, ___value, method)
