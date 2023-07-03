set(_FILES
  fvMeshTopoChangersMeshToMesh.C
  meshToMeshAdjustTimeStep/meshToMeshAdjustTimeStepFunctionObject.C
)
add_library(meshToMeshTopoChanger ${_FILES})
target_compile_features(meshToMeshTopoChanger PUBLIC cxx_std_11)
target_include_directories(meshToMeshTopoChanger PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/fvMeshTopoChangers/meshToMesh/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/fvMeshTopoChangers/meshToMesh/includePrivate)
