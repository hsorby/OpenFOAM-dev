set(_FILES
  setRDeltaT.C
  moveMesh.C
  prePredictor.C
  correctDensity.C
  momentumPredictor.C
  correctPressure.C
  correctBuoyantPressure.C
  isothermalFluid.C
)
add_library(isothermalFluid ${_FILES})
target_compile_features(isothermalFluid PUBLIC cxx_std_11)
target_include_directories(isothermalFluid PUBLIC include PRIVATE includePrivate)
