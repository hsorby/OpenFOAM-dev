set(_FILES
  particle/particle.C
  particle/particleIO.C
  IOPosition/IOPositionName.C
  cloudCamel/cloud.C
  passiveParticle/passiveParticleCloud.C
  indexedParticle/indexedParticleCloud.C
  InteractionLists/referredWallFace/referredWallFace.C
)
add_library(lagrangian ${_FILES})
target_compile_features(lagrangian PUBLIC cxx_std_11)
target_include_directories(lagrangian
  PUBLIC
    include
    includePrivate
    demandDrivenEntry
    IOPosition
    Cloud
    particle
    InteractionLists
)
target_link_libraries(lagrangian PUBLIC OpenFOAM)
