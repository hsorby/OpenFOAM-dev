set(_FILES
  processorRunTimes.C
  domainDecomposition.C
  domainDecompositionDecompose.C
  domainDecompositionReconstruct.C
)
add_library(parallel ${_FILES})
target_compile_features(parallel PUBLIC cxx_std_11)
target_include_directories(parallel PUBLIC include PRIVATE includePrivate)
target_link_libraries(parallel PUBLIC OpenFOAM decompositionMethods finiteVolume dynamicMesh meshTools)
