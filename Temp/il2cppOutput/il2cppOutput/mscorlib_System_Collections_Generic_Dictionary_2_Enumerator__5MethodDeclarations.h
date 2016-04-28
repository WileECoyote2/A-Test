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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2527;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15552_gshared (Enumerator_t2534 * __this, Dictionary_2_t2527 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15552(__this, ___dictionary, method) (( void (*) (Enumerator_t2534 *, Dictionary_2_t2527 *, const MethodInfo*))Enumerator__ctor_m15552_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15553_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15553(__this, method) (( Object_t * (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15553_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t963  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15554_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15554(__this, method) (( DictionaryEntry_t963  (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15554_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15555_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15555(__this, method) (( Object_t * (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15555_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15556_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15556(__this, method) (( Object_t * (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15557_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15557(__this, method) (( bool (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_MoveNext_m15557_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2529  Enumerator_get_Current_m15558_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15558(__this, method) (( KeyValuePair_2_t2529  (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_get_Current_m15558_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15559_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15559(__this, method) (( Object_t * (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_get_CurrentKey_m15559_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15560_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15560(__this, method) (( Object_t * (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_get_CurrentValue_m15560_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15561_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15561(__this, method) (( void (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_VerifyState_m15561_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15562_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15562(__this, method) (( void (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_VerifyCurrent_m15562_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15563_gshared (Enumerator_t2534 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15563(__this, method) (( void (*) (Enumerator_t2534 *, const MethodInfo*))Enumerator_Dispose_m15563_gshared)(__this, method)
