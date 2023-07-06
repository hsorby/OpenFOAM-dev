set(_FILES
  coupledFacePair.C
  starMesh.C
  readPoints.C
  readCells.C
  readBoundary.C
  fixCollapsedEdges.C
  readCouples.C
  createCoupleMatches.C
  mergeCoupleFacePoints.C
  calcPointCells.C
  createPolyCells.C
  createBoundaryFaces.C
  createPolyBoundary.C
  purgeCellShapes.C
  writeMesh.C
  star3ToFoam.C
)
add_executable(star3ToFoam ${_FILES})
target_compile_features(star3ToFoam PUBLIC cxx_std_11)
target_link_libraries(star3ToFoam PUBLIC finiteVolume)
