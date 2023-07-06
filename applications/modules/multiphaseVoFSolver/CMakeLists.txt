set(_FILES
  multiphaseVoFMixture/VoFphase/VoFphase.C
  multiphaseVoFMixture/multiphaseVoFMixture.C
  setInterfaceRDeltaT.C
  multiphaseVoFSolver.C
)
add_library(multiphaseVoFSolver ${_FILES})
target_compile_features(multiphaseVoFSolver PUBLIC cxx_std_11)
target_include_directories(multiphaseVoFSolver PUBLIC include PRIVATE includePrivate)
