set(_FILES
  Test-rigidBodyDynamics.C
)
add_executable(Test-rigidBodyDynamics ${_FILES})
target_compile_features(Test-rigidBodyDynamics PUBLIC cxx_std_11)
target_link_libraries(Test-rigidBodyDynamics PUBLIC finiteVolume)
