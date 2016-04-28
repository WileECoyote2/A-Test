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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1501;
// System.Collections.ArrayList
struct ArrayList_t1313;
// System.Attribute[]
struct AttributeU5BU5D_t1531;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Attribute
struct Attribute_t612;
// System.Array
struct Array_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern "C" void AttributeCollection__ctor_m7698 (AttributeCollection_t1501 * __this, ArrayList_t1313 * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern "C" void AttributeCollection__ctor_m7699 (AttributeCollection_t1501 * __this, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern "C" void AttributeCollection__cctor_m7700 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m7701 (AttributeCollection_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool AttributeCollection_System_Collections_ICollection_get_IsSynchronized_m7702 (AttributeCollection_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m7703 (AttributeCollection_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t AttributeCollection_System_Collections_ICollection_get_Count_m7704 (AttributeCollection_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C" bool AttributeCollection_Contains_m7705 (AttributeCollection_t1501 * __this, Attribute_t612 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C" bool AttributeCollection_Contains_m7706 (AttributeCollection_t1501 * __this, AttributeU5BU5D_t1531* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C" void AttributeCollection_CopyTo_m7707 (AttributeCollection_t1501 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C" Object_t * AttributeCollection_GetEnumerator_m7708 (AttributeCollection_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern "C" Attribute_t612 * AttributeCollection_GetDefaultAttribute_m7709 (AttributeCollection_t1501 * __this, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C" int32_t AttributeCollection_get_Count_m7710 (AttributeCollection_t1501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern "C" Attribute_t612 * AttributeCollection_get_Item_m7711 (AttributeCollection_t1501 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
