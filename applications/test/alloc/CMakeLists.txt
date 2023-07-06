set(_FILES
  Test-alloc.C
)
add_executable(Test-alloc ${_FILES})
target_compile_features(Test-alloc PUBLIC cxx_std_11)
target_link_libraries(Test-alloc PUBLIC finiteVolume)
