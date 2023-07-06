set(_FILES
  Test-Hashing.C
)
add_executable(Test-Hashing ${_FILES})
target_compile_features(Test-Hashing PUBLIC cxx_std_11)
target_link_libraries(Test-Hashing PUBLIC finiteVolume)
