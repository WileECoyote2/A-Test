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

// System.Version
struct Version_t165;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m14089 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C" void Version__ctor_m4516 (Version_t165 * __this, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m9041 (Version_t165 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m1800 (Version_t165 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m2025 (Version_t165 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m14090 (Version_t165 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m2023 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m2021 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m2022 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m2024 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" int32_t Version_CompareTo_m14091 (Version_t165 * __this, Object_t * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C" bool Version_Equals_m14092 (Version_t165 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m14093 (Version_t165 * __this, Version_t165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m14094 (Version_t165 * __this, Version_t165 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m14095 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C" String_t* Version_ToString_m1921 (Version_t165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C" Version_t165 * Version_CreateFromString_m14096 (Object_t * __this /* static, unused */, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m14097 (Object_t * __this /* static, unused */, Version_t165 * ___v1, Version_t165 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m14098 (Object_t * __this /* static, unused */, Version_t165 * ___v1, Version_t165 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_GreaterThan(System.Version,System.Version)
extern "C" bool Version_op_GreaterThan_m2019 (Object_t * __this /* static, unused */, Version_t165 * ___v1, Version_t165 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" bool Version_op_LessThan_m2020 (Object_t * __this /* static, unused */, Version_t165 * ___v1, Version_t165 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
