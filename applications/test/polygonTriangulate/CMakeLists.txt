set(_FILES
  Test-polygonTriangulate.C
)
add_executable(Test-polygonTriangulate ${_FILES})
target_compile_features(Test-polygonTriangulate PUBLIC cxx_std_11)
target_link_libraries(Test-polygonTriangulate PUBLIC finiteVolume)
