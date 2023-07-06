set(_FILES
  extrude2DMesh/extrude2DMesh.C
  patchToPoly2DMesh/patchToPoly2DMesh.C
)
add_library(extrude2DMesh ${_FILES})
target_compile_features(extrude2DMesh PUBLIC cxx_std_11)
target_include_directories(extrude2DMesh PUBLIC include PRIVATE includePrivate)
