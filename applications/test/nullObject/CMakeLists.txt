set(_FILES
  Test-nullObject.C
)
add_executable(nullObject ${_FILES})
target_compile_features(nullObject PUBLIC cxx_std_11)
target_link_libraries(nullObject PUBLIC finiteVolume)
