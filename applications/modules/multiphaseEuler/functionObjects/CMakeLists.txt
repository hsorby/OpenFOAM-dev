set(_FILES
  populationBalanceMoments/populationBalanceMoments.C
  populationBalanceSizeDistribution/populationBalanceSizeDistribution.C
  phaseForces/phaseForces.C
  phaseMap/phaseMap.C
  wallBoilingProperties/wallBoilingProperties.C
)
add_library(multiphaseEulerFoamFunctionObjects ${_FILES})
target_compile_features(multiphaseEulerFoamFunctionObjects PUBLIC cxx_std_11)
target_include_directories(multiphaseEulerFoamFunctionObjects PUBLIC include PRIVATE includePrivate)
