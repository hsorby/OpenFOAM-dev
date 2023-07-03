set(_FILES
  incompressibleMomentumTransportModel.C
  incompressibleMomentumTransportModels.C
  RAS/qZeta/qZeta.C
  RAS/kkLOmega/kkLOmega.C
  RAS/LamBremhorstKE/LamBremhorstKE.C
  RAS/LienLeschziner/LienLeschziner.C
  RAS/ShihQuadraticKE/ShihQuadraticKE.C
  RAS/LienCubicKE/LienCubicKE.C
)
add_library(incompressibleMomentumTransportModels ${_FILES})
target_compile_features(incompressibleMomentumTransportModels PUBLIC cxx_std_11)
target_include_directories(incompressibleMomentumTransportModels PUBLIC include PRIVATE includePrivate)
