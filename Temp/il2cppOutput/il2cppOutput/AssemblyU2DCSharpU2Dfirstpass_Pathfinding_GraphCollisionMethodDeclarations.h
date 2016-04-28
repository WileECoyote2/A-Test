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

// Pathfinding.GraphCollision
struct GraphCollision_t220;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t278;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void Pathfinding.GraphCollision::.ctor()
extern "C" void GraphCollision__ctor_m952 (GraphCollision_t220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphCollision::Initialize(UnityEngine.Matrix4x4,System.Single)
extern "C" void GraphCollision_Initialize_m953 (GraphCollision_t220 * __this, Matrix4x4_t216  ___matrix, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphCollision::Check(UnityEngine.Vector3)
extern "C" bool GraphCollision_Check_m954 (GraphCollision_t220 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GraphCollision::CheckHeight(UnityEngine.Vector3)
extern "C" Vector3_t7  GraphCollision_CheckHeight_m955 (GraphCollision_t220 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GraphCollision::CheckHeight(UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Boolean&)
extern "C" Vector3_t7  GraphCollision_CheckHeight_m956 (GraphCollision_t220 * __this, Vector3_t7  ___position, RaycastHit_t279 * ___hit, bool* ___walkable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GraphCollision::Raycast(UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Boolean&)
extern "C" Vector3_t7  GraphCollision_Raycast_m957 (GraphCollision_t220 * __this, Vector3_t7  ___origin, RaycastHit_t279 * ___hit, bool* ___walkable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] Pathfinding.GraphCollision::CheckHeightAll(UnityEngine.Vector3)
extern "C" RaycastHitU5BU5D_t278* GraphCollision_CheckHeightAll_m958 (GraphCollision_t220 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphCollision::SerializeSettings(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GraphCollision_SerializeSettings_m959 (GraphCollision_t220 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphCollision::DeserializeSettings(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GraphCollision_DeserializeSettings_m960 (GraphCollision_t220 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
