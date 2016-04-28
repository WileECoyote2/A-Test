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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t677;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3544;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3545;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t1292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2928;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t825;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2934;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2935;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m20901_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1__ctor_m20901(__this, method) (( void (*) (List_1_t677 *, const MethodInfo*))List_1__ctor_m20901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20902_gshared (List_1_t677 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20902(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, const MethodInfo*))List_1__ctor_m20902_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4173_gshared (List_1_t677 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4173(__this, ___capacity, method) (( void (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1__ctor_m4173_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m20903_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20903(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20903_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20904_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20904(__this, method) (( Object_t* (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20904_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20905_gshared (List_1_t677 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20905(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t677 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20905_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20906_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20906(__this, method) (( Object_t * (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20906_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20907_gshared (List_1_t677 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20907(__this, ___item, method) (( int32_t (*) (List_1_t677 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20907_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20908_gshared (List_1_t677 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20908(__this, ___item, method) (( bool (*) (List_1_t677 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20908_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20909_gshared (List_1_t677 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20909(__this, ___item, method) (( int32_t (*) (List_1_t677 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20909_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20910_gshared (List_1_t677 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20910(__this, ___index, ___item, method) (( void (*) (List_1_t677 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20910_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20911_gshared (List_1_t677 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20911(__this, ___item, method) (( void (*) (List_1_t677 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20911_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20912_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20912(__this, method) (( bool (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20913_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20913(__this, method) (( bool (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20913_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20914_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20914(__this, method) (( Object_t * (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20914_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20915_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20915(__this, method) (( bool (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20915_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20916_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20916(__this, method) (( bool (*) (List_1_t677 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20916_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20917_gshared (List_1_t677 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20917(__this, ___index, method) (( Object_t * (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20917_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20918_gshared (List_1_t677 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20918(__this, ___index, ___value, method) (( void (*) (List_1_t677 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20918_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m20919_gshared (List_1_t677 * __this, UILineInfo_t672  ___item, const MethodInfo* method);
#define List_1_Add_m20919(__this, ___item, method) (( void (*) (List_1_t677 *, UILineInfo_t672 , const MethodInfo*))List_1_Add_m20919_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20920_gshared (List_1_t677 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20920(__this, ___newCount, method) (( void (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20920_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20921_gshared (List_1_t677 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20921(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20921_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20922_gshared (List_1_t677 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20922(__this, ___enumerable, method) (( void (*) (List_1_t677 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20922_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20923_gshared (List_1_t677 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20923(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, const MethodInfo*))List_1_AddRange_m20923_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2928 * List_1_AsReadOnly_m20924_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20924(__this, method) (( ReadOnlyCollection_1_t2928 * (*) (List_1_t677 *, const MethodInfo*))List_1_AsReadOnly_m20924_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m20925_gshared (List_1_t677 * __this, UILineInfo_t672  ___item, const MethodInfo* method);
#define List_1_BinarySearch_m20925(__this, ___item, method) (( int32_t (*) (List_1_t677 *, UILineInfo_t672 , const MethodInfo*))List_1_BinarySearch_m20925_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m20926_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_Clear_m20926(__this, method) (( void (*) (List_1_t677 *, const MethodInfo*))List_1_Clear_m20926_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m20927_gshared (List_1_t677 * __this, UILineInfo_t672  ___item, const MethodInfo* method);
#define List_1_Contains_m20927(__this, ___item, method) (( bool (*) (List_1_t677 *, UILineInfo_t672 , const MethodInfo*))List_1_Contains_m20927_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20928_gshared (List_1_t677 * __this, UILineInfoU5BU5D_t825* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20928(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t677 *, UILineInfoU5BU5D_t825*, int32_t, const MethodInfo*))List_1_CopyTo_m20928_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t672  List_1_Find_m20929_gshared (List_1_t677 * __this, Predicate_1_t2934 * ___match, const MethodInfo* method);
#define List_1_Find_m20929(__this, ___match, method) (( UILineInfo_t672  (*) (List_1_t677 *, Predicate_1_t2934 *, const MethodInfo*))List_1_Find_m20929_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20930_gshared (Object_t * __this /* static, unused */, Predicate_1_t2934 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20930(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2934 *, const MethodInfo*))List_1_CheckMatch_m20930_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20931_gshared (List_1_t677 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2934 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20931(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t677 *, int32_t, int32_t, Predicate_1_t2934 *, const MethodInfo*))List_1_GetIndex_m20931_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2927  List_1_GetEnumerator_m20932_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20932(__this, method) (( Enumerator_t2927  (*) (List_1_t677 *, const MethodInfo*))List_1_GetEnumerator_m20932_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20933_gshared (List_1_t677 * __this, UILineInfo_t672  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20933(__this, ___item, method) (( int32_t (*) (List_1_t677 *, UILineInfo_t672 , const MethodInfo*))List_1_IndexOf_m20933_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20934_gshared (List_1_t677 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20934(__this, ___start, ___delta, method) (( void (*) (List_1_t677 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20934_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20935_gshared (List_1_t677 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20935(__this, ___index, method) (( void (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20935_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20936_gshared (List_1_t677 * __this, int32_t ___index, UILineInfo_t672  ___item, const MethodInfo* method);
#define List_1_Insert_m20936(__this, ___index, ___item, method) (( void (*) (List_1_t677 *, int32_t, UILineInfo_t672 , const MethodInfo*))List_1_Insert_m20936_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20937_gshared (List_1_t677 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20937(__this, ___collection, method) (( void (*) (List_1_t677 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20937_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m20938_gshared (List_1_t677 * __this, UILineInfo_t672  ___item, const MethodInfo* method);
#define List_1_Remove_m20938(__this, ___item, method) (( bool (*) (List_1_t677 *, UILineInfo_t672 , const MethodInfo*))List_1_Remove_m20938_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20939_gshared (List_1_t677 * __this, Predicate_1_t2934 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20939(__this, ___match, method) (( int32_t (*) (List_1_t677 *, Predicate_1_t2934 *, const MethodInfo*))List_1_RemoveAll_m20939_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20940_gshared (List_1_t677 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20940(__this, ___index, method) (( void (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20940_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m20941_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_Reverse_m20941(__this, method) (( void (*) (List_1_t677 *, const MethodInfo*))List_1_Reverse_m20941_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m20942_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_Sort_m20942(__this, method) (( void (*) (List_1_t677 *, const MethodInfo*))List_1_Sort_m20942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20943_gshared (List_1_t677 * __this, Comparison_1_t2935 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20943(__this, ___comparison, method) (( void (*) (List_1_t677 *, Comparison_1_t2935 *, const MethodInfo*))List_1_Sort_m20943_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t825* List_1_ToArray_m20944_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_ToArray_m20944(__this, method) (( UILineInfoU5BU5D_t825* (*) (List_1_t677 *, const MethodInfo*))List_1_ToArray_m20944_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20945_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20945(__this, method) (( void (*) (List_1_t677 *, const MethodInfo*))List_1_TrimExcess_m20945_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20946_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20946(__this, method) (( int32_t (*) (List_1_t677 *, const MethodInfo*))List_1_get_Capacity_m20946_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20947_gshared (List_1_t677 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20947(__this, ___value, method) (( void (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20947_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20948_gshared (List_1_t677 * __this, const MethodInfo* method);
#define List_1_get_Count_m20948(__this, method) (( int32_t (*) (List_1_t677 *, const MethodInfo*))List_1_get_Count_m20948_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t672  List_1_get_Item_m20949_gshared (List_1_t677 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20949(__this, ___index, method) (( UILineInfo_t672  (*) (List_1_t677 *, int32_t, const MethodInfo*))List_1_get_Item_m20949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20950_gshared (List_1_t677 * __this, int32_t ___index, UILineInfo_t672  ___value, const MethodInfo* method);
#define List_1_set_Item_m20950(__this, ___index, ___value, method) (( void (*) (List_1_t677 *, int32_t, UILineInfo_t672 , const MethodInfo*))List_1_set_Item_m20950_gshared)(__this, ___index, ___value, method)
