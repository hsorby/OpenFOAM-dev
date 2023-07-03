set(_FILES
  atomicWeights/atomicWeights.C
  specie/specie.C
  reaction/specieCoeffs/specieCoeffs.C
  reaction/reaction/reaction.C
  thermophysicalFunctions/integratedNonUniformTable1/integratedNonUniformTable1.C
  thermophysicalFunctions/APIdiffCoef/APIdiffCoef.C
  thermophysicalFunctions/NSRDS/NSRDS0/NSRDS0.C
  thermophysicalFunctions/NSRDS/NSRDS1/NSRDS1.C
  thermophysicalFunctions/NSRDS/NSRDS2/NSRDS2.C
  thermophysicalFunctions/NSRDS/NSRDS3/NSRDS3.C
  thermophysicalFunctions/NSRDS/NSRDS4/NSRDS4.C
  thermophysicalFunctions/NSRDS/NSRDS5/NSRDS5.C
  thermophysicalFunctions/NSRDS/NSRDS6/NSRDS6.C
  thermophysicalFunctions/NSRDS/NSRDS7/NSRDS7.C
  thermophysicalFunctions/NSRDS/NSRDS14/NSRDS14.C
)
add_library(specie ${_FILES})
target_compile_features(specie PUBLIC cxx_std_11)
target_include_directories(specie PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/specie/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/specie/includePrivate)
