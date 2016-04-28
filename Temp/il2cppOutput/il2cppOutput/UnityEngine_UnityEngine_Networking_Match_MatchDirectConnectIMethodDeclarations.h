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

// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct MatchDirectConnectInfo_t697;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m3751 (MatchDirectConnectInfo_t697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m3752 (MatchDirectConnectInfo_t697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m3753 (MatchDirectConnectInfo_t697 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m3754 (MatchDirectConnectInfo_t697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m3755 (MatchDirectConnectInfo_t697 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m3756 (MatchDirectConnectInfo_t697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m3757 (MatchDirectConnectInfo_t697 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern "C" String_t* MatchDirectConnectInfo_ToString_m3758 (MatchDirectConnectInfo_t697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern "C" void MatchDirectConnectInfo_Parse_m3759 (MatchDirectConnectInfo_t697 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
