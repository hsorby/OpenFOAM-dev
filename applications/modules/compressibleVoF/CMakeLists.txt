set(_FILES
  compressibleTwoPhaseVoFMixture/compressibleTwoPhaseVoFMixture.C
  compressibleInterPhaseTransportModel/compressibleInterPhaseTransportModel.C
  compressibleInterPhaseThermophysicalTransportModel/compressibleInterPhaseThermophysicalTransportModel.C
  alphaSuSp.C
  momentumPredictor.C
  thermophysicalPredictor.C
  pressureCorrector.C
  compressibleVoF.C
)
add_library(compressibleVoF ${_FILES})
target_compile_features(compressibleVoF PUBLIC cxx_std_11)
target_include_directories(compressibleVoF PUBLIC include PRIVATE includePrivate)
