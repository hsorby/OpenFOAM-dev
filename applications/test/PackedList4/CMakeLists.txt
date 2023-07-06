set(_FILES
  Test-PackedList4.C
)
add_executable(Test-PackedList4 ${_FILES})
target_compile_features(Test-PackedList4 PUBLIC cxx_std_11)
target_link_libraries(Test-PackedList4 PUBLIC finiteVolume)
