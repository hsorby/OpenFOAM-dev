set(_FILES
  relativeVelocityModel/relativeVelocityModel.C
  simple/simple.C
  general/general.C
  MichaelsBolger/MichaelsBolger.C
)
add_library(incompressibleDriftFluxRelativeVelocityModels ${_FILES})
target_compile_features(incompressibleDriftFluxRelativeVelocityModels PUBLIC cxx_std_11)
target_include_directories(incompressibleDriftFluxRelativeVelocityModels PUBLIC include PRIVATE includePrivate)
