set(_FILES
  forces/forces.C
  forceCoeffs/forceCoeffs.C
)
add_library(forces ${_FILES})
target_compile_features(forces PUBLIC cxx_std_11)
target_include_directories(forces PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/functionObjects/forces/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/functionObjects/forces/includePrivate)
