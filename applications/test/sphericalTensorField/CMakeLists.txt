set(_FILES
  Test-sphericalTensorField.C
)
add_executable(Test-sphericalTensorField ${_FILES})
target_compile_features(Test-sphericalTensorField PUBLIC cxx_std_11)
target_link_libraries(Test-sphericalTensorField PUBLIC finiteVolume)
