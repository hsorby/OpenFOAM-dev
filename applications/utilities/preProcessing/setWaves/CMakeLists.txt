set(_FILES
  setWaves.C
)
add_executable(setWaves ${_FILES})
target_compile_features(setWaves PUBLIC cxx_std_11)
target_link_libraries(setWaves PUBLIC finiteVolume)
