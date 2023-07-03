set(_FILES
  solidThermo/solidThermo.C
  solidThermo/solidThermos.C
  constSolidThermo/constSolidThermo.C
  constAnisoSolidThermo/constAnisoSolidThermo.C
)
add_library(solidThermo ${_FILES})
target_compile_features(solidThermo PUBLIC cxx_std_11)
target_include_directories(solidThermo PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/solidThermo/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/solidThermo/includePrivate)
