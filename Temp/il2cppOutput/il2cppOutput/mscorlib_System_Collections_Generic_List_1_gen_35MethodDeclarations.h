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

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t1089;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t3606;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t3607;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3608;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t3174;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Predicate`1<System.Byte>
struct Predicate_1_t3183;
// System.Comparison`1<System.Byte>
struct Comparison_1_t3184;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m5242_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1__ctor_m5242(__this, method) (( void (*) (List_1_t1089 *, const MethodInfo*))List_1__ctor_m5242_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24086_gshared (List_1_t1089 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24086(__this, ___collection, method) (( void (*) (List_1_t1089 *, Object_t*, const MethodInfo*))List_1__ctor_m24086_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m24087_gshared (List_1_t1089 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m24087(__this, ___capacity, method) (( void (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1__ctor_m24087_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m24088_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24088(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24088_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24089_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24089(__this, method) (( Object_t* (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24089_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24090_gshared (List_1_t1089 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24090(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1089 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24090_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24091_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24091(__this, method) (( Object_t * (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24091_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24092_gshared (List_1_t1089 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24092(__this, ___item, method) (( int32_t (*) (List_1_t1089 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24092_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24093_gshared (List_1_t1089 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24093(__this, ___item, method) (( bool (*) (List_1_t1089 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24093_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24094_gshared (List_1_t1089 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24094(__this, ___item, method) (( int32_t (*) (List_1_t1089 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24095_gshared (List_1_t1089 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24095(__this, ___index, ___item, method) (( void (*) (List_1_t1089 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24095_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24096_gshared (List_1_t1089 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24096(__this, ___item, method) (( void (*) (List_1_t1089 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24096_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24097_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24097(__this, method) (( bool (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24097_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m24098_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24098(__this, method) (( bool (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m24098_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24099_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24099(__this, method) (( Object_t * (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m24100_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24100(__this, method) (( bool (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m24100_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m24101_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m24101(__this, method) (( bool (*) (List_1_t1089 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m24101_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24102_gshared (List_1_t1089 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24102(__this, ___index, method) (( Object_t * (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24102_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24103_gshared (List_1_t1089 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24103(__this, ___index, ___value, method) (( void (*) (List_1_t1089 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24103_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m24104_gshared (List_1_t1089 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m24104(__this, ___item, method) (( void (*) (List_1_t1089 *, uint8_t, const MethodInfo*))List_1_Add_m24104_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24105_gshared (List_1_t1089 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24105(__this, ___newCount, method) (( void (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24105_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24106_gshared (List_1_t1089 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24106(__this, ___collection, method) (( void (*) (List_1_t1089 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24106_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24107_gshared (List_1_t1089 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24107(__this, ___enumerable, method) (( void (*) (List_1_t1089 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24107_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m24108_gshared (List_1_t1089 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m24108(__this, ___collection, method) (( void (*) (List_1_t1089 *, Object_t*, const MethodInfo*))List_1_AddRange_m24108_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3174 * List_1_AsReadOnly_m24109_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24109(__this, method) (( ReadOnlyCollection_1_t3174 * (*) (List_1_t1089 *, const MethodInfo*))List_1_AsReadOnly_m24109_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::BinarySearch(T)
extern "C" int32_t List_1_BinarySearch_m24110_gshared (List_1_t1089 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_BinarySearch_m24110(__this, ___item, method) (( int32_t (*) (List_1_t1089 *, uint8_t, const MethodInfo*))List_1_BinarySearch_m24110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m24111_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_Clear_m24111(__this, method) (( void (*) (List_1_t1089 *, const MethodInfo*))List_1_Clear_m24111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m24112_gshared (List_1_t1089 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m24112(__this, ___item, method) (( bool (*) (List_1_t1089 *, uint8_t, const MethodInfo*))List_1_Contains_m24112_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24113_gshared (List_1_t1089 * __this, ByteU5BU5D_t29* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24113(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1089 *, ByteU5BU5D_t29*, int32_t, const MethodInfo*))List_1_CopyTo_m24113_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m24114_gshared (List_1_t1089 * __this, Predicate_1_t3183 * ___match, const MethodInfo* method);
#define List_1_Find_m24114(__this, ___match, method) (( uint8_t (*) (List_1_t1089 *, Predicate_1_t3183 *, const MethodInfo*))List_1_Find_m24114_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24115_gshared (Object_t * __this /* static, unused */, Predicate_1_t3183 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24115(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3183 *, const MethodInfo*))List_1_CheckMatch_m24115_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24116_gshared (List_1_t1089 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3183 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24116(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1089 *, int32_t, int32_t, Predicate_1_t3183 *, const MethodInfo*))List_1_GetIndex_m24116_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t3173  List_1_GetEnumerator_m24117_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24117(__this, method) (( Enumerator_t3173  (*) (List_1_t1089 *, const MethodInfo*))List_1_GetEnumerator_m24117_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24118_gshared (List_1_t1089 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m24118(__this, ___item, method) (( int32_t (*) (List_1_t1089 *, uint8_t, const MethodInfo*))List_1_IndexOf_m24118_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24119_gshared (List_1_t1089 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24119(__this, ___start, ___delta, method) (( void (*) (List_1_t1089 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24119_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24120_gshared (List_1_t1089 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24120(__this, ___index, method) (( void (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24120_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24121_gshared (List_1_t1089 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m24121(__this, ___index, ___item, method) (( void (*) (List_1_t1089 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m24121_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24122_gshared (List_1_t1089 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24122(__this, ___collection, method) (( void (*) (List_1_t1089 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24122_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m24123_gshared (List_1_t1089 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m24123(__this, ___item, method) (( bool (*) (List_1_t1089 *, uint8_t, const MethodInfo*))List_1_Remove_m24123_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24124_gshared (List_1_t1089 * __this, Predicate_1_t3183 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24124(__this, ___match, method) (( int32_t (*) (List_1_t1089 *, Predicate_1_t3183 *, const MethodInfo*))List_1_RemoveAll_m24124_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24125_gshared (List_1_t1089 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24125(__this, ___index, method) (( void (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24125_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m24126_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_Reverse_m24126(__this, method) (( void (*) (List_1_t1089 *, const MethodInfo*))List_1_Reverse_m24126_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m24127_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_Sort_m24127(__this, method) (( void (*) (List_1_t1089 *, const MethodInfo*))List_1_Sort_m24127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24128_gshared (List_1_t1089 * __this, Comparison_1_t3184 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24128(__this, ___comparison, method) (( void (*) (List_1_t1089 *, Comparison_1_t3184 *, const MethodInfo*))List_1_Sort_m24128_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t29* List_1_ToArray_m5243_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_ToArray_m5243(__this, method) (( ByteU5BU5D_t29* (*) (List_1_t1089 *, const MethodInfo*))List_1_ToArray_m5243_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m24129_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24129(__this, method) (( void (*) (List_1_t1089 *, const MethodInfo*))List_1_TrimExcess_m24129_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24130_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24130(__this, method) (( int32_t (*) (List_1_t1089 *, const MethodInfo*))List_1_get_Capacity_m24130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24131_gshared (List_1_t1089 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24131(__this, ___value, method) (( void (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24131_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m24132_gshared (List_1_t1089 * __this, const MethodInfo* method);
#define List_1_get_Count_m24132(__this, method) (( int32_t (*) (List_1_t1089 *, const MethodInfo*))List_1_get_Count_m24132_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m24133_gshared (List_1_t1089 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24133(__this, ___index, method) (( uint8_t (*) (List_1_t1089 *, int32_t, const MethodInfo*))List_1_get_Item_m24133_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24134_gshared (List_1_t1089 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m24134(__this, ___index, ___value, method) (( void (*) (List_1_t1089 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m24134_gshared)(__this, ___index, ___value, method)
