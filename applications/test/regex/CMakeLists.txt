set(_FILES
  Test-regex.C
)
add_executable(Test-regex ${_FILES})
target_compile_features(Test-regex PUBLIC cxx_std_11)
target_link_libraries(Test-regex PUBLIC finiteVolume)
