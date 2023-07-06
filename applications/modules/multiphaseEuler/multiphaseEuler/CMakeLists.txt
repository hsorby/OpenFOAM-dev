set(_FILES
  setRDeltaT.C
  moveMesh.C
  momentumPredictor.C
  thermophysicalPredictor.C
  compressibilityEqns.C
  facePressureCorrector.C
  cellPressureCorrector.C
  pressureCorrector.C
  multiphaseEuler.C
)
add_library(multiphaseEuler ${_FILES})
target_compile_features(multiphaseEuler PUBLIC cxx_std_11)
target_include_directories(multiphaseEuler PUBLIC include PRIVATE includePrivate)
