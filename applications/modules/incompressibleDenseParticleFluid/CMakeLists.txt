set(_FILES
  moveMesh.C
  momentumPredictor.C
  correctPressure.C
  incompressibleDenseParticleFluid.C
)
add_library(incompressibleDenseParticleFluid ${_FILES})
target_compile_features(incompressibleDenseParticleFluid PUBLIC cxx_std_11)
target_include_directories(incompressibleDenseParticleFluid PUBLIC include PRIVATE includePrivate)
