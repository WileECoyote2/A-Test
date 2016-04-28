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

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t172;
// System.Collections.Generic.IEnumerable`1<System.UInt32>
struct IEnumerable_1_t3482;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t3483;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t3484;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.UInt32>
struct ReadOnlyCollection_1_t2633;
// System.UInt32[]
struct UInt32U5BU5D_t130;
// System.Predicate`1<System.UInt32>
struct Predicate_1_t2642;
// System.Comparison`1<System.UInt32>
struct Comparison_1_t2643;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
extern "C" void List_1__ctor_m2142_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1__ctor_m2142(__this, method) (( void (*) (List_1_t172 *, const MethodInfo*))List_1__ctor_m2142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16782_gshared (List_1_t172 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16782(__this, ___collection, method) (( void (*) (List_1_t172 *, Object_t*, const MethodInfo*))List_1__ctor_m16782_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2151_gshared (List_1_t172 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2151(__this, ___capacity, method) (( void (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1__ctor_m2151_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::.cctor()
extern "C" void List_1__cctor_m16783_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16783(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16783_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16784_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16784(__this, method) (( Object_t* (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16784_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16785_gshared (List_1_t172 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16785(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t172 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16785_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16786_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16786(__this, method) (( Object_t * (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16786_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16787_gshared (List_1_t172 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16787(__this, ___item, method) (( int32_t (*) (List_1_t172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16787_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16788_gshared (List_1_t172 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16788(__this, ___item, method) (( bool (*) (List_1_t172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16788_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16789_gshared (List_1_t172 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16789(__this, ___item, method) (( int32_t (*) (List_1_t172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16789_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16790_gshared (List_1_t172 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16790(__this, ___index, ___item, method) (( void (*) (List_1_t172 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16790_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16791_gshared (List_1_t172 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16791(__this, ___item, method) (( void (*) (List_1_t172 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16791_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16792_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16792(__this, method) (( bool (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16792_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16793_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16793(__this, method) (( bool (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16793_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16794_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16794(__this, method) (( Object_t * (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16794_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16795_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16795(__this, method) (( bool (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16796_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16796(__this, method) (( bool (*) (List_1_t172 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16796_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16797_gshared (List_1_t172 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16797(__this, ___index, method) (( Object_t * (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16797_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16798_gshared (List_1_t172 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16798(__this, ___index, ___value, method) (( void (*) (List_1_t172 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16798_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(T)
extern "C" void List_1_Add_m16799_gshared (List_1_t172 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Add_m16799(__this, ___item, method) (( void (*) (List_1_t172 *, uint32_t, const MethodInfo*))List_1_Add_m16799_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16800_gshared (List_1_t172 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16800(__this, ___newCount, method) (( void (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16800_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16801_gshared (List_1_t172 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16801(__this, ___collection, method) (( void (*) (List_1_t172 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16801_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16802_gshared (List_1_t172 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16802(__this, ___enumerable, method) (( void (*) (List_1_t172 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16802_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16803_gshared (List_1_t172 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16803(__this, ___collection, method) (( void (*) (List_1_t172 *, Object_t*, const MethodInfo*))List_1_AddRange_m16803_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.UInt32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2633 * List_1_AsReadOnly_m16804_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16804(__this, method) (( ReadOnlyCollection_1_t2633 * (*) (List_1_t172 *, const MethodInfo*))List_1_AsReadOnly_m16804_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m16805_gshared (List_1_t172 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_BinarySearch_m16805(__this, ___item, method) (( int32_t (*) (List_1_t172 *, uint32_t, const MethodInfo*))List_1_BinarySearch_m16805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Clear()
extern "C" void List_1_Clear_m16806_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_Clear_m16806(__this, method) (( void (*) (List_1_t172 *, const MethodInfo*))List_1_Clear_m16806_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Contains(T)
extern "C" bool List_1_Contains_m16807_gshared (List_1_t172 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Contains_m16807(__this, ___item, method) (( bool (*) (List_1_t172 *, uint32_t, const MethodInfo*))List_1_Contains_m16807_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16808_gshared (List_1_t172 * __this, UInt32U5BU5D_t130* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16808(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t172 *, UInt32U5BU5D_t130*, int32_t, const MethodInfo*))List_1_CopyTo_m16808_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.UInt32>::Find(System.Predicate`1<T>)
extern "C" uint32_t List_1_Find_m16809_gshared (List_1_t172 * __this, Predicate_1_t2642 * ___match, const MethodInfo* method);
#define List_1_Find_m16809(__this, ___match, method) (( uint32_t (*) (List_1_t172 *, Predicate_1_t2642 *, const MethodInfo*))List_1_Find_m16809_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16810_gshared (Object_t * __this /* static, unused */, Predicate_1_t2642 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16810(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2642 *, const MethodInfo*))List_1_CheckMatch_m16810_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16811_gshared (List_1_t172 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2642 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16811(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t172 *, int32_t, int32_t, Predicate_1_t2642 *, const MethodInfo*))List_1_GetIndex_m16811_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.UInt32>::GetEnumerator()
extern "C" Enumerator_t2632  List_1_GetEnumerator_m16812_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16812(__this, method) (( Enumerator_t2632  (*) (List_1_t172 *, const MethodInfo*))List_1_GetEnumerator_m16812_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16813_gshared (List_1_t172 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m16813(__this, ___item, method) (( int32_t (*) (List_1_t172 *, uint32_t, const MethodInfo*))List_1_IndexOf_m16813_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16814_gshared (List_1_t172 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16814(__this, ___start, ___delta, method) (( void (*) (List_1_t172 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16814_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16815_gshared (List_1_t172 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16815(__this, ___index, method) (( void (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16815_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16816_gshared (List_1_t172 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define List_1_Insert_m16816(__this, ___index, ___item, method) (( void (*) (List_1_t172 *, int32_t, uint32_t, const MethodInfo*))List_1_Insert_m16816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16817_gshared (List_1_t172 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16817(__this, ___collection, method) (( void (*) (List_1_t172 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16817_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.UInt32>::Remove(T)
extern "C" bool List_1_Remove_m16818_gshared (List_1_t172 * __this, uint32_t ___item, const MethodInfo* method);
#define List_1_Remove_m16818(__this, ___item, method) (( bool (*) (List_1_t172 *, uint32_t, const MethodInfo*))List_1_Remove_m16818_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16819_gshared (List_1_t172 * __this, Predicate_1_t2642 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16819(__this, ___match, method) (( int32_t (*) (List_1_t172 *, Predicate_1_t2642 *, const MethodInfo*))List_1_RemoveAll_m16819_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16820_gshared (List_1_t172 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16820(__this, ___index, method) (( void (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16820_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Reverse()
extern "C" void List_1_Reverse_m16821_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_Reverse_m16821(__this, method) (( void (*) (List_1_t172 *, const MethodInfo*))List_1_Reverse_m16821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort()
extern "C" void List_1_Sort_m16822_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_Sort_m16822(__this, method) (( void (*) (List_1_t172 *, const MethodInfo*))List_1_Sort_m16822_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16823_gshared (List_1_t172 * __this, Comparison_1_t2643 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16823(__this, ___comparison, method) (( void (*) (List_1_t172 *, Comparison_1_t2643 *, const MethodInfo*))List_1_Sort_m16823_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.UInt32>::ToArray()
extern "C" UInt32U5BU5D_t130* List_1_ToArray_m2144_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_ToArray_m2144(__this, method) (( UInt32U5BU5D_t130* (*) (List_1_t172 *, const MethodInfo*))List_1_ToArray_m2144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::TrimExcess()
extern "C" void List_1_TrimExcess_m16824_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16824(__this, method) (( void (*) (List_1_t172 *, const MethodInfo*))List_1_TrimExcess_m16824_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16825_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16825(__this, method) (( int32_t (*) (List_1_t172 *, const MethodInfo*))List_1_get_Capacity_m16825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16826_gshared (List_1_t172 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16826(__this, ___value, method) (( void (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16826_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
extern "C" int32_t List_1_get_Count_m16827_gshared (List_1_t172 * __this, const MethodInfo* method);
#define List_1_get_Count_m16827(__this, method) (( int32_t (*) (List_1_t172 *, const MethodInfo*))List_1_get_Count_m16827_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
extern "C" uint32_t List_1_get_Item_m16828_gshared (List_1_t172 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16828(__this, ___index, method) (( uint32_t (*) (List_1_t172 *, int32_t, const MethodInfo*))List_1_get_Item_m16828_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.UInt32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16829_gshared (List_1_t172 * __this, int32_t ___index, uint32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m16829(__this, ___index, ___value, method) (( void (*) (List_1_t172 *, int32_t, uint32_t, const MethodInfo*))List_1_set_Item_m16829_gshared)(__this, ___index, ___value, method)
