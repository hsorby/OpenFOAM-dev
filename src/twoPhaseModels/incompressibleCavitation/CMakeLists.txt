set(_FILES
  cavitationModel/cavitationModel.C
  cavitationModel/cavitationModelNew.C
  Kunz/Kunz.C
  Merkle/Merkle.C
  SchnerrSauer/SchnerrSauer.C
)
add_library(incompressibleCavitationModels ${_FILES})
target_compile_features(incompressibleCavitationModels PUBLIC cxx_std_11)
target_include_directories(incompressibleCavitationModels PUBLIC include PRIVATE includePrivate)
