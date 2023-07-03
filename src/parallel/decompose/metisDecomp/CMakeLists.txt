set(_FILES
  metisDecomp.C
)
add_library(metisDecomp ${_FILES})
target_compile_features(metisDecomp PUBLIC cxx_std_11)
target_include_directories(metisDecomp PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/parallel/decompose/metisDecomp/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/parallel/decompose/metisDecomp/includePrivate)
