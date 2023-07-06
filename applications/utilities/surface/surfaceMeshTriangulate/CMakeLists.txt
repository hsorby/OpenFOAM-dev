set(_FILES
  surfaceMeshTriangulate.C
)
add_executable(surfaceMeshTriangulate ${_FILES})
target_compile_features(surfaceMeshTriangulate PUBLIC cxx_std_11)
target_link_libraries(surfaceMeshTriangulate PUBLIC finiteVolume)
