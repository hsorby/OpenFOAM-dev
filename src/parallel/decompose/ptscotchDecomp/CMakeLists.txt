set(_FILES
  ptscotchDecomp.C
)
add_library(ptscotchDecomp ${_FILES})
target_compile_features(ptscotchDecomp PUBLIC cxx_std_11)
target_include_directories(ptscotchDecomp PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/parallel/decompose/ptscotchDecomp/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/parallel/decompose/ptscotchDecomp/includePrivate)
