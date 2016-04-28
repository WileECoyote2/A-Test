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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3236;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t388;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Predicate`1<System.Object>
struct Predicate_1_t2436;
// System.Comparison`1<System.Object>
struct Comparison_1_t2437;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m25047_gshared (IndexedSet_1_t3236 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m25047(__this, method) (( void (*) (IndexedSet_1_t3236 *, const MethodInfo*))IndexedSet_1__ctor_m25047_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m25049_gshared (IndexedSet_1_t3236 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m25049(__this, method) (( Object_t * (*) (IndexedSet_1_t3236 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m25049_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m25051_gshared (IndexedSet_1_t3236 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m25051(__this, ___item, method) (( void (*) (IndexedSet_1_t3236 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m25051_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m25053_gshared (IndexedSet_1_t3236 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m25053(__this, ___item, method) (( bool (*) (IndexedSet_1_t3236 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m25053_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m25055_gshared (IndexedSet_1_t3236 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m25055(__this, method) (( Object_t* (*) (IndexedSet_1_t3236 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m25055_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m25057_gshared (IndexedSet_1_t3236 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m25057(__this, method) (( void (*) (IndexedSet_1_t3236 *, const MethodInfo*))IndexedSet_1_Clear_m25057_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m25059_gshared (IndexedSet_1_t3236 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m25059(__this, ___item, method) (( bool (*) (IndexedSet_1_t3236 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m25059_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m25061_gshared (IndexedSet_1_t3236 * __this, ObjectU5BU5D_t408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m25061(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3236 *, ObjectU5BU5D_t408*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m25061_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m25063_gshared (IndexedSet_1_t3236 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m25063(__this, method) (( int32_t (*) (IndexedSet_1_t3236 *, const MethodInfo*))IndexedSet_1_get_Count_m25063_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m25065_gshared (IndexedSet_1_t3236 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m25065(__this, method) (( bool (*) (IndexedSet_1_t3236 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m25065_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m25067_gshared (IndexedSet_1_t3236 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m25067(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3236 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m25067_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m25069_gshared (IndexedSet_1_t3236 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m25069(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3236 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m25069_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m25071_gshared (IndexedSet_1_t3236 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m25071(__this, ___index, method) (( void (*) (IndexedSet_1_t3236 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m25071_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m25073_gshared (IndexedSet_1_t3236 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m25073(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3236 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m25073_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m25075_gshared (IndexedSet_1_t3236 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m25075(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3236 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m25075_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m25076_gshared (IndexedSet_1_t3236 * __this, Predicate_1_t2436 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m25076(__this, ___match, method) (( void (*) (IndexedSet_1_t3236 *, Predicate_1_t2436 *, const MethodInfo*))IndexedSet_1_RemoveAll_m25076_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m25077_gshared (IndexedSet_1_t3236 * __this, Comparison_1_t2437 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m25077(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3236 *, Comparison_1_t2437 *, const MethodInfo*))IndexedSet_1_Sort_m25077_gshared)(__this, ___sortLayoutFunction, method)
