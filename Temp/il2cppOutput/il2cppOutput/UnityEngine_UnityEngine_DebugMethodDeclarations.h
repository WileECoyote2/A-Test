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

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t328;
struct Object_t328_marshaled;
// System.Exception
struct Exception_t52;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void Debug_DrawLine_m3251 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___end, Color_t117  ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" void Debug_DrawLine_m1875 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___end, Color_t117  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m3252 (Object_t * __this /* static, unused */, Vector3_t7 * ___start, Vector3_t7 * ___end, Color_t117 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" void Debug_DrawRay_m1944 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___dir, Color_t117  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void Debug_DrawRay_m3253 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___dir, Color_t117  ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m3254 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t328 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m3255 (Object_t * __this /* static, unused */, Exception_t52 * ___exception, Object_t328 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m1753 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m1752 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m2080 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t328 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m1811 (Object_t * __this /* static, unused */, Exception_t52 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m3256 (Object_t * __this /* static, unused */, Exception_t52 * ___exception, Object_t328 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m1756 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m3257 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t328 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
