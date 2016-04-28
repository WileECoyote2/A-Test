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

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t461;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>
struct IEnumerable_1_t3496;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>
struct IEnumerator_1_t3497;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>
struct ICollection_1_t3498;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RaycastHit>
struct ReadOnlyCollection_1_t2707;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t278;
// System.Predicate`1<UnityEngine.RaycastHit>
struct Predicate_1_t2714;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t1140;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor()
extern "C" void List_1__ctor_m2122_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1__ctor_m2122(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1__ctor_m2122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m17606_gshared (List_1_t461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m17606(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1__ctor_m17606_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17607_gshared (List_1_t461 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17607(__this, ___capacity, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1__ctor_m17607_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.cctor()
extern "C" void List_1__cctor_m17608_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17608(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17608_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17609_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17609(__this, method) (( Object_t* (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17609_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17610_gshared (List_1_t461 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17610(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t461 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17610_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17611_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17611(__this, method) (( Object_t * (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17611_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17612_gshared (List_1_t461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17612(__this, ___item, method) (( int32_t (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17612_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17613_gshared (List_1_t461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17613(__this, ___item, method) (( bool (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17613_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17614_gshared (List_1_t461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17614(__this, ___item, method) (( int32_t (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17614_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17615_gshared (List_1_t461 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17615(__this, ___index, ___item, method) (( void (*) (List_1_t461 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17615_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17616_gshared (List_1_t461 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17616(__this, ___item, method) (( void (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17616_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17617_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17617(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17618_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17618(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17618_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17619_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17619(__this, method) (( Object_t * (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17620_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17620(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17621_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17621(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17621_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17622_gshared (List_1_t461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17622(__this, ___index, method) (( Object_t * (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17622_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17623_gshared (List_1_t461 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17623(__this, ___index, ___value, method) (( void (*) (List_1_t461 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17623_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Add(T)
extern "C" void List_1_Add_m17624_gshared (List_1_t461 * __this, RaycastHit_t279  ___item, const MethodInfo* method);
#define List_1_Add_m17624(__this, ___item, method) (( void (*) (List_1_t461 *, RaycastHit_t279 , const MethodInfo*))List_1_Add_m17624_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17625_gshared (List_1_t461 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17625(__this, ___newCount, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17625_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17626_gshared (List_1_t461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17626(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17626_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17627_gshared (List_1_t461 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17627(__this, ___enumerable, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17627_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17628_gshared (List_1_t461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17628(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_AddRange_m17628_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2707 * List_1_AsReadOnly_m17629_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17629(__this, method) (( ReadOnlyCollection_1_t2707 * (*) (List_1_t461 *, const MethodInfo*))List_1_AsReadOnly_m17629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m17630_gshared (List_1_t461 * __this, RaycastHit_t279  ___item, const MethodInfo* method);
#define List_1_BinarySearch_m17630(__this, ___item, method) (( int32_t (*) (List_1_t461 *, RaycastHit_t279 , const MethodInfo*))List_1_BinarySearch_m17630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Clear()
extern "C" void List_1_Clear_m17631_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_Clear_m17631(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_Clear_m17631_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Contains(T)
extern "C" bool List_1_Contains_m17632_gshared (List_1_t461 * __this, RaycastHit_t279  ___item, const MethodInfo* method);
#define List_1_Contains_m17632(__this, ___item, method) (( bool (*) (List_1_t461 *, RaycastHit_t279 , const MethodInfo*))List_1_Contains_m17632_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17633_gshared (List_1_t461 * __this, RaycastHitU5BU5D_t278* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17633(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t461 *, RaycastHitU5BU5D_t278*, int32_t, const MethodInfo*))List_1_CopyTo_m17633_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Find(System.Predicate`1<T>)
extern "C" RaycastHit_t279  List_1_Find_m17634_gshared (List_1_t461 * __this, Predicate_1_t2714 * ___match, const MethodInfo* method);
#define List_1_Find_m17634(__this, ___match, method) (( RaycastHit_t279  (*) (List_1_t461 *, Predicate_1_t2714 *, const MethodInfo*))List_1_Find_m17634_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17635_gshared (Object_t * __this /* static, unused */, Predicate_1_t2714 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17635(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2714 *, const MethodInfo*))List_1_CheckMatch_m17635_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17636_gshared (List_1_t461 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2714 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17636(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t461 *, int32_t, int32_t, Predicate_1_t2714 *, const MethodInfo*))List_1_GetIndex_m17636_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RaycastHit>::GetEnumerator()
extern "C" Enumerator_t2706  List_1_GetEnumerator_m17637_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17637(__this, method) (( Enumerator_t2706  (*) (List_1_t461 *, const MethodInfo*))List_1_GetEnumerator_m17637_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17638_gshared (List_1_t461 * __this, RaycastHit_t279  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17638(__this, ___item, method) (( int32_t (*) (List_1_t461 *, RaycastHit_t279 , const MethodInfo*))List_1_IndexOf_m17638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17639_gshared (List_1_t461 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17639(__this, ___start, ___delta, method) (( void (*) (List_1_t461 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17639_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17640_gshared (List_1_t461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17640(__this, ___index, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17640_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17641_gshared (List_1_t461 * __this, int32_t ___index, RaycastHit_t279  ___item, const MethodInfo* method);
#define List_1_Insert_m17641(__this, ___index, ___item, method) (( void (*) (List_1_t461 *, int32_t, RaycastHit_t279 , const MethodInfo*))List_1_Insert_m17641_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17642_gshared (List_1_t461 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17642(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17642_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Remove(T)
extern "C" bool List_1_Remove_m17643_gshared (List_1_t461 * __this, RaycastHit_t279  ___item, const MethodInfo* method);
#define List_1_Remove_m17643(__this, ___item, method) (( bool (*) (List_1_t461 *, RaycastHit_t279 , const MethodInfo*))List_1_Remove_m17643_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17644_gshared (List_1_t461 * __this, Predicate_1_t2714 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17644(__this, ___match, method) (( int32_t (*) (List_1_t461 *, Predicate_1_t2714 *, const MethodInfo*))List_1_RemoveAll_m17644_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17645_gshared (List_1_t461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17645(__this, ___index, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17645_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Reverse()
extern "C" void List_1_Reverse_m17646_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_Reverse_m17646(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_Reverse_m17646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Sort()
extern "C" void List_1_Sort_m17647_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_Sort_m17647(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_Sort_m17647_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17648_gshared (List_1_t461 * __this, Comparison_1_t1140 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17648(__this, ___comparison, method) (( void (*) (List_1_t461 *, Comparison_1_t1140 *, const MethodInfo*))List_1_Sort_m17648_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RaycastHit>::ToArray()
extern "C" RaycastHitU5BU5D_t278* List_1_ToArray_m2123_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_ToArray_m2123(__this, method) (( RaycastHitU5BU5D_t278* (*) (List_1_t461 *, const MethodInfo*))List_1_ToArray_m2123_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::TrimExcess()
extern "C" void List_1_TrimExcess_m17649_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17649(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_TrimExcess_m17649_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17650_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17650(__this, method) (( int32_t (*) (List_1_t461 *, const MethodInfo*))List_1_get_Capacity_m17650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17651_gshared (List_1_t461 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17651(__this, ___value, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17651_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Count()
extern "C" int32_t List_1_get_Count_m17652_gshared (List_1_t461 * __this, const MethodInfo* method);
#define List_1_get_Count_m17652(__this, method) (( int32_t (*) (List_1_t461 *, const MethodInfo*))List_1_get_Count_m17652_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
extern "C" RaycastHit_t279  List_1_get_Item_m17653_gshared (List_1_t461 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17653(__this, ___index, method) (( RaycastHit_t279  (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_get_Item_m17653_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17654_gshared (List_1_t461 * __this, int32_t ___index, RaycastHit_t279  ___value, const MethodInfo* method);
#define List_1_set_Item_m17654(__this, ___index, ___value, method) (( void (*) (List_1_t461 *, int32_t, RaycastHit_t279 , const MethodInfo*))List_1_set_Item_m17654_gshared)(__this, ___index, ___value, method)
