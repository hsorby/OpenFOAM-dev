set(_FILES
  multicomponentFluid.C
  setRDeltaT.C
  thermophysicalPredictor.C
)
add_library(multicomponentFluid ${_FILES})
target_compile_features(multicomponentFluid PUBLIC cxx_std_11)
target_include_directories(multicomponentFluid PUBLIC include PRIVATE includePrivate)
