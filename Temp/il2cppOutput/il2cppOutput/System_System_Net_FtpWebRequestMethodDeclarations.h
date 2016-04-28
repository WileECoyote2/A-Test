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

// System.Net.FtpWebRequest
struct FtpWebRequest_t1573;
// System.Uri
struct Uri_t710;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1409;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1464;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C" void FtpWebRequest__ctor_m8164 (FtpWebRequest_t1573 * __this, Uri_t710 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C" void FtpWebRequest__cctor_m8165 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool FtpWebRequest_U3CcallbackU3Em__B_m8166 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t1409 * ___certificate, X509Chain_t1464 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
