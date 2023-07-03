set(_FILES
  cavitationModel/cavitationModel.C
  cavitationModel/cavitationModelNew.C
  Kunz/Kunz.C
  Merkle/Merkle.C
  SchnerrSauer/SchnerrSauer.C
  Saito/Saito.C
)
add_library(compressibleCavitationModels ${_FILES})
target_compile_features(compressibleCavitationModels PUBLIC cxx_std_11)
target_include_directories(compressibleCavitationModels PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/compressibleCavitation/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/compressibleCavitation/includePrivate)
