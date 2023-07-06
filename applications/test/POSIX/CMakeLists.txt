set(_FILES
  Test-POSIX.C
)
add_executable(Test-POSIX ${_FILES})
target_compile_features(Test-POSIX PUBLIC cxx_std_11)
target_link_libraries(Test-POSIX PUBLIC finiteVolume)
