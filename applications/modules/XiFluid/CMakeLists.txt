set(_FILES
  XiFluid.C
  thermophysicalPredictor.C
)
add_library(XiFluid ${_FILES})
target_compile_features(XiFluid PUBLIC cxx_std_11)
target_include_directories(XiFluid PUBLIC include PRIVATE includePrivate)
