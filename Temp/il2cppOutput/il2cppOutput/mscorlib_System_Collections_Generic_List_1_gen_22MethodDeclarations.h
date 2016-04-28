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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t676;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3541;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3542;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3543;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2918;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t824;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2924;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2925;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m20752_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1__ctor_m20752(__this, method) (( void (*) (List_1_t676 *, const MethodInfo*))List_1__ctor_m20752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20753_gshared (List_1_t676 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20753(__this, ___collection, method) (( void (*) (List_1_t676 *, Object_t*, const MethodInfo*))List_1__ctor_m20753_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4172_gshared (List_1_t676 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4172(__this, ___capacity, method) (( void (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1__ctor_m4172_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m20754_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20754(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20754_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20755_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20755(__this, method) (( Object_t* (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20755_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20756_gshared (List_1_t676 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20756(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t676 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20756_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20757_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20757(__this, method) (( Object_t * (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20757_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20758_gshared (List_1_t676 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20758(__this, ___item, method) (( int32_t (*) (List_1_t676 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20758_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20759_gshared (List_1_t676 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20759(__this, ___item, method) (( bool (*) (List_1_t676 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20759_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20760_gshared (List_1_t676 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20760(__this, ___item, method) (( int32_t (*) (List_1_t676 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20760_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20761_gshared (List_1_t676 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20761(__this, ___index, ___item, method) (( void (*) (List_1_t676 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20761_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20762_gshared (List_1_t676 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20762(__this, ___item, method) (( void (*) (List_1_t676 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20762_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20763_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20763(__this, method) (( bool (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20764_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20764(__this, method) (( bool (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20764_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20765_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20765(__this, method) (( Object_t * (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20766_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20766(__this, method) (( bool (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20766_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20767_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20767(__this, method) (( bool (*) (List_1_t676 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20767_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20768_gshared (List_1_t676 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20768(__this, ___index, method) (( Object_t * (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20768_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20769_gshared (List_1_t676 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20769(__this, ___index, ___value, method) (( void (*) (List_1_t676 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20769_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m20770_gshared (List_1_t676 * __this, UICharInfo_t671  ___item, const MethodInfo* method);
#define List_1_Add_m20770(__this, ___item, method) (( void (*) (List_1_t676 *, UICharInfo_t671 , const MethodInfo*))List_1_Add_m20770_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20771_gshared (List_1_t676 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20771(__this, ___newCount, method) (( void (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20771_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20772_gshared (List_1_t676 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20772(__this, ___collection, method) (( void (*) (List_1_t676 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20772_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20773_gshared (List_1_t676 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20773(__this, ___enumerable, method) (( void (*) (List_1_t676 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20773_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20774_gshared (List_1_t676 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20774(__this, ___collection, method) (( void (*) (List_1_t676 *, Object_t*, const MethodInfo*))List_1_AddRange_m20774_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2918 * List_1_AsReadOnly_m20775_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20775(__this, method) (( ReadOnlyCollection_1_t2918 * (*) (List_1_t676 *, const MethodInfo*))List_1_AsReadOnly_m20775_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m20776_gshared (List_1_t676 * __this, UICharInfo_t671  ___item, const MethodInfo* method);
#define List_1_BinarySearch_m20776(__this, ___item, method) (( int32_t (*) (List_1_t676 *, UICharInfo_t671 , const MethodInfo*))List_1_BinarySearch_m20776_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m20777_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_Clear_m20777(__this, method) (( void (*) (List_1_t676 *, const MethodInfo*))List_1_Clear_m20777_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m20778_gshared (List_1_t676 * __this, UICharInfo_t671  ___item, const MethodInfo* method);
#define List_1_Contains_m20778(__this, ___item, method) (( bool (*) (List_1_t676 *, UICharInfo_t671 , const MethodInfo*))List_1_Contains_m20778_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20779_gshared (List_1_t676 * __this, UICharInfoU5BU5D_t824* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20779(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t676 *, UICharInfoU5BU5D_t824*, int32_t, const MethodInfo*))List_1_CopyTo_m20779_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t671  List_1_Find_m20780_gshared (List_1_t676 * __this, Predicate_1_t2924 * ___match, const MethodInfo* method);
#define List_1_Find_m20780(__this, ___match, method) (( UICharInfo_t671  (*) (List_1_t676 *, Predicate_1_t2924 *, const MethodInfo*))List_1_Find_m20780_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20781_gshared (Object_t * __this /* static, unused */, Predicate_1_t2924 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20781(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2924 *, const MethodInfo*))List_1_CheckMatch_m20781_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20782_gshared (List_1_t676 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2924 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20782(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t676 *, int32_t, int32_t, Predicate_1_t2924 *, const MethodInfo*))List_1_GetIndex_m20782_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2917  List_1_GetEnumerator_m20783_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20783(__this, method) (( Enumerator_t2917  (*) (List_1_t676 *, const MethodInfo*))List_1_GetEnumerator_m20783_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20784_gshared (List_1_t676 * __this, UICharInfo_t671  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20784(__this, ___item, method) (( int32_t (*) (List_1_t676 *, UICharInfo_t671 , const MethodInfo*))List_1_IndexOf_m20784_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20785_gshared (List_1_t676 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20785(__this, ___start, ___delta, method) (( void (*) (List_1_t676 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20785_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20786_gshared (List_1_t676 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20786(__this, ___index, method) (( void (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20786_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20787_gshared (List_1_t676 * __this, int32_t ___index, UICharInfo_t671  ___item, const MethodInfo* method);
#define List_1_Insert_m20787(__this, ___index, ___item, method) (( void (*) (List_1_t676 *, int32_t, UICharInfo_t671 , const MethodInfo*))List_1_Insert_m20787_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20788_gshared (List_1_t676 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20788(__this, ___collection, method) (( void (*) (List_1_t676 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20788_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m20789_gshared (List_1_t676 * __this, UICharInfo_t671  ___item, const MethodInfo* method);
#define List_1_Remove_m20789(__this, ___item, method) (( bool (*) (List_1_t676 *, UICharInfo_t671 , const MethodInfo*))List_1_Remove_m20789_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20790_gshared (List_1_t676 * __this, Predicate_1_t2924 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20790(__this, ___match, method) (( int32_t (*) (List_1_t676 *, Predicate_1_t2924 *, const MethodInfo*))List_1_RemoveAll_m20790_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20791_gshared (List_1_t676 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20791(__this, ___index, method) (( void (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20791_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m20792_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_Reverse_m20792(__this, method) (( void (*) (List_1_t676 *, const MethodInfo*))List_1_Reverse_m20792_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m20793_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_Sort_m20793(__this, method) (( void (*) (List_1_t676 *, const MethodInfo*))List_1_Sort_m20793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20794_gshared (List_1_t676 * __this, Comparison_1_t2925 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20794(__this, ___comparison, method) (( void (*) (List_1_t676 *, Comparison_1_t2925 *, const MethodInfo*))List_1_Sort_m20794_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t824* List_1_ToArray_m20795_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_ToArray_m20795(__this, method) (( UICharInfoU5BU5D_t824* (*) (List_1_t676 *, const MethodInfo*))List_1_ToArray_m20795_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20796_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20796(__this, method) (( void (*) (List_1_t676 *, const MethodInfo*))List_1_TrimExcess_m20796_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20797_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20797(__this, method) (( int32_t (*) (List_1_t676 *, const MethodInfo*))List_1_get_Capacity_m20797_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20798_gshared (List_1_t676 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20798(__this, ___value, method) (( void (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20798_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20799_gshared (List_1_t676 * __this, const MethodInfo* method);
#define List_1_get_Count_m20799(__this, method) (( int32_t (*) (List_1_t676 *, const MethodInfo*))List_1_get_Count_m20799_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t671  List_1_get_Item_m20800_gshared (List_1_t676 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20800(__this, ___index, method) (( UICharInfo_t671  (*) (List_1_t676 *, int32_t, const MethodInfo*))List_1_get_Item_m20800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20801_gshared (List_1_t676 * __this, int32_t ___index, UICharInfo_t671  ___value, const MethodInfo* method);
#define List_1_set_Item_m20801(__this, ___index, ___value, method) (( void (*) (List_1_t676 *, int32_t, UICharInfo_t671 , const MethodInfo*))List_1_set_Item_m20801_gshared)(__this, ___index, ___value, method)
