set(_FILES
  movingMesh.C
)
add_library(movingMesh ${_FILES})
target_compile_features(movingMesh PUBLIC cxx_std_11)
target_include_directories(movingMesh PUBLIC include PRIVATE includePrivate)
