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

// Mono.Security.Protocol.Tls.Context
struct Context_t1368;
// System.Byte[]
struct ByteU5BU5D_t29;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1379;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t1380;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1369;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1382;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1374;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1381;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void Context__ctor_m7074 (Context_t1368 * __this, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
extern "C" bool Context_get_AbbreviatedHandshake_m7075 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
extern "C" void Context_set_AbbreviatedHandshake_m7076 (Context_t1368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
extern "C" bool Context_get_ProtocolNegotiated_m7077 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
extern "C" void Context_set_ProtocolNegotiated_m7078 (Context_t1368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
extern "C" int32_t Context_get_SecurityProtocol_m7079 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void Context_set_SecurityProtocol_m7080 (Context_t1368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
extern "C" int32_t Context_get_SecurityProtocolFlags_m7081 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
extern "C" int16_t Context_get_Protocol_m7082 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
extern "C" ByteU5BU5D_t29* Context_get_SessionId_m7083 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
extern "C" void Context_set_SessionId_m7084 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
extern "C" int32_t Context_get_CompressionMethod_m7085 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
extern "C" void Context_set_CompressionMethod_m7086 (Context_t1368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
extern "C" TlsServerSettings_t1379 * Context_get_ServerSettings_m7087 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
extern "C" TlsClientSettings_t1380 * Context_get_ClientSettings_m7088 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
extern "C" uint8_t Context_get_LastHandshakeMsg_m7089 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void Context_set_LastHandshakeMsg_m7090 (Context_t1368 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
extern "C" int32_t Context_get_HandshakeState_m7091 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
extern "C" void Context_set_HandshakeState_m7092 (Context_t1368 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
extern "C" bool Context_get_ReceivedConnectionEnd_m7093 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
extern "C" void Context_set_ReceivedConnectionEnd_m7094 (Context_t1368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
extern "C" bool Context_get_SentConnectionEnd_m7095 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
extern "C" void Context_set_SentConnectionEnd_m7096 (Context_t1368 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
extern "C" CipherSuiteCollection_t1369 * Context_get_SupportedCiphers_m7097 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
extern "C" void Context_set_SupportedCiphers_m7098 (Context_t1368 * __this, CipherSuiteCollection_t1369 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
extern "C" TlsStream_t1382 * Context_get_HandshakeMessages_m7099 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
extern "C" uint64_t Context_get_WriteSequenceNumber_m7100 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
extern "C" void Context_set_WriteSequenceNumber_m7101 (Context_t1368 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
extern "C" uint64_t Context_get_ReadSequenceNumber_m7102 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
extern "C" void Context_set_ReadSequenceNumber_m7103 (Context_t1368 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
extern "C" ByteU5BU5D_t29* Context_get_ClientRandom_m7104 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
extern "C" void Context_set_ClientRandom_m7105 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
extern "C" ByteU5BU5D_t29* Context_get_ServerRandom_m7106 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
extern "C" void Context_set_ServerRandom_m7107 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
extern "C" ByteU5BU5D_t29* Context_get_RandomCS_m7108 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
extern "C" void Context_set_RandomCS_m7109 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
extern "C" ByteU5BU5D_t29* Context_get_RandomSC_m7110 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
extern "C" void Context_set_RandomSC_m7111 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
extern "C" ByteU5BU5D_t29* Context_get_MasterSecret_m7112 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
extern "C" void Context_set_MasterSecret_m7113 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
extern "C" ByteU5BU5D_t29* Context_get_ClientWriteKey_m7114 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
extern "C" void Context_set_ClientWriteKey_m7115 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
extern "C" ByteU5BU5D_t29* Context_get_ServerWriteKey_m7116 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
extern "C" void Context_set_ServerWriteKey_m7117 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
extern "C" ByteU5BU5D_t29* Context_get_ClientWriteIV_m7118 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
extern "C" void Context_set_ClientWriteIV_m7119 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
extern "C" ByteU5BU5D_t29* Context_get_ServerWriteIV_m7120 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
extern "C" void Context_set_ServerWriteIV_m7121 (Context_t1368 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
extern "C" RecordProtocol_t1374 * Context_get_RecordProtocol_m7122 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
extern "C" void Context_set_RecordProtocol_m7123 (Context_t1368 * __this, RecordProtocol_t1374 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
extern "C" int32_t Context_GetUnixTime_m7124 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
extern "C" ByteU5BU5D_t29* Context_GetSecureRandomBytes_m7125 (Context_t1368 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
extern "C" void Context_Clear_m7126 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
extern "C" void Context_ClearKeyInfo_m7127 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
extern "C" int32_t Context_DecodeProtocolCode_m7128 (Context_t1368 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
extern "C" void Context_ChangeProtocol_m7129 (Context_t1368 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
extern "C" SecurityParameters_t1381 * Context_get_Current_m7130 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
extern "C" SecurityParameters_t1381 * Context_get_Negotiating_m7131 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
extern "C" SecurityParameters_t1381 * Context_get_Read_m7132 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
extern "C" SecurityParameters_t1381 * Context_get_Write_m7133 (Context_t1368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
extern "C" void Context_StartSwitchingSecurityParameters_m7134 (Context_t1368 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
extern "C" void Context_EndSwitchingSecurityParameters_m7135 (Context_t1368 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
