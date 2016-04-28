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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t470;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t3508;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3449;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3470;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2753;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2756;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2757;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m2173_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1__ctor_m2173(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1__ctor_m2173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18287_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18287(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1__ctor_m18287_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18288_gshared (List_1_t470 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18288(__this, ___capacity, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1__ctor_m18288_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m18289_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18289(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18289_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18290_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18290(__this, method) (( Object_t* (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18290_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18291_gshared (List_1_t470 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18291(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t470 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18291_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18292_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18292(__this, method) (( Object_t * (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18293_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18293(__this, ___item, method) (( int32_t (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18293_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18294_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18294(__this, ___item, method) (( bool (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18294_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18295_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18295(__this, ___item, method) (( int32_t (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18295_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18296_gshared (List_1_t470 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18296(__this, ___index, ___item, method) (( void (*) (List_1_t470 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18296_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18297_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18297(__this, ___item, method) (( void (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18297_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18298_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18298(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18298_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18299_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18299(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18299_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18300_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18300(__this, method) (( Object_t * (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18300_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18301_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18301(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18301_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18302_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18302(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18302_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18303_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18303(__this, ___index, method) (( Object_t * (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18303_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18304_gshared (List_1_t470 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18304(__this, ___index, ___value, method) (( void (*) (List_1_t470 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18304_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m18305_gshared (List_1_t470 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m18305(__this, ___item, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_Add_m18305_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18306_gshared (List_1_t470 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18306(__this, ___newCount, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18306_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18307_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18307(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18307_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18308_gshared (List_1_t470 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18308(__this, ___enumerable, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18308_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18309_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18309(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddRange_m18309_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2753 * List_1_AsReadOnly_m18310_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18310(__this, method) (( ReadOnlyCollection_1_t2753 * (*) (List_1_t470 *, const MethodInfo*))List_1_AsReadOnly_m18310_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m18311_gshared (List_1_t470 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_BinarySearch_m18311(__this, ___item, method) (( int32_t (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_BinarySearch_m18311_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m18312_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Clear_m18312(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Clear_m18312_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m18313_gshared (List_1_t470 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m18313(__this, ___item, method) (( bool (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_Contains_m18313_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18314_gshared (List_1_t470 * __this, Int32U5BU5D_t16* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18314(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t470 *, Int32U5BU5D_t16*, int32_t, const MethodInfo*))List_1_CopyTo_m18314_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m18315_gshared (List_1_t470 * __this, Predicate_1_t2756 * ___match, const MethodInfo* method);
#define List_1_Find_m18315(__this, ___match, method) (( int32_t (*) (List_1_t470 *, Predicate_1_t2756 *, const MethodInfo*))List_1_Find_m18315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18316_gshared (Object_t * __this /* static, unused */, Predicate_1_t2756 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18316(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2756 *, const MethodInfo*))List_1_CheckMatch_m18316_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18317_gshared (List_1_t470 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2756 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18317(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t470 *, int32_t, int32_t, Predicate_1_t2756 *, const MethodInfo*))List_1_GetIndex_m18317_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2752  List_1_GetEnumerator_m18318_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18318(__this, method) (( Enumerator_t2752  (*) (List_1_t470 *, const MethodInfo*))List_1_GetEnumerator_m18318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18319_gshared (List_1_t470 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m18319(__this, ___item, method) (( int32_t (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_IndexOf_m18319_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18320_gshared (List_1_t470 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18320(__this, ___start, ___delta, method) (( void (*) (List_1_t470 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18320_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18321_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18321(__this, ___index, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18321_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18322_gshared (List_1_t470 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m18322(__this, ___index, ___item, method) (( void (*) (List_1_t470 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m18322_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18323_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18323(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18323_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m18324_gshared (List_1_t470 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m18324(__this, ___item, method) (( bool (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_Remove_m18324_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18325_gshared (List_1_t470 * __this, Predicate_1_t2756 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18325(__this, ___match, method) (( int32_t (*) (List_1_t470 *, Predicate_1_t2756 *, const MethodInfo*))List_1_RemoveAll_m18325_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18326_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18326(__this, ___index, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18326_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m18327_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Reverse_m18327(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Reverse_m18327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m18328_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Sort_m18328(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Sort_m18328_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18329_gshared (List_1_t470 * __this, Comparison_1_t2757 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18329(__this, ___comparison, method) (( void (*) (List_1_t470 *, Comparison_1_t2757 *, const MethodInfo*))List_1_Sort_m18329_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t16* List_1_ToArray_m18330_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_ToArray_m18330(__this, method) (( Int32U5BU5D_t16* (*) (List_1_t470 *, const MethodInfo*))List_1_ToArray_m18330_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m18331_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18331(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_TrimExcess_m18331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18332_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18332(__this, method) (( int32_t (*) (List_1_t470 *, const MethodInfo*))List_1_get_Capacity_m18332_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18333_gshared (List_1_t470 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18333(__this, ___value, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18333_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m18334_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_get_Count_m18334(__this, method) (( int32_t (*) (List_1_t470 *, const MethodInfo*))List_1_get_Count_m18334_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m18335_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18335(__this, ___index, method) (( int32_t (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_get_Item_m18335_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18336_gshared (List_1_t470 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m18336(__this, ___index, ___value, method) (( void (*) (List_1_t470 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m18336_gshared)(__this, ___index, ___value, method)
