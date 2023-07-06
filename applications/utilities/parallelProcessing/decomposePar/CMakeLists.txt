set(_FILES
  decomposePar.C
  dimFieldDecomposer.C
  fvFieldDecomposer.C
  pointFieldDecomposer.C
  lagrangianFieldDecomposer.C
)
add_executable(decomposePar ${_FILES})
target_compile_features(decomposePar PUBLIC cxx_std_11)
target_link_libraries(decomposePar PUBLIC finiteVolume)
