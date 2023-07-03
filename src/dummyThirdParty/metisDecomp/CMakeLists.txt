set(_FILES
  dummyMetisDecomp.C
)
add_library($(FOAM_LIBBIN)/dummy/libmetisDecomp ${_FILES})
target_compile_features($(FOAM_LIBBIN)/dummy/libmetisDecomp PUBLIC cxx_std_11)
target_include_directories($(FOAM_LIBBIN)/dummy/libmetisDecomp PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/metisDecomp/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/metisDecomp/includePrivate)
