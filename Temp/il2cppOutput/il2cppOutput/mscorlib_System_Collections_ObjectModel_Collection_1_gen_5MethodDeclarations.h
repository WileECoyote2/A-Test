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

// System.Collections.ObjectModel.Collection`1<System.Single>
struct Collection_1_t2775;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t97;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3520;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t2774;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::.ctor()
extern "C" void Collection_1__ctor_m18793_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1__ctor_m18793(__this, method) (( void (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1__ctor_m18793_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18794_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18794(__this, method) (( bool (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18794_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m18795_gshared (Collection_1_t2775 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m18795(__this, ___array, ___index, method) (( void (*) (Collection_1_t2775 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m18795_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m18796_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18796(__this, method) (( Object_t * (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m18796_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m18797_gshared (Collection_1_t2775 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m18797(__this, ___value, method) (( int32_t (*) (Collection_1_t2775 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m18797_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m18798_gshared (Collection_1_t2775 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m18798(__this, ___value, method) (( bool (*) (Collection_1_t2775 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m18798_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m18799_gshared (Collection_1_t2775 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m18799(__this, ___value, method) (( int32_t (*) (Collection_1_t2775 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m18799_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m18800_gshared (Collection_1_t2775 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m18800(__this, ___index, ___value, method) (( void (*) (Collection_1_t2775 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m18800_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m18801_gshared (Collection_1_t2775 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m18801(__this, ___value, method) (( void (*) (Collection_1_t2775 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m18801_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m18802_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18802(__this, method) (( bool (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m18802_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m18803_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18803(__this, method) (( Object_t * (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m18803_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m18804_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18804(__this, method) (( bool (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m18804_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m18805_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18805(__this, method) (( bool (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m18805_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m18806_gshared (Collection_1_t2775 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m18806(__this, ___index, method) (( Object_t * (*) (Collection_1_t2775 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m18806_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m18807_gshared (Collection_1_t2775 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m18807(__this, ___index, ___value, method) (( void (*) (Collection_1_t2775 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m18807_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Add(T)
extern "C" void Collection_1_Add_m18808_gshared (Collection_1_t2775 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Add_m18808(__this, ___item, method) (( void (*) (Collection_1_t2775 *, float, const MethodInfo*))Collection_1_Add_m18808_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Clear()
extern "C" void Collection_1_Clear_m18809_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_Clear_m18809(__this, method) (( void (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_Clear_m18809_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::ClearItems()
extern "C" void Collection_1_ClearItems_m18810_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m18810(__this, method) (( void (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_ClearItems_m18810_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Contains(T)
extern "C" bool Collection_1_Contains_m18811_gshared (Collection_1_t2775 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Contains_m18811(__this, ___item, method) (( bool (*) (Collection_1_t2775 *, float, const MethodInfo*))Collection_1_Contains_m18811_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m18812_gshared (Collection_1_t2775 * __this, SingleU5BU5D_t97* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m18812(__this, ___array, ___index, method) (( void (*) (Collection_1_t2775 *, SingleU5BU5D_t97*, int32_t, const MethodInfo*))Collection_1_CopyTo_m18812_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Single>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m18813_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m18813(__this, method) (( Object_t* (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_GetEnumerator_m18813_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m18814_gshared (Collection_1_t2775 * __this, float ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m18814(__this, ___item, method) (( int32_t (*) (Collection_1_t2775 *, float, const MethodInfo*))Collection_1_IndexOf_m18814_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m18815_gshared (Collection_1_t2775 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_Insert_m18815(__this, ___index, ___item, method) (( void (*) (Collection_1_t2775 *, int32_t, float, const MethodInfo*))Collection_1_Insert_m18815_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m18816_gshared (Collection_1_t2775 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m18816(__this, ___index, ___item, method) (( void (*) (Collection_1_t2775 *, int32_t, float, const MethodInfo*))Collection_1_InsertItem_m18816_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::Remove(T)
extern "C" bool Collection_1_Remove_m18817_gshared (Collection_1_t2775 * __this, float ___item, const MethodInfo* method);
#define Collection_1_Remove_m18817(__this, ___item, method) (( bool (*) (Collection_1_t2775 *, float, const MethodInfo*))Collection_1_Remove_m18817_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m18818_gshared (Collection_1_t2775 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m18818(__this, ___index, method) (( void (*) (Collection_1_t2775 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m18818_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m18819_gshared (Collection_1_t2775 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m18819(__this, ___index, method) (( void (*) (Collection_1_t2775 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m18819_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Single>::get_Count()
extern "C" int32_t Collection_1_get_Count_m18820_gshared (Collection_1_t2775 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m18820(__this, method) (( int32_t (*) (Collection_1_t2775 *, const MethodInfo*))Collection_1_get_Count_m18820_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::get_Item(System.Int32)
extern "C" float Collection_1_get_Item_m18821_gshared (Collection_1_t2775 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m18821(__this, ___index, method) (( float (*) (Collection_1_t2775 *, int32_t, const MethodInfo*))Collection_1_get_Item_m18821_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m18822_gshared (Collection_1_t2775 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define Collection_1_set_Item_m18822(__this, ___index, ___value, method) (( void (*) (Collection_1_t2775 *, int32_t, float, const MethodInfo*))Collection_1_set_Item_m18822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m18823_gshared (Collection_1_t2775 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define Collection_1_SetItem_m18823(__this, ___index, ___item, method) (( void (*) (Collection_1_t2775 *, int32_t, float, const MethodInfo*))Collection_1_SetItem_m18823_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m18824_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m18824(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m18824_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Single>::ConvertItem(System.Object)
extern "C" float Collection_1_ConvertItem_m18825_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m18825(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m18825_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Single>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m18826_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m18826(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m18826_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m18827_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m18827(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m18827_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Single>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m18828_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m18828(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m18828_gshared)(__this /* static, unused */, ___list, method)
