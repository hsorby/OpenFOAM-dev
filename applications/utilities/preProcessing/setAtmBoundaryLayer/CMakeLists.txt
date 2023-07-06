set(_FILES
  setAtmBoundaryLayer.C
)
add_executable(setAtmBoundaryLayer ${_FILES})
target_compile_features(setAtmBoundaryLayer PUBLIC cxx_std_11)
target_link_libraries(setAtmBoundaryLayer PUBLIC finiteVolume)
