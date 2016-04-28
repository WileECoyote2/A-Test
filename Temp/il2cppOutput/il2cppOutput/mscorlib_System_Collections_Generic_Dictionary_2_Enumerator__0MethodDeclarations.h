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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t436;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16435_gshared (Enumerator_t441 * __this, Dictionary_2_t436 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16435(__this, ___dictionary, method) (( void (*) (Enumerator_t441 *, Dictionary_2_t436 *, const MethodInfo*))Enumerator__ctor_m16435_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16436_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16436(__this, method) (( Object_t * (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16436_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16437_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16437(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16437_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16438_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16438(__this, method) (( Object_t * (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16438_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16439_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16439(__this, method) (( Object_t * (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16439_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1997_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1997(__this, method) (( bool (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_MoveNext_m1997_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t440  Enumerator_get_Current_m1994_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1994(__this, method) (( KeyValuePair_2_t440  (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_get_Current_m1994_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m16440_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16440(__this, method) (( int32_t (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_get_CurrentKey_m16440_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16441_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16441(__this, method) (( int32_t (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_get_CurrentValue_m16441_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m16442_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16442(__this, method) (( void (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_VerifyState_m16442_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16443_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16443(__this, method) (( void (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_VerifyCurrent_m16443_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m16444_gshared (Enumerator_t441 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16444(__this, method) (( void (*) (Enumerator_t441 *, const MethodInfo*))Enumerator_Dispose_m16444_gshared)(__this, method)
