set(_FILES
  Test-distribution.C
)
add_executable(Test-distribution ${_FILES})
target_compile_features(Test-distribution PUBLIC cxx_std_11)
target_link_libraries(Test-distribution PUBLIC finiteVolume)
