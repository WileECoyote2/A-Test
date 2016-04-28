#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t237;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"

// Pathfinding.ObjImporter/meshStruct
struct  meshStruct_t236 
{
	// UnityEngine.Vector3[] Pathfinding.ObjImporter/meshStruct::vertices
	Vector3U5BU5D_t82* ___vertices_0;
	// UnityEngine.Vector3[] Pathfinding.ObjImporter/meshStruct::normals
	Vector3U5BU5D_t82* ___normals_1;
	// UnityEngine.Vector2[] Pathfinding.ObjImporter/meshStruct::uv
	Vector2U5BU5D_t237* ___uv_2;
	// UnityEngine.Vector2[] Pathfinding.ObjImporter/meshStruct::uv1
	Vector2U5BU5D_t237* ___uv1_3;
	// UnityEngine.Vector2[] Pathfinding.ObjImporter/meshStruct::uv2
	Vector2U5BU5D_t237* ___uv2_4;
	// System.Int32[] Pathfinding.ObjImporter/meshStruct::triangles
	Int32U5BU5D_t16* ___triangles_5;
	// System.Int32[] Pathfinding.ObjImporter/meshStruct::faceVerts
	Int32U5BU5D_t16* ___faceVerts_6;
	// System.Int32[] Pathfinding.ObjImporter/meshStruct::faceUVs
	Int32U5BU5D_t16* ___faceUVs_7;
	// UnityEngine.Vector3[] Pathfinding.ObjImporter/meshStruct::faceData
	Vector3U5BU5D_t82* ___faceData_8;
	// System.String Pathfinding.ObjImporter/meshStruct::name
	String_t* ___name_9;
	// System.String Pathfinding.ObjImporter/meshStruct::fileName
	String_t* ___fileName_10;
};
// Native definition for marshalling of: Pathfinding.ObjImporter/meshStruct
struct Vector3_t7 ;
struct Vector3_t7 ;
struct Vector2_t189 ;
struct Vector2_t189 ;
struct Vector2_t189 ;
struct Vector3_t7 ;
struct meshStruct_t236_marshaled
{
	Vector3_t7 * ___vertices_0;
	Vector3_t7 * ___normals_1;
	Vector2_t189 * ___uv_2;
	Vector2_t189 * ___uv1_3;
	Vector2_t189 * ___uv2_4;
	int32_t* ___triangles_5;
	int32_t* ___faceVerts_6;
	int32_t* ___faceUVs_7;
	Vector3_t7 * ___faceData_8;
	char* ___name_9;
	char* ___fileName_10;
};
