set(_FILES
  fluidSolver.C
)
add_library(fluidSolver ${_FILES})
target_compile_features(fluidSolver PUBLIC cxx_std_11)
target_include_directories(fluidSolver PUBLIC include PRIVATE includePrivate)
