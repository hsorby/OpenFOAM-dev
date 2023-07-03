set(_FILES
  solidThermophysicalTransportModel/solidThermophysicalTransportModel.C
  isotropic/isotropic.C
  anisotropic/anisotropic.C
)
add_library(solidThermophysicalTransportModels ${_FILES})
target_compile_features(solidThermophysicalTransportModels PUBLIC cxx_std_11)
target_include_directories(solidThermophysicalTransportModels PUBLIC include PRIVATE includePrivate)
