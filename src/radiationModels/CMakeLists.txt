set(_FILES
  radiationModels/radiationModel/radiationModel.C
  radiationModels/radiationModel/radiationModelNew.C
  radiationModels/noRadiation/noRadiation.C
  radiationModels/P1/P1.C
  radiationModels/fvDOM/fvDOM.C
  radiationModels/fvDOM/radiativeIntensityRay/radiativeIntensityRay.C
  radiationModels/fvDOM/blackBodyEmission/blackBodyEmission.C
  radiationModels/fvDOM/absorptionCoeffs/absorptionCoeffs.C
  radiationModels/viewFactor/viewFactor.C
  radiationModels/opaqueSolid/opaqueSolid.C
  scatterModels/scatterModel/scatterModel.C
  scatterModels/scatterModel/scatterModelNew.C
  scatterModels/noScatter/noScatter.C
  scatterModels/constantScatter/constantScatter.C
  absorptionEmissionModels/absorptionEmissionModel/absorptionEmissionModel.C
  absorptionEmissionModels/absorptionEmissionModel/absorptionEmissionModelNew.C
  absorptionEmissionModels/noAbsorptionEmission/noAbsorptionEmission.C
  absorptionEmissionModels/constantAbsorptionEmission/constantAbsorptionEmission.C
  absorptionEmissionModels/binary/binary.C
  absorptionEmissionModels/greyMean/greyMean.C
  absorptionEmissionModels/wideBand/wideBand.C
  absorptionEmissionModels/interpolationLookUpTable/interpolationLookUpTable.C
  sootModels/sootModel/sootModel.C
  sootModels/sootModel/sootModelNew.C
  sootModels/noSoot/noSoot.C
  derivedFvPatchFields/MarshakRadiation/MarshakRadiationFvPatchScalarField.C
  derivedFvPatchFields/MarshakRadiationFixedTemperature/MarshakRadiationFixedTemperatureFvPatchScalarField.C
  derivedFvPatchFields/greyDiffusiveRadiation/greyDiffusiveRadiationMixedFvPatchScalarField.C
  derivedFvPatchFields/wideBandDiffusiveRadiation/wideBandDiffusiveRadiationMixedFvPatchScalarField.C
  derivedFvPatchFields/radiationCoupledBase/radiationCoupledBase.C
  derivedFvPatchFields/greyDiffusiveViewFactor/greyDiffusiveViewFactorFixedValueFvPatchScalarField.C
  fvModels/radiation/radiation.C
)
add_library(radiationModels ${_FILES})
target_compile_features(radiationModels PUBLIC cxx_std_11)
target_include_directories(radiationModels PUBLIC include PRIVATE includePrivate)
