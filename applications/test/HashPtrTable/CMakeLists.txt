set(_FILES
  Test-hashPtrTable.C
)
add_executable(Test-hashPtrTable ${_FILES})
target_compile_features(Test-hashPtrTable PUBLIC cxx_std_11)
target_link_libraries(Test-hashPtrTable PUBLIC finiteVolume)
