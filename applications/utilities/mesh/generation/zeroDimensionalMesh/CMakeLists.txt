set(_FILES
  zeroDimensionalMesh.C
)
add_executable(zeroDimensionalMesh ${_FILES})
target_compile_features(zeroDimensionalMesh PUBLIC cxx_std_11)
target_link_libraries(zeroDimensionalMesh PUBLIC finiteVolume)
