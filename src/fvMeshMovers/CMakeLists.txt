set(_FILES
  motionSolver/fvMeshMoversMotionSolver.C
  interpolator/fvMeshMoversInterpolator.C
  inkJet/fvMeshMoversInkJet.C
  engine/engine/fvMeshMoversEngine.C
  engine/layered/fvMeshMoversLayeredEngine.C
  engine/engineValve/engineValve.C
  engine/enginePiston/enginePiston.C
)
add_library(fvMeshMovers ${_FILES})
target_compile_features(fvMeshMovers PUBLIC cxx_std_11)
target_include_directories(fvMeshMovers PUBLIC include PRIVATE includePrivate)
target_link_libraries(fvMeshMovers PUBLIC finiteVolume dynamicMesh)
