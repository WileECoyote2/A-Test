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
#include "mscorlib_System_Nullable_1_gen_1.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m5226_gshared (Nullable_1_t1039 * __this, DateTime_t134  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m5226(__this, ___value, method) (( void (*) (Nullable_1_t1039 *, DateTime_t134 , const MethodInfo*))Nullable_1__ctor_m5226_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m5225_gshared (Nullable_1_t1039 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m5225(__this, method) (( bool (*) (Nullable_1_t1039 *, const MethodInfo*))Nullable_1_get_HasValue_m5225_gshared)(__this, method)
// T System.Nullable`1<System.DateTime>::get_Value()
extern "C" DateTime_t134  Nullable_1_get_Value_m5227_gshared (Nullable_1_t1039 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m5227(__this, method) (( DateTime_t134  (*) (Nullable_1_t1039 *, const MethodInfo*))Nullable_1_get_Value_m5227_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m23972_gshared (Nullable_1_t1039 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m23972(__this, ___other, method) (( bool (*) (Nullable_1_t1039 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m23972_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m23973_gshared (Nullable_1_t1039 * __this, Nullable_1_t1039  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m23973(__this, ___other, method) (( bool (*) (Nullable_1_t1039 *, Nullable_1_t1039 , const MethodInfo*))Nullable_1_Equals_m23973_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m23974_gshared (Nullable_1_t1039 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m23974(__this, method) (( int32_t (*) (Nullable_1_t1039 *, const MethodInfo*))Nullable_1_GetHashCode_m23974_gshared)(__this, method)
// System.String System.Nullable`1<System.DateTime>::ToString()
extern "C" String_t* Nullable_1_ToString_m23975_gshared (Nullable_1_t1039 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m23975(__this, method) (( String_t* (*) (Nullable_1_t1039 *, const MethodInfo*))Nullable_1_ToString_m23975_gshared)(__this, method)
