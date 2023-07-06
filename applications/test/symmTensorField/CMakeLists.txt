set(_FILES
  Test-symmTensorField.C
)
add_executable(Test-symmTensorField ${_FILES})
target_compile_features(Test-symmTensorField PUBLIC cxx_std_11)
target_link_libraries(Test-symmTensorField PUBLIC finiteVolume)
