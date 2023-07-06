set(_FILES
  incompressibleDriftFluxMixture/incompressibleDriftFluxMixture.C
  alphaSuSp.C
  incompressibleDriftFlux.C
)
add_library(incompressibleDriftFlux ${_FILES})
target_compile_features(incompressibleDriftFlux PUBLIC cxx_std_11)
target_include_directories(incompressibleDriftFlux PUBLIC include PRIVATE includePrivate)
