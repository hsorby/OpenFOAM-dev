set(_FILES
  Test-tmpField.C
)
add_executable(Test-tmpField ${_FILES})
target_compile_features(Test-tmpField PUBLIC cxx_std_11)
target_link_libraries(Test-tmpField PUBLIC finiteVolume)
