set(_FILES
  setRDeltaT.C
  moveMesh.C
  prePredictor.C
  fluxPredictor.C
  correctDensity.C
  momentumPredictor.C
  thermophysicalPredictor.C
  pressureCorrector.C
  shockFluid.C
  derivedFvPatchFields/mixedFixedValueSlip/mixedFixedValueSlipFvPatchFields.C
  derivedFvPatchFields/U/maxwellSlipUFvPatchVectorField.C
  derivedFvPatchFields/T/smoluchowskiJumpTFvPatchScalarField.C
  derivedFvPatchFields/rho/fixedRhoFvPatchScalarField.C
)
add_library(shockFluid ${_FILES})
target_compile_features(shockFluid PUBLIC cxx_std_11)
target_include_directories(shockFluid PUBLIC include PRIVATE includePrivate)
