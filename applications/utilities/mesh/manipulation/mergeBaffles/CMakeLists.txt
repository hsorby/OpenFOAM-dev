set(_FILES
  mergeBaffles.C
)
add_executable(mergeBaffles ${_FILES})
target_compile_features(mergeBaffles PUBLIC cxx_std_11)
target_link_libraries(mergeBaffles PUBLIC finiteVolume)
