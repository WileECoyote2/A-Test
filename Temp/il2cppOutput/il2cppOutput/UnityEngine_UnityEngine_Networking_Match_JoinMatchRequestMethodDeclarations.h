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

// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t692;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m3709 (JoinMatchRequest_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m3710 (JoinMatchRequest_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m3711 (JoinMatchRequest_t692 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m3712 (JoinMatchRequest_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m3713 (JoinMatchRequest_t692 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern "C" String_t* JoinMatchRequest_ToString_m3714 (JoinMatchRequest_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
