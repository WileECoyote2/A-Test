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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t478;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t3519;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3520;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t3521;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t2773;
// System.Single[]
struct SingleU5BU5D_t97;
// System.Predicate`1<System.Single>
struct Predicate_1_t2782;
// System.Comparison`1<System.Single>
struct Comparison_1_t2783;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m18707_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1__ctor_m18707(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1__ctor_m18707_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18708_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18708(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1__ctor_m18708_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18709_gshared (List_1_t478 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18709(__this, ___capacity, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1__ctor_m18709_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m18710_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18710(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18710_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18711_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18711(__this, method) (( Object_t* (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18711_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18712_gshared (List_1_t478 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18712(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t478 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18712_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18713_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18713(__this, method) (( Object_t * (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18713_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18714_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18714(__this, ___item, method) (( int32_t (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18714_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18715_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18715(__this, ___item, method) (( bool (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18715_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18716_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18716(__this, ___item, method) (( int32_t (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18716_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18717_gshared (List_1_t478 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18717(__this, ___index, ___item, method) (( void (*) (List_1_t478 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18717_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18718_gshared (List_1_t478 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18718(__this, ___item, method) (( void (*) (List_1_t478 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18718_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18719_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18719(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18719_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18720_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18720(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18720_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18721_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18721(__this, method) (( Object_t * (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18721_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18722_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18722(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18722_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18723_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18723(__this, method) (( bool (*) (List_1_t478 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18723_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18724_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18724(__this, ___index, method) (( Object_t * (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18724_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18725_gshared (List_1_t478 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18725(__this, ___index, ___value, method) (( void (*) (List_1_t478 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18725_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m18726_gshared (List_1_t478 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m18726(__this, ___item, method) (( void (*) (List_1_t478 *, float, const MethodInfo*))List_1_Add_m18726_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18727_gshared (List_1_t478 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18727(__this, ___newCount, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18727_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18728_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18728(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18728_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18729_gshared (List_1_t478 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18729(__this, ___enumerable, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18729_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18730_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18730(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_AddRange_m18730_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2773 * List_1_AsReadOnly_m18731_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18731(__this, method) (( ReadOnlyCollection_1_t2773 * (*) (List_1_t478 *, const MethodInfo*))List_1_AsReadOnly_m18731_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m2221_gshared (List_1_t478 * __this, float ___item, const MethodInfo* method);
#define List_1_BinarySearch_m2221(__this, ___item, method) (( int32_t (*) (List_1_t478 *, float, const MethodInfo*))List_1_BinarySearch_m2221_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m18732_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_Clear_m18732(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_Clear_m18732_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m18733_gshared (List_1_t478 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m18733(__this, ___item, method) (( bool (*) (List_1_t478 *, float, const MethodInfo*))List_1_Contains_m18733_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18734_gshared (List_1_t478 * __this, SingleU5BU5D_t97* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18734(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t478 *, SingleU5BU5D_t97*, int32_t, const MethodInfo*))List_1_CopyTo_m18734_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m18735_gshared (List_1_t478 * __this, Predicate_1_t2782 * ___match, const MethodInfo* method);
#define List_1_Find_m18735(__this, ___match, method) (( float (*) (List_1_t478 *, Predicate_1_t2782 *, const MethodInfo*))List_1_Find_m18735_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18736_gshared (Object_t * __this /* static, unused */, Predicate_1_t2782 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18736(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2782 *, const MethodInfo*))List_1_CheckMatch_m18736_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18737_gshared (List_1_t478 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2782 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18737(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t478 *, int32_t, int32_t, Predicate_1_t2782 *, const MethodInfo*))List_1_GetIndex_m18737_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t2772  List_1_GetEnumerator_m18738_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18738(__this, method) (( Enumerator_t2772  (*) (List_1_t478 *, const MethodInfo*))List_1_GetEnumerator_m18738_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18739_gshared (List_1_t478 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m18739(__this, ___item, method) (( int32_t (*) (List_1_t478 *, float, const MethodInfo*))List_1_IndexOf_m18739_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18740_gshared (List_1_t478 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18740(__this, ___start, ___delta, method) (( void (*) (List_1_t478 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18740_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18741_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18741(__this, ___index, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18741_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18742_gshared (List_1_t478 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m18742(__this, ___index, ___item, method) (( void (*) (List_1_t478 *, int32_t, float, const MethodInfo*))List_1_Insert_m18742_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18743_gshared (List_1_t478 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18743(__this, ___collection, method) (( void (*) (List_1_t478 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18743_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m18744_gshared (List_1_t478 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m18744(__this, ___item, method) (( bool (*) (List_1_t478 *, float, const MethodInfo*))List_1_Remove_m18744_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18745_gshared (List_1_t478 * __this, Predicate_1_t2782 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18745(__this, ___match, method) (( int32_t (*) (List_1_t478 *, Predicate_1_t2782 *, const MethodInfo*))List_1_RemoveAll_m18745_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18746_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18746(__this, ___index, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18746_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m18747_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_Reverse_m18747(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_Reverse_m18747_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m18748_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_Sort_m18748(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_Sort_m18748_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18749_gshared (List_1_t478 * __this, Comparison_1_t2783 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18749(__this, ___comparison, method) (( void (*) (List_1_t478 *, Comparison_1_t2783 *, const MethodInfo*))List_1_Sort_m18749_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t97* List_1_ToArray_m18750_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_ToArray_m18750(__this, method) (( SingleU5BU5D_t97* (*) (List_1_t478 *, const MethodInfo*))List_1_ToArray_m18750_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m18751_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18751(__this, method) (( void (*) (List_1_t478 *, const MethodInfo*))List_1_TrimExcess_m18751_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18752_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18752(__this, method) (( int32_t (*) (List_1_t478 *, const MethodInfo*))List_1_get_Capacity_m18752_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18753_gshared (List_1_t478 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18753(__this, ___value, method) (( void (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18753_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m18754_gshared (List_1_t478 * __this, const MethodInfo* method);
#define List_1_get_Count_m18754(__this, method) (( int32_t (*) (List_1_t478 *, const MethodInfo*))List_1_get_Count_m18754_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m18755_gshared (List_1_t478 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18755(__this, ___index, method) (( float (*) (List_1_t478 *, int32_t, const MethodInfo*))List_1_get_Item_m18755_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18756_gshared (List_1_t478 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m18756(__this, ___index, ___value, method) (( void (*) (List_1_t478 *, int32_t, float, const MethodInfo*))List_1_set_Item_m18756_gshared)(__this, ___index, ___value, method)
