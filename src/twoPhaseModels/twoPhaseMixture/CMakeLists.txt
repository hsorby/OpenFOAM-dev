set(_FILES
  twoPhases.C
  twoPhaseMixture.C
)
add_library(twoPhaseMixture ${_FILES})
target_compile_features(twoPhaseMixture PUBLIC cxx_std_11)
target_include_directories(twoPhaseMixture PUBLIC include PRIVATE includePrivate)
