set(_FILES
  Test-foamVersionString.C
)
add_executable(Test-foamVersionString ${_FILES})
target_compile_features(Test-foamVersionString PUBLIC cxx_std_11)
target_link_libraries(Test-foamVersionString PUBLIC finiteVolume)
