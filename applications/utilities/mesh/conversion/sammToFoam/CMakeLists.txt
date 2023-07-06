set(_FILES
  sammMesh.C
  fillSammCellShapeTable.C
  fillSammAddressingTable.C
  readPoints.C
  readCells.C
  readBoundary.C
  fixCollapsedEdges.C
  readCouples.C
  calcPointCells.C
  createPolyCells.C
  createBoundaryFaces.C
  createPolyBoundary.C
  purgeCellShapes.C
  writeMesh.C
  sammToFoam.C
)
add_executable(sammToFoam ${_FILES})
target_compile_features(sammToFoam PUBLIC cxx_std_11)
target_link_libraries(sammToFoam PUBLIC finiteVolume)
