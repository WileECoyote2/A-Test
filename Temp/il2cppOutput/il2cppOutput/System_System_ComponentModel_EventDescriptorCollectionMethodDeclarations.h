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

// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t1525;
// System.Collections.ArrayList
struct ArrayList_t1313;
// System.ComponentModel.EventDescriptor[]
struct EventDescriptorU5BU5D_t1696;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t1523;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1531;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.EventDescriptorCollection::.ctor()
extern "C" void EventDescriptorCollection__ctor_m7813 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.Collections.ArrayList)
extern "C" void EventDescriptorCollection__ctor_m7814 (EventDescriptorCollection_t1525 * __this, ArrayList_t1313 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.ComponentModel.EventDescriptor[])
extern "C" void EventDescriptorCollection__ctor_m7815 (EventDescriptorCollection_t1525 * __this, EventDescriptorU5BU5D_t1696* ___events, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::.ctor(System.ComponentModel.EventDescriptor[],System.Boolean)
extern "C" void EventDescriptorCollection__ctor_m7816 (EventDescriptorCollection_t1525 * __this, EventDescriptorU5BU5D_t1696* ___events, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::.cctor()
extern "C" void EventDescriptorCollection__cctor_m7817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Clear()
extern "C" void EventDescriptorCollection_System_Collections_IList_Clear_m7818 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.EventDescriptorCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * EventDescriptorCollection_System_Collections_IEnumerable_GetEnumerator_m7819 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void EventDescriptorCollection_System_Collections_IList_RemoveAt_m7820 (EventDescriptorCollection_t1525 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t EventDescriptorCollection_System_Collections_ICollection_get_Count_m7821 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t EventDescriptorCollection_System_Collections_IList_Add_m7822 (EventDescriptorCollection_t1525 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool EventDescriptorCollection_System_Collections_IList_Contains_m7823 (EventDescriptorCollection_t1525 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EventDescriptorCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t EventDescriptorCollection_System_Collections_IList_IndexOf_m7824 (EventDescriptorCollection_t1525 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void EventDescriptorCollection_System_Collections_IList_Insert_m7825 (EventDescriptorCollection_t1525 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.Remove(System.Object)
extern "C" void EventDescriptorCollection_System_Collections_IList_Remove_m7826 (EventDescriptorCollection_t1525 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool EventDescriptorCollection_System_Collections_IList_get_IsFixedSize_m7827 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool EventDescriptorCollection_System_Collections_IList_get_IsReadOnly_m7828 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EventDescriptorCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * EventDescriptorCollection_System_Collections_IList_get_Item_m7829 (EventDescriptorCollection_t1525 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void EventDescriptorCollection_System_Collections_IList_set_Item_m7830 (EventDescriptorCollection_t1525 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void EventDescriptorCollection_System_Collections_ICollection_CopyTo_m7831 (EventDescriptorCollection_t1525 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool EventDescriptorCollection_System_Collections_ICollection_get_IsSynchronized_m7832 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EventDescriptorCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * EventDescriptorCollection_System_Collections_ICollection_get_SyncRoot_m7833 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EventDescriptorCollection::Add(System.ComponentModel.EventDescriptor)
extern "C" int32_t EventDescriptorCollection_Add_m7834 (EventDescriptorCollection_t1525 * __this, EventDescriptor_t1523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::Clear()
extern "C" void EventDescriptorCollection_Clear_m7835 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EventDescriptorCollection::Contains(System.ComponentModel.EventDescriptor)
extern "C" bool EventDescriptorCollection_Contains_m7836 (EventDescriptorCollection_t1525 * __this, EventDescriptor_t1523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.EventDescriptorCollection::Find(System.String,System.Boolean)
extern "C" EventDescriptor_t1523 * EventDescriptorCollection_Find_m7837 (EventDescriptorCollection_t1525 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.EventDescriptorCollection::GetEnumerator()
extern "C" Object_t * EventDescriptorCollection_GetEnumerator_m7838 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EventDescriptorCollection::IndexOf(System.ComponentModel.EventDescriptor)
extern "C" int32_t EventDescriptorCollection_IndexOf_m7839 (EventDescriptorCollection_t1525 * __this, EventDescriptor_t1523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::Insert(System.Int32,System.ComponentModel.EventDescriptor)
extern "C" void EventDescriptorCollection_Insert_m7840 (EventDescriptorCollection_t1525 * __this, int32_t ___index, EventDescriptor_t1523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::Remove(System.ComponentModel.EventDescriptor)
extern "C" void EventDescriptorCollection_Remove_m7841 (EventDescriptorCollection_t1525 * __this, EventDescriptor_t1523 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventDescriptorCollection::RemoveAt(System.Int32)
extern "C" void EventDescriptorCollection_RemoveAt_m7842 (EventDescriptorCollection_t1525 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Filter(System.Attribute[])
extern "C" EventDescriptorCollection_t1525 * EventDescriptorCollection_Filter_m7843 (EventDescriptorCollection_t1525 * __this, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.EventDescriptorCollection::get_Count()
extern "C" int32_t EventDescriptorCollection_get_Count_m7844 (EventDescriptorCollection_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.EventDescriptorCollection::get_Item(System.String)
extern "C" EventDescriptor_t1523 * EventDescriptorCollection_get_Item_m7845 (EventDescriptorCollection_t1525 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
