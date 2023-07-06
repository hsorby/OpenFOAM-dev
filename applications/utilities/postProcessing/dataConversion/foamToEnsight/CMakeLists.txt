set(_FILES
  itoa.C
  ensightMesh.C
  ensightParticlePositions.C
  foamToEnsight.C
)
add_executable(foamToEnsight ${_FILES})
target_compile_features(foamToEnsight PUBLIC cxx_std_11)
target_link_libraries(foamToEnsight PUBLIC finiteVolume)
