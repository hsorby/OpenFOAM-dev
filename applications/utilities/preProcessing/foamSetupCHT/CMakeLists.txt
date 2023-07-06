set(_FILES
  foamSetupCHT.C
)
add_executable(foamSetupCHT ${_FILES})
target_compile_features(foamSetupCHT PUBLIC cxx_std_11)
target_link_libraries(foamSetupCHT PUBLIC finiteVolume)
