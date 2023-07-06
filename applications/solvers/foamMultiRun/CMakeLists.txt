set(_FILES
  regionSolvers/regionSolvers.C
  setDeltaT.C
  foamMultiRun.C
)
add_executable(foamMultiRun ${_FILES})
target_compile_features(foamMultiRun PUBLIC cxx_std_11)
target_link_libraries(foamMultiRun PUBLIC finiteVolume)
