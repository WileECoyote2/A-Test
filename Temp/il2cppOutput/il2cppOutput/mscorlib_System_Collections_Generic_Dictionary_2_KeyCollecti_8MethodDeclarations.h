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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2600;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t436;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3449;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m16416_gshared (KeyCollection_t2600 * __this, Dictionary_2_t436 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m16416(__this, ___dictionary, method) (( void (*) (KeyCollection_t2600 *, Dictionary_2_t436 *, const MethodInfo*))KeyCollection__ctor_m16416_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m16417_gshared (KeyCollection_t2600 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m16417(__this, ___item, method) (( void (*) (KeyCollection_t2600 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m16417_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m16418_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m16418(__this, method) (( void (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m16418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m16419_gshared (KeyCollection_t2600 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m16419(__this, ___item, method) (( bool (*) (KeyCollection_t2600 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m16419_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m16420_gshared (KeyCollection_t2600 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m16420(__this, ___item, method) (( bool (*) (KeyCollection_t2600 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m16420_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m16421_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m16421(__this, method) (( Object_t* (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m16421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m16422_gshared (KeyCollection_t2600 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m16422(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2600 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m16422_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m16423_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m16423(__this, method) (( Object_t * (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m16423_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m16424_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m16424(__this, method) (( bool (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m16424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m16425_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m16425(__this, method) (( bool (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m16425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m16426_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m16426(__this, method) (( Object_t * (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m16426_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m16427_gshared (KeyCollection_t2600 * __this, Int32U5BU5D_t16* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m16427(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2600 *, Int32U5BU5D_t16*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m16427_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2601  KeyCollection_GetEnumerator_m16428_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m16428(__this, method) (( Enumerator_t2601  (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_GetEnumerator_m16428_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m16429_gshared (KeyCollection_t2600 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m16429(__this, method) (( int32_t (*) (KeyCollection_t2600 *, const MethodInfo*))KeyCollection_get_Count_m16429_gshared)(__this, method)
