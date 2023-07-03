set(_FILES
  saturationPressureModel/saturationPressureModel.C
  saturationPressureModel/saturationPressureModelNew.C
  saturationTemperatureModel/saturationTemperatureModel.C
  saturationTemperatureModel/saturationTemperatureModelNew.C
  Antoine/Antoine.C
  ArdenBuck/ArdenBuck.C
  constantPressure/constantPressure.C
  constantTemperature/constantTemperature.C
  function1Temperature/function1Temperature.C
  polynomialTemperature/polynomialTemperature.C
)
add_library(saturationModels ${_FILES})
target_compile_features(saturationModels PUBLIC cxx_std_11)
target_include_directories(saturationModels PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/saturationModels/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/saturationModels/includePrivate)
