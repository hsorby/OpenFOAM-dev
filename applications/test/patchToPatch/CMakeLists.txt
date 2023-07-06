set(_FILES
  Test-patchToPatch.C
)
add_executable(Test-patchToPatch ${_FILES})
target_compile_features(Test-patchToPatch PUBLIC cxx_std_11)
target_link_libraries(Test-patchToPatch PUBLIC finiteVolume)
