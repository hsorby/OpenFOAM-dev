set(_FILES
  dummyPtscotchDecomp.C
)
add_library($(FOAM_LIBBIN)/dummy/libptscotchDecomp ${_FILES})
target_compile_features($(FOAM_LIBBIN)/dummy/libptscotchDecomp PUBLIC cxx_std_11)
target_include_directories($(FOAM_LIBBIN)/dummy/libptscotchDecomp PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/ptscotchDecomp/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/ptscotchDecomp/includePrivate)
