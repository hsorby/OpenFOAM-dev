set(_FILES
  incompressibleTwoPhases.C
)
add_library(incompressibleTwoPhases ${_FILES})
target_compile_features(incompressibleTwoPhases PUBLIC cxx_std_11)
target_include_directories(incompressibleTwoPhases PUBLIC include PRIVATE includePrivate)
