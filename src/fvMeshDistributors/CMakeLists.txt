set(_FILES
  distributor/fvMeshDistributorsDistributor.C
  loadBalancer/fvMeshDistributorsLoadBalancer.C
)
add_library(fvMeshDistributors ${_FILES})
target_compile_features(fvMeshDistributors PUBLIC cxx_std_11)
target_include_directories(fvMeshDistributors PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/fvMeshDistributors/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/fvMeshDistributors/includePrivate)
