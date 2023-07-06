set(_FILES
  Test-parallel-communicators.C
)
add_executable(Test-parallel-communicators ${_FILES})
target_compile_features(Test-parallel-communicators PUBLIC cxx_std_11)
target_link_libraries(Test-parallel-communicators PUBLIC finiteVolume)
