set(_FILES
  Test-ListHashTable.C
)
add_executable(Test-ListHashTable ${_FILES})
target_compile_features(Test-ListHashTable PUBLIC cxx_std_11)
target_link_libraries(Test-ListHashTable PUBLIC finiteVolume)
