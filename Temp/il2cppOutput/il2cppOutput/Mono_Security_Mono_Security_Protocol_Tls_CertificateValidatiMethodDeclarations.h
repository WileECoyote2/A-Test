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

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1402;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1409;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int32.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m7454 (CertificateValidationCallback_t1402 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m7455 (CertificateValidationCallback_t1402 * __this, X509Certificate_t1409 * ___certificate, Int32U5BU5D_t16* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1402(Il2CppObject* delegate, X509Certificate_t1409 * ___certificate, Int32U5BU5D_t16* ___certificateErrors);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m7456 (CertificateValidationCallback_t1402 * __this, X509Certificate_t1409 * ___certificate, Int32U5BU5D_t16* ___certificateErrors, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m7457 (CertificateValidationCallback_t1402 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
