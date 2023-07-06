set(_FILES
  Test-boundSphere.C
)
add_executable(Test-boundSphere ${_FILES})
target_compile_features(Test-boundSphere PUBLIC cxx_std_11)
target_link_libraries(Test-boundSphere PUBLIC finiteVolume)
