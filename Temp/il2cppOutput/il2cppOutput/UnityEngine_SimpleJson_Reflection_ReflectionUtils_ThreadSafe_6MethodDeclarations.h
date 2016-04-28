﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2999;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2997;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t836;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3019;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3458;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m21781_gshared (ThreadSafeDictionary_2_t2999 * __this, ThreadSafeDictionaryValueFactory_2_t2997 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m21781(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2999 *, ThreadSafeDictionaryValueFactory_2_t2997 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m21781_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21783_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21783(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m21783_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m21785_gshared (ThreadSafeDictionary_2_t2999 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m21785(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2999 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m21785_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m21787_gshared (ThreadSafeDictionary_2_t2999 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m21787(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2999 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m21787_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m21789_gshared (ThreadSafeDictionary_2_t2999 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m21789(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2999 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m21789_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m21791_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m21791(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m21791_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m21793_gshared (ThreadSafeDictionary_2_t2999 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m21793(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2999 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m21793_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m21795_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m21795(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m21795_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m21797_gshared (ThreadSafeDictionary_2_t2999 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m21797(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2999 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m21797_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m21799_gshared (ThreadSafeDictionary_2_t2999 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m21799(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2999 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m21799_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m21801_gshared (ThreadSafeDictionary_2_t2999 * __this, KeyValuePair_2_t2529  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m21801(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2999 *, KeyValuePair_2_t2529 , const MethodInfo*))ThreadSafeDictionary_2_Add_m21801_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m21803_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m21803(__this, method) (( void (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m21803_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m21805_gshared (ThreadSafeDictionary_2_t2999 * __this, KeyValuePair_2_t2529  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m21805(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2999 *, KeyValuePair_2_t2529 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m21805_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m21807_gshared (ThreadSafeDictionary_2_t2999 * __this, KeyValuePair_2U5BU5D_t3019* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m21807(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2999 *, KeyValuePair_2U5BU5D_t3019*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m21807_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m21809_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m21809(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m21809_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m21811_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m21811(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m21811_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m21813_gshared (ThreadSafeDictionary_2_t2999 * __this, KeyValuePair_2_t2529  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m21813(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2999 *, KeyValuePair_2_t2529 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m21813_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m21815_gshared (ThreadSafeDictionary_2_t2999 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m21815(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2999 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m21815_gshared)(__this, method)
