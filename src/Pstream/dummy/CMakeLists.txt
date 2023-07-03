set(_FILES
  UPstream.C
  UIPread.C
  UOPwrite.C
)
add_library($(FOAM_LIBBIN)/dummy/libPstream ${_FILES})
target_compile_features($(FOAM_LIBBIN)/dummy/libPstream PUBLIC cxx_std_11)
target_include_directories($(FOAM_LIBBIN)/dummy/libPstream PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/Pstream/dummy/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/Pstream/dummy/includePrivate)
