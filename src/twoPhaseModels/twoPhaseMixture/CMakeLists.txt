set(_FILES
  twoPhases.C
  twoPhaseMixture.C
)
add_library(twoPhaseMixture ${_FILES})
target_compile_features(twoPhaseMixture PUBLIC cxx_std_11)
target_include_directories(twoPhaseMixture PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/twoPhaseMixture/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/twoPhaseMixture/includePrivate)
