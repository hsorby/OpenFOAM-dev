set(_FILES
  Test-PackedList3.C
)
add_executable(Test-PackedList3 ${_FILES})
target_compile_features(Test-PackedList3 PUBLIC cxx_std_11)
target_link_libraries(Test-PackedList3 PUBLIC finiteVolume)
