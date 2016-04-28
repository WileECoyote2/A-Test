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

// Pathfinding.ObjImporter
struct ObjImporter_t238;
// UnityEngine.Mesh
struct Mesh_t226;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_ObjImporter_meshSt.h"

// System.Void Pathfinding.ObjImporter::.ctor()
extern "C" void ObjImporter__ctor_m1136 (ObjImporter_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Pathfinding.ObjImporter::ImportFile(System.String)
extern "C" Mesh_t226 * ObjImporter_ImportFile_m1137 (Object_t * __this /* static, unused */, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.ObjImporter/meshStruct Pathfinding.ObjImporter::createMeshStruct(System.String)
extern "C" meshStruct_t236  ObjImporter_createMeshStruct_m1138 (Object_t * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ObjImporter::populateMeshStruct(Pathfinding.ObjImporter/meshStruct&)
extern "C" void ObjImporter_populateMeshStruct_m1139 (Object_t * __this /* static, unused */, meshStruct_t236 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
