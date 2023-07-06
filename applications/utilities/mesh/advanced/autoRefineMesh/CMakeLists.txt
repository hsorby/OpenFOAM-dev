set(_FILES
  autoRefineMesh.C
)
add_executable(autoRefineMesh ${_FILES})
target_compile_features(autoRefineMesh PUBLIC cxx_std_11)
target_link_libraries(autoRefineMesh PUBLIC finiteVolume)
