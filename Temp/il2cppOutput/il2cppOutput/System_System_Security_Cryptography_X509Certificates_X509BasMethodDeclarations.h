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

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t1594;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1588;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C" void X509BasicConstraintsExtension__ctor_m8285 (X509BasicConstraintsExtension_t1594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m8286 (X509BasicConstraintsExtension_t1594 * __this, AsnEncodedData_t1588 * ___encodedBasicConstraints, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m8287 (X509BasicConstraintsExtension_t1594 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool X509BasicConstraintsExtension_get_CertificateAuthority_m8288 (X509BasicConstraintsExtension_t1594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C" bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8289 (X509BasicConstraintsExtension_t1594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C" int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m8290 (X509BasicConstraintsExtension_t1594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509BasicConstraintsExtension_CopyFrom_m8291 (X509BasicConstraintsExtension_t1594 * __this, AsnEncodedData_t1588 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C" int32_t X509BasicConstraintsExtension_Decode_m8292 (X509BasicConstraintsExtension_t1594 * __this, ByteU5BU5D_t29* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C" ByteU5BU5D_t29* X509BasicConstraintsExtension_Encode_m8293 (X509BasicConstraintsExtension_t1594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C" String_t* X509BasicConstraintsExtension_ToString_m8294 (X509BasicConstraintsExtension_t1594 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
