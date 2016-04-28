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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t3025;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3018;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3458;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3019;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_40.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m22261_gshared (ValueCollection_t3025 * __this, Dictionary_2_t3018 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m22261(__this, ___dictionary, method) (( void (*) (ValueCollection_t3025 *, Dictionary_2_t3018 *, const MethodInfo*))ValueCollection__ctor_m22261_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22262_gshared (ValueCollection_t3025 * __this, KeyValuePair_2_t2529  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22262(__this, ___item, method) (( void (*) (ValueCollection_t3025 *, KeyValuePair_2_t2529 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m22262_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22263_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22263(__this, method) (( void (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m22263_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22264_gshared (ValueCollection_t3025 * __this, KeyValuePair_2_t2529  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22264(__this, ___item, method) (( bool (*) (ValueCollection_t3025 *, KeyValuePair_2_t2529 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m22264_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22265_gshared (ValueCollection_t3025 * __this, KeyValuePair_2_t2529  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22265(__this, ___item, method) (( bool (*) (ValueCollection_t3025 *, KeyValuePair_2_t2529 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m22265_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22266_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22266(__this, method) (( Object_t* (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m22266_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m22267_gshared (ValueCollection_t3025 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m22267(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3025 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m22267_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22268_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22268(__this, method) (( Object_t * (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m22268_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22269_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22269(__this, method) (( bool (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m22269_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22270_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22270(__this, method) (( bool (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m22270_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m22271_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m22271(__this, method) (( Object_t * (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m22271_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m22272_gshared (ValueCollection_t3025 * __this, KeyValuePair_2U5BU5D_t3019* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m22272(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3025 *, KeyValuePair_2U5BU5D_t3019*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m22272_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t3026  ValueCollection_GetEnumerator_m22273_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m22273(__this, method) (( Enumerator_t3026  (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_GetEnumerator_m22273_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m22274_gshared (ValueCollection_t3025 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m22274(__this, method) (( int32_t (*) (ValueCollection_t3025 *, const MethodInfo*))ValueCollection_get_Count_m22274_gshared)(__this, method)
