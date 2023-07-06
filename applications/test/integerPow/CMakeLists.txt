set(_FILES
  Test-integerPow.C
)
add_executable(Test-integerPow ${_FILES})
target_compile_features(Test-integerPow PUBLIC cxx_std_11)
target_link_libraries(Test-integerPow PUBLIC finiteVolume)
