set(_FILES
  reconstructPar.C
  fvFieldReconstructor.C
  pointFieldReconstructor.C
  reconstructLagrangianPositions.C
)
add_executable(reconstructPar ${_FILES})
target_compile_features(reconstructPar PUBLIC cxx_std_11)
target_link_libraries(reconstructPar PUBLIC finiteVolume)
