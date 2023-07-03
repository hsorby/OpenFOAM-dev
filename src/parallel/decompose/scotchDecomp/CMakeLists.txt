set(_FILES
  scotchDecomp.C
)
add_library(scotchDecomp ${_FILES})
target_compile_features(scotchDecomp PUBLIC cxx_std_11)
target_include_directories(scotchDecomp PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/parallel/decompose/scotchDecomp/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/parallel/decompose/scotchDecomp/includePrivate)
