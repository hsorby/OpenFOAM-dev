set(_FILES
  foamToC.C
)
add_executable(foamToC ${_FILES})
target_compile_features(foamToC PUBLIC cxx_std_11)
target_link_libraries(foamToC PUBLIC finiteVolume)
