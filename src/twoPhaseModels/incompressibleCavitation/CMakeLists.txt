set(_FILES
  cavitationModel/cavitationModel.C
  cavitationModel/cavitationModelNew.C
  Kunz/Kunz.C
  Merkle/Merkle.C
  SchnerrSauer/SchnerrSauer.C
)
add_library(incompressibleCavitationModels ${_FILES})
target_compile_features(incompressibleCavitationModels PUBLIC cxx_std_11)
target_include_directories(incompressibleCavitationModels PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/incompressibleCavitation/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/incompressibleCavitation/includePrivate)
