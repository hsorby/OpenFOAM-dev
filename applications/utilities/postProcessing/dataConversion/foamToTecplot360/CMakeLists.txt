set(_FILES
  tecplotWriter.C
  vtkMesh.C
  foamToTecplot360.C
)
add_executable(foamToTecplot360 ${_FILES})
target_compile_features(foamToTecplot360 PUBLIC cxx_std_11)
target_link_libraries(foamToTecplot360 PUBLIC finiteVolume)
