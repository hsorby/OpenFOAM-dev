set(_FILES
  Test-nonUniformTable.C
)
add_executable(Test-nonUniformTable ${_FILES})
target_compile_features(Test-nonUniformTable PUBLIC cxx_std_11)
target_link_libraries(Test-nonUniformTable PUBLIC finiteVolume)
