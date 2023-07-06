set(_FILES
  Test-tensor.C
)
add_executable(Test-tensor ${_FILES})
target_compile_features(Test-tensor PUBLIC cxx_std_11)
target_link_libraries(Test-tensor PUBLIC finiteVolume)
