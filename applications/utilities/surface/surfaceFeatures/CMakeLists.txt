set(_FILES
  surfaceFeatures.C
)
add_executable(surfaceFeatures ${_FILES})
target_compile_features(surfaceFeatures PUBLIC cxx_std_11)
target_link_libraries(surfaceFeatures PUBLIC finiteVolume)
