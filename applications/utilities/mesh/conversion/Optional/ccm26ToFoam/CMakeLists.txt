set(_FILES
  ccm26ToFoam.C
)
add_executable(ccm26ToFoam ${_FILES})
target_compile_features(ccm26ToFoam PUBLIC cxx_std_11)
target_link_libraries(ccm26ToFoam PUBLIC finiteVolume)
