set(_FILES
  waveModels/waveModel/waveModel.C
  waveModels/waveModel/waveModelNew.C
  waveModels/Airy/Airy.C
  waveModels/Stokes2/Stokes2.C
  waveModels/Stokes5/Stokes5.C
  waveModels/solitary/solitary.C
  waveSuperpositions/waveSuperposition/waveSuperposition.C
  waveSuperpositions/waveSuperposition/waveSuperpositionNew.C
  waveSuperpositions/waveAtmBoundaryLayerSuperposition/waveAtmBoundaryLayerSuperposition.C
  derivedFvPatchFields/waveAlpha/waveAlphaFvPatchScalarField.C
  derivedFvPatchFields/waveInletOutlet/waveInletOutletFvPatchFields.C
  derivedFvPatchFields/waveVelocity/waveVelocityFvPatchVectorField.C
  fvModels/forcing/forcing.C
  fvModels/isotropicDamping/isotropicDamping.C
  fvModels/verticalDamping/verticalDamping.C
  fvModels/waveForcing/waveForcing.C
)
add_library(waves ${_FILES})
target_compile_features(waves PUBLIC cxx_std_11)
target_include_directories(waves PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/waves/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/waves/includePrivate)
