set(_FILES
  surfaceAutoPatch.C
)
add_executable(surfaceAutoPatch ${_FILES})
target_compile_features(surfaceAutoPatch PUBLIC cxx_std_11)
target_link_libraries(surfaceAutoPatch PUBLIC finiteVolume)
