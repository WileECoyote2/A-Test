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

// UnityEngine.Mesh
struct Mesh_t226;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t237;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m2159 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m2647 (Object_t * __this /* static, unused */, Mesh_t226 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C" bool Mesh_get_canAccess_m2648 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t82* Mesh_get_vertices_m2137 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m2160 (Mesh_t226 * __this, Vector3U5BU5D_t82* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m2162 (Mesh_t226 * __this, Vector3U5BU5D_t82* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m2161 (Mesh_t226 * __this, Vector2U5BU5D_t237* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m2164 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C" Int32U5BU5D_t16* Mesh_get_triangles_m2138 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m2163 (Mesh_t226 * __this, Int32U5BU5D_t16* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C" int32_t Mesh_get_vertexCount_m2649 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
extern "C" int32_t Mesh_get_subMeshCount_m2650 (Mesh_t226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
