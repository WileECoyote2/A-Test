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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.Int64>::.ctor(T)
extern "C" void Nullable_1__ctor_m5194_gshared (Nullable_1_t1002 * __this, int64_t ___value, const MethodInfo* method);
#define Nullable_1__ctor_m5194(__this, ___value, method) (( void (*) (Nullable_1_t1002 *, int64_t, const MethodInfo*))Nullable_1__ctor_m5194_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m5192_gshared (Nullable_1_t1002 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m5192(__this, method) (( bool (*) (Nullable_1_t1002 *, const MethodInfo*))Nullable_1_get_HasValue_m5192_gshared)(__this, method)
// T System.Nullable`1<System.Int64>::get_Value()
extern "C" int64_t Nullable_1_get_Value_m5193_gshared (Nullable_1_t1002 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m5193(__this, method) (( int64_t (*) (Nullable_1_t1002 *, const MethodInfo*))Nullable_1_get_Value_m5193_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int64>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m23743_gshared (Nullable_1_t1002 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m23743(__this, ___other, method) (( bool (*) (Nullable_1_t1002 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m23743_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.Int64>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m23744_gshared (Nullable_1_t1002 * __this, Nullable_1_t1002  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m23744(__this, ___other, method) (( bool (*) (Nullable_1_t1002 *, Nullable_1_t1002 , const MethodInfo*))Nullable_1_Equals_m23744_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.Int64>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m23745_gshared (Nullable_1_t1002 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m23745(__this, method) (( int32_t (*) (Nullable_1_t1002 *, const MethodInfo*))Nullable_1_GetHashCode_m23745_gshared)(__this, method)
// System.String System.Nullable`1<System.Int64>::ToString()
extern "C" String_t* Nullable_1_ToString_m23746_gshared (Nullable_1_t1002 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m23746(__this, method) (( String_t* (*) (Nullable_1_t1002 *, const MethodInfo*))Nullable_1_ToString_m23746_gshared)(__this, method)
