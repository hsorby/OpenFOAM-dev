set(_FILES
  Test-tokenise.C
)
add_executable(Test-tokenise ${_FILES})
target_compile_features(Test-tokenise PUBLIC cxx_std_11)
target_link_libraries(Test-tokenise PUBLIC finiteVolume)
