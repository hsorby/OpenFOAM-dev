set(_FILES
  setRDeltaT.C
  moveMesh.C
  momentumPredictor.C
  correctPressure.C
  incompressibleFluid.C
)
add_library(incompressibleFluid ${_FILES})
target_compile_features(incompressibleFluid PUBLIC cxx_std_11)
target_include_directories(incompressibleFluid PUBLIC include PRIVATE includePrivate)
