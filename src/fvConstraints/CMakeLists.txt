set(_FILES
  fixedValue/fixedValueConstraint.C
  fixedTemperature/fixedTemperatureConstraint.C
  limitTemperature/limitTemperature.C
  limitPressure/limitPressure.C
  limitMag/limitMag.C
  bound/boundConstraint.C
  meanVelocityForce/meanVelocityForce.C
  meanVelocityForce/patchMeanVelocityForce/patchMeanVelocityForce.C
  zeroDimensionalFixedPressure/zeroDimensionalFixedPressureConstraint.C
  zeroDimensionalFixedPressure/zeroDimensionalFixedPressureModel.C
)
add_library(fvConstraints ${_FILES})
target_compile_features(fvConstraints PUBLIC cxx_std_11)
target_include_directories(fvConstraints PUBLIC include PRIVATE includePrivate)
