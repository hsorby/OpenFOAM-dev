set(_FILES
  splitBaffles.C
)
add_executable(splitBaffles ${_FILES})
target_compile_features(splitBaffles PUBLIC cxx_std_11)
target_link_libraries(splitBaffles PUBLIC finiteVolume)
