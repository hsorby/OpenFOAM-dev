set(_FILES
  dummyScotchDecomp.C
)
add_library($(FOAM_LIBBIN)/dummy/libscotchDecomp ${_FILES})
target_compile_features($(FOAM_LIBBIN)/dummy/libscotchDecomp PUBLIC cxx_std_11)
target_include_directories($(FOAM_LIBBIN)/dummy/libscotchDecomp PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/scotchDecomp/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/scotchDecomp/includePrivate)
