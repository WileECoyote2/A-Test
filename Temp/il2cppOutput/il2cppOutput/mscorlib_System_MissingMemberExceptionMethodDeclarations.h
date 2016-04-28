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

// System.MissingMemberException
struct MissingMemberException_t2305;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMemberException::.ctor()
extern "C" void MissingMemberException__ctor_m13777 (MissingMemberException_t2305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C" void MissingMemberException__ctor_m13778 (MissingMemberException_t2305 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException__ctor_m13779 (MissingMemberException_t2305 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C" void MissingMemberException__ctor_m13780 (MissingMemberException_t2305 * __this, String_t* ___className, String_t* ___memberName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException_GetObjectData_m13781 (MissingMemberException_t2305 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
extern "C" String_t* MissingMemberException_get_Message_m13782 (MissingMemberException_t2305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
