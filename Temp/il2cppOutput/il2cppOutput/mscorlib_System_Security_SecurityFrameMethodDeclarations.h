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

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t2215;
// System.Array
struct Array_t;
// System.Reflection.Assembly
struct Assembly_t406;
// System.AppDomain
struct AppDomain_t850;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1313;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m12918 (SecurityFrame_t2216 * __this, RuntimeSecurityFrame_t2215 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m12919 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m12920 (SecurityFrame_t2216 * __this, RuntimeSecurityFrame_t2215 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t406 * SecurityFrame_get_Assembly_m12921 (SecurityFrame_t2216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t850 * SecurityFrame_get_Domain_m12922 (SecurityFrame_t2216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m12923 (SecurityFrame_t2216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t1313 * SecurityFrame_GetStack_m12924 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
