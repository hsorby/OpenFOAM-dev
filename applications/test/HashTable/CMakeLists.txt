set(_FILES
  Test-hashTable.C
)
add_executable(Test-hashTable ${_FILES})
target_compile_features(Test-hashTable PUBLIC cxx_std_11)
target_link_libraries(Test-hashTable PUBLIC finiteVolume)
