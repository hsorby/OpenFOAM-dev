set(_FILES
  Test-fvMeshStitcher.C
)
add_executable(Test-fvMeshStitcher ${_FILES})
target_compile_features(Test-fvMeshStitcher PUBLIC cxx_std_11)
target_link_libraries(Test-fvMeshStitcher PUBLIC finiteVolume)
