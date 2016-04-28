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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1463;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1596;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1592;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1427;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1587;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1589;
// Mono.Security.ASN1
struct ASN1_t1312;
// System.Text.StringBuilder
struct StringBuilder_t95;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1338;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C" void X509Certificate2__ctor_m7542 (X509Certificate2_t1463 * __this, ByteU5BU5D_t29* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C" void X509Certificate2__cctor_m8295 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C" X509ExtensionCollection_t1596 * X509Certificate2_get_Extensions_m8296 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C" X500DistinguishedName_t1592 * X509Certificate2_get_IssuerName_m8297 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C" DateTime_t134  X509Certificate2_get_NotAfter_m8298 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C" DateTime_t134  X509Certificate2_get_NotBefore_m8299 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C" AsymmetricAlgorithm_t1427 * X509Certificate2_get_PrivateKey_m7547 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C" PublicKey_t1587 * X509Certificate2_get_PublicKey_m8300 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C" String_t* X509Certificate2_get_SerialNumber_m8301 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C" Oid_t1589 * X509Certificate2_get_SignatureAlgorithm_m8302 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C" X500DistinguishedName_t1592 * X509Certificate2_get_SubjectName_m8303 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C" String_t* X509Certificate2_get_Thumbprint_m8304 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C" int32_t X509Certificate2_get_Version_m8305 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C" String_t* X509Certificate2_GetNameInfo_m8306 (X509Certificate2_t1463 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C" ASN1_t1312 * X509Certificate2_Find_m8307 (X509Certificate2_t1463 * __this, ByteU5BU5D_t29* ___oid, ASN1_t1312 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C" String_t* X509Certificate2_GetValueAsString_m8308 (X509Certificate2_t1463 * __this, ASN1_t1312 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C" void X509Certificate2_ImportPkcs12_m8309 (X509Certificate2_t1463 * __this, ByteU5BU5D_t29* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m8310 (X509Certificate2_t1463 * __this, ByteU5BU5D_t29* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C" void X509Certificate2_Reset_m8311 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C" String_t* X509Certificate2_ToString_m8312 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C" String_t* X509Certificate2_ToString_m8313 (X509Certificate2_t1463 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C" void X509Certificate2_AppendBuffer_m8314 (Object_t * __this /* static, unused */, StringBuilder_t95 * ___sb, ByteU5BU5D_t29* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C" bool X509Certificate2_Verify_m8315 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C" X509Certificate_t1338 * X509Certificate2_get_MonoCertificate_m8316 (X509Certificate2_t1463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
