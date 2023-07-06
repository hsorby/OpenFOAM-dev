set(_FILES
  incompressibleTwoPhaseVoFMixture/incompressibleTwoPhaseVoFMixture.C
  incompressibleInterPhaseTransportModel/incompressibleInterPhaseTransportModel.C
  alphaSuSp.C
  incompressibleVoF.C
)
add_library(incompressibleVoF ${_FILES})
target_compile_features(incompressibleVoF PUBLIC cxx_std_11)
target_include_directories(incompressibleVoF PUBLIC include PRIVATE includePrivate)
