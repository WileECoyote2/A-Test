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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1416;
// Mono.Security.Protocol.Tls.Context
struct Context_t1368;
// System.Security.Cryptography.RSA
struct RSA_t1332;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m7400 (TlsClientCertificateVerify_t1416 * __this, Context_t1368 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m7401 (TlsClientCertificateVerify_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m7402 (TlsClientCertificateVerify_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m7403 (TlsClientCertificateVerify_t1416 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t1332 * TlsClientCertificateVerify_getClientCertRSA_m7404 (TlsClientCertificateVerify_t1416 * __this, RSA_t1332 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t29* TlsClientCertificateVerify_getUnsignedBigInteger_m7405 (TlsClientCertificateVerify_t1416 * __this, ByteU5BU5D_t29* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
