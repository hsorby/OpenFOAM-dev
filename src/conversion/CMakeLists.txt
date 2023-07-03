set(_FILES
  ensight/file/ensightFile.C
  ensight/file/ensightGeoFile.C
  ensight/part/ensightPart.C
  ensight/part/ensightPartIO.C
  ensight/part/ensightPartCells.C
  ensight/part/ensightPartFaces.C
  ensight/part/ensightParts.C
  mergedCyclic/mergedCyclicPolyPatch.C
  mergedCyclic/polyMeshUnMergeCyclics.C
  meshTables/boundaryRegion.C
  meshTables/cellTable.C
  meshTables/dictionaryIOMap.C
  meshReader/meshReader.C
  meshReader/meshReaderAux.C
  meshReader/calcPointCells.C
  meshReader/createPolyCells.C
  meshReader/createPolyBoundary.C
  meshReader/starcd/STARCDMeshReader.C
  meshWriter/meshWriter.C
  meshWriter/starcd/STARCDMeshWriter.C
  polyDualMesh/polyDualMesh.C
)
add_library(conversion ${_FILES})
target_compile_features(conversion PUBLIC cxx_std_11)
target_include_directories(conversion PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/conversion/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/conversion/includePrivate)
