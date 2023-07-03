set(_FILES
  distributedTriSurfaceMesh/distributedTriSurfaceMesh.C
)
add_library(distributed ${_FILES})
target_compile_features(distributed PUBLIC cxx_std_11)
target_include_directories(distributed PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/parallel/distributed/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/parallel/distributed/includePrivate)
