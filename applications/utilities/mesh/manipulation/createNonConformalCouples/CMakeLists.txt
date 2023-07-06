set(_FILES
  createNonConformalCouples.C
)
add_executable(createNonConformalCouples ${_FILES})
target_compile_features(createNonConformalCouples PUBLIC cxx_std_11)
target_link_libraries(createNonConformalCouples PUBLIC finiteVolume)
