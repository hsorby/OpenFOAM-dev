set(_FILES
  surfaceMeshWriter.C
  internalWriter.C
  lagrangianWriter.C
  patchWriter.C
  writeFaceSet.C
  writePointSet.C
  writeSurfFields.C
  vtkMesh.C
  vtkTopo.C
  writeVTK/writeVTK.C
)
add_library(foamToVTK ${_FILES})
target_compile_features(foamToVTK PUBLIC cxx_std_11)
target_include_directories(foamToVTK PUBLIC include PRIVATE includePrivate)
