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

// AstarDebugger
struct AstarDebugger_t93;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void AstarDebugger::.ctor()
extern "C" void AstarDebugger__ctor_m414 (AstarDebugger_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::Start()
extern "C" void AstarDebugger_Start_m415 (AstarDebugger_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::Update()
extern "C" void AstarDebugger_Update_m416 (AstarDebugger_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::DrawGraphLine(System.Int32,UnityEngine.Matrix4x4,System.Single,System.Single,System.Single,System.Single,UnityEngine.Color)
extern "C" void AstarDebugger_DrawGraphLine_m417 (AstarDebugger_t93 * __this, int32_t ___index, Matrix4x4_t216  ___m, float ___x1, float ___x2, float ___y1, float ___y2, Color_t117  ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::Cross(UnityEngine.Vector3)
extern "C" void AstarDebugger_Cross_m418 (AstarDebugger_t93 * __this, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger::OnGUI()
extern "C" void AstarDebugger_OnGUI_m419 (AstarDebugger_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarDebugger::<debugTypes>m__C()
extern "C" int32_t AstarDebugger_U3CdebugTypesU3Em__C_m420 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AstarDebugger::<debugTypes>m__D()
extern "C" int32_t AstarDebugger_U3CdebugTypesU3Em__D_m421 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
