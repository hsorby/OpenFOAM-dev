set(_FILES
  VoFMixture/VoFMixture.C
  setRDeltaT.C
  moveMesh.C
  momentumPredictor.C
  VoFSolver.C
)
add_library(VoFSolver ${_FILES})
target_compile_features(VoFSolver PUBLIC cxx_std_11)
target_include_directories(VoFSolver PUBLIC include PRIVATE includePrivate)
