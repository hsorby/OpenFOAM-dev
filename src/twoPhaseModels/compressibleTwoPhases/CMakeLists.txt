set(_FILES
  compressibleTwoPhases.C
)
add_library(compressibleTwoPhases ${_FILES})
target_compile_features(compressibleTwoPhases PUBLIC cxx_std_11)
target_include_directories(compressibleTwoPhases PUBLIC include PRIVATE includePrivate)
