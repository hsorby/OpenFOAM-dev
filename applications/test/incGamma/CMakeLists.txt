set(_FILES
  Test-incGamma.C
)
add_executable(Test-incGamma ${_FILES})
target_compile_features(Test-incGamma PUBLIC cxx_std_11)
target_link_libraries(Test-incGamma PUBLIC finiteVolume)
