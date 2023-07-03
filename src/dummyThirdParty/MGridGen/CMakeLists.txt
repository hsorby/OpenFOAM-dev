set(_FILES
  dummyMGridGen.C
)
add_library($(FOAM_LIBBIN)/dummy/libMGridGen ${_FILES})
target_compile_features($(FOAM_LIBBIN)/dummy/libMGridGen PUBLIC cxx_std_11)
target_include_directories($(FOAM_LIBBIN)/dummy/libMGridGen PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/MGridGen/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/dummyThirdParty/MGridGen/includePrivate)
