set(_FILES
  mixtureViscosityModel/mixtureViscosityModel.C
  mixtureViscosityModel/mixtureViscosityModelNew.C
  plastic/plastic.C
  BinghamPlastic/BinghamPlastic.C
  slurry/slurry.C
  Quemada/Quemada.C
)
add_library(incompressibleDriftFluxViscosityModel ${_FILES})
target_compile_features(incompressibleDriftFluxViscosityModel PUBLIC cxx_std_11)
target_include_directories(incompressibleDriftFluxViscosityModel PUBLIC include PRIVATE includePrivate)
