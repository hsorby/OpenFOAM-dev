set(_FILES
  loadOrCreateMesh.C
  redistributePar.C
)
add_executable(redistributePar ${_FILES})
target_compile_features(redistributePar PUBLIC cxx_std_11)
target_link_libraries(redistributePar PUBLIC finiteVolume)
