set(_FILES
  Test-mappedPatch.C
)
add_executable(Test-mappedPatch ${_FILES})
target_compile_features(Test-mappedPatch PUBLIC cxx_std_11)
target_link_libraries(Test-mappedPatch PUBLIC finiteVolume)
