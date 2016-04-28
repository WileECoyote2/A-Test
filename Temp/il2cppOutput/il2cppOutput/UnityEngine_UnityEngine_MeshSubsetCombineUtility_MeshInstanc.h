#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.MeshSubsetCombineUtility/MeshInstance
struct  MeshInstance_t803 
{
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::meshInstanceID
	int32_t ___meshInstanceID_0;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::rendererInstanceID
	int32_t ___rendererInstanceID_1;
	// System.Int32 UnityEngine.MeshSubsetCombineUtility/MeshInstance::additionalVertexStreamsMeshInstanceID
	int32_t ___additionalVertexStreamsMeshInstanceID_2;
	// UnityEngine.Matrix4x4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::transform
	Matrix4x4_t216  ___transform_3;
	// UnityEngine.Vector4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::lightmapScaleOffset
	Vector4_t435  ___lightmapScaleOffset_4;
	// UnityEngine.Vector4 UnityEngine.MeshSubsetCombineUtility/MeshInstance::realtimeLightmapScaleOffset
	Vector4_t435  ___realtimeLightmapScaleOffset_5;
};
