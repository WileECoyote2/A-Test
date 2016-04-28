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

// System.Collections.ReadOnlyCollectionBase
struct ReadOnlyCollectionBase_t1508;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1313;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ReadOnlyCollectionBase::.ctor()
extern "C" void ReadOnlyCollectionBase__ctor_m10641 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ReadOnlyCollectionBase::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollectionBase_System_Collections_IEnumerable_GetEnumerator_m10642 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ReadOnlyCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollectionBase_System_Collections_ICollection_CopyTo_m10643 (ReadOnlyCollectionBase_t1508 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ReadOnlyCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollectionBase_System_Collections_ICollection_get_SyncRoot_m10644 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ReadOnlyCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollectionBase_System_Collections_ICollection_get_IsSynchronized_m10645 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ReadOnlyCollectionBase::get_Count()
extern "C" int32_t ReadOnlyCollectionBase_get_Count_m10646 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ReadOnlyCollectionBase::GetEnumerator()
extern "C" Object_t * ReadOnlyCollectionBase_GetEnumerator_m10647 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::get_InnerList()
extern "C" ArrayList_t1313 * ReadOnlyCollectionBase_get_InnerList_m8977 (ReadOnlyCollectionBase_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
