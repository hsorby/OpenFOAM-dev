set(_FILES
  moving/fvMeshStitchersMoving.C
)
add_library(fvMeshStitchers ${_FILES})
target_compile_features(fvMeshStitchers PUBLIC cxx_std_11)
target_include_directories(fvMeshStitchers PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/fvMeshStitchers/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/fvMeshStitchers/includePrivate)
