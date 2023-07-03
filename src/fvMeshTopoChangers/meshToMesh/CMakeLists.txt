set(_FILES
  fvMeshTopoChangersMeshToMesh.C
  meshToMeshAdjustTimeStep/meshToMeshAdjustTimeStepFunctionObject.C
)
add_library(meshToMeshTopoChanger ${_FILES})
target_compile_features(meshToMeshTopoChanger PUBLIC cxx_std_11)
target_include_directories(meshToMeshTopoChanger PUBLIC include PRIVATE includePrivate)
