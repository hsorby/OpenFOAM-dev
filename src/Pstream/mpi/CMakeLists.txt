set(_FILES
  UOPwrite.C
  UIPread.C
  UPstream.C
  PstreamGlobals.C
)
add_library(Pstream ${_FILES})
target_compile_features(Pstream PUBLIC cxx_std_11)
target_include_directories(Pstream PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/Pstream/mpi/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/Pstream/mpi/includePrivate)
