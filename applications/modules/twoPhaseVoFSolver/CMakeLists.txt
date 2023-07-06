set(_FILES
  setInterfaceRDeltaT.C
  twoPhaseVoFSolver.C
)
add_library(twoPhaseVoFSolver ${_FILES})
target_compile_features(twoPhaseVoFSolver PUBLIC cxx_std_11)
target_include_directories(twoPhaseVoFSolver PUBLIC include PRIVATE includePrivate)
