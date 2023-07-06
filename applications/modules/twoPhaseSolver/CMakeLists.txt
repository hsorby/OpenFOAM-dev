set(_FILES
  twoPhaseVoFMixture/twoPhaseVoFMixture.C
  alphaPredictor.C
  pressureCorrector.C
  twoPhaseSolver.C
)
add_library(twoPhaseSolver ${_FILES})
target_compile_features(twoPhaseSolver PUBLIC cxx_std_11)
target_include_directories(twoPhaseSolver PUBLIC include PRIVATE includePrivate)
