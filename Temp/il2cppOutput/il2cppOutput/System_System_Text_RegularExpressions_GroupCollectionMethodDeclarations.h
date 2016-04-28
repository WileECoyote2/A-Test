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

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1081;
// System.Text.RegularExpressions.Group
struct Group_t1082;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Int32,System.Int32)
extern "C" void GroupCollection__ctor_m8510 (GroupCollection_t1081 * __this, int32_t ___n, int32_t ___gap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern "C" int32_t GroupCollection_get_Count_m8511 (GroupCollection_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
extern "C" bool GroupCollection_get_IsSynchronized_m8512 (GroupCollection_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern "C" Group_t1082 * GroupCollection_get_Item_m5171 (GroupCollection_t1081 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::SetValue(System.Text.RegularExpressions.Group,System.Int32)
extern "C" void GroupCollection_SetValue_m8513 (GroupCollection_t1081 * __this, Group_t1082 * ___g, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern "C" Object_t * GroupCollection_get_SyncRoot_m8514 (GroupCollection_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern "C" void GroupCollection_CopyTo_m8515 (GroupCollection_t1081 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern "C" Object_t * GroupCollection_GetEnumerator_m8516 (GroupCollection_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
