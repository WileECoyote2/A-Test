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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2532;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2527;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t388;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_1.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m15533_gshared (KeyCollection_t2532 * __this, Dictionary_2_t2527 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m15533(__this, ___dictionary, method) (( void (*) (KeyCollection_t2532 *, Dictionary_2_t2527 *, const MethodInfo*))KeyCollection__ctor_m15533_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15534_gshared (KeyCollection_t2532 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15534(__this, ___item, method) (( void (*) (KeyCollection_t2532 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m15534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15535_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15535(__this, method) (( void (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m15535_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15536_gshared (KeyCollection_t2532 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15536(__this, ___item, method) (( bool (*) (KeyCollection_t2532 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m15536_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15537_gshared (KeyCollection_t2532 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15537(__this, ___item, method) (( bool (*) (KeyCollection_t2532 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m15537_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15538_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15538(__this, method) (( Object_t* (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m15538_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m15539_gshared (KeyCollection_t2532 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m15539(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2532 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m15539_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15540_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15540(__this, method) (( Object_t * (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m15540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15541_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15541(__this, method) (( bool (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m15541_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15542_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15542(__this, method) (( bool (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m15542_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m15543_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m15543(__this, method) (( Object_t * (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m15543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m15544_gshared (KeyCollection_t2532 * __this, ObjectU5BU5D_t408* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m15544(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2532 *, ObjectU5BU5D_t408*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m15544_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2533  KeyCollection_GetEnumerator_m15545_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m15545(__this, method) (( Enumerator_t2533  (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_GetEnumerator_m15545_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m15546_gshared (KeyCollection_t2532 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m15546(__this, method) (( int32_t (*) (KeyCollection_t2532 *, const MethodInfo*))KeyCollection_get_Count_m15546_gshared)(__this, method)
