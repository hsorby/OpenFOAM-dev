set(_FILES
  foamPostProcess.C
)
add_executable(foamPostProcess ${_FILES})
target_compile_features(foamPostProcess PUBLIC cxx_std_11)
target_link_libraries(foamPostProcess PUBLIC finiteVolume)
