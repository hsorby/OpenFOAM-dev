set(_FILES
  refiner/fvMeshTopoChangersRefiner.C
  movingCone/fvMeshTopoChangersMovingCone.C
)
add_library(fvMeshTopoChangers ${_FILES})
target_compile_features(fvMeshTopoChangers PUBLIC cxx_std_11)
target_include_directories(fvMeshTopoChangers PUBLIC include PRIVATE includePrivate)
