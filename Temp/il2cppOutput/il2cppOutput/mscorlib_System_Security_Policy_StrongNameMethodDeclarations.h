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

// System.Security.Policy.StrongName
struct StrongName_t2205;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2200;
// System.Version
struct Version_t165;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.String System.Security.Policy.StrongName::get_Name()
extern "C" String_t* StrongName_get_Name_m12858 (StrongName_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t2200 * StrongName_get_PublicKey_m12859 (StrongName_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C" Version_t165 * StrongName_get_Version_m12860 (StrongName_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C" bool StrongName_Equals_m12861 (StrongName_t2205 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C" int32_t StrongName_GetHashCode_m12862 (StrongName_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C" String_t* StrongName_ToString_m12863 (StrongName_t2205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
