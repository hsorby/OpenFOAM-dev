set(_FILES
  moving/fvMeshStitchersMoving.C
)
add_library(fvMeshStitchers ${_FILES})
target_compile_features(fvMeshStitchers PUBLIC cxx_std_11)
target_include_directories(fvMeshStitchers PUBLIC include PRIVATE includePrivate)
