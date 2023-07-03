set(_FILES
  particle/particle.C
  particle/particleIO.C
  IOPosition/IOPositionName.C
  cloud/cloud.C
  passiveParticle/passiveParticleCloud.C
  indexedParticle/indexedParticleCloud.C
  InteractionLists/referredWallFace/referredWallFace.C
)
add_library(lagrangian ${_FILES})
target_compile_features(lagrangian PUBLIC cxx_std_11)
target_include_directories(lagrangian PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/lagrangian/basic/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/lagrangian/basic/includePrivate)
