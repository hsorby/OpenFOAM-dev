set(_FILES
  snappyHexMeshDriver/snappyLayerDriver.C
  snappyHexMeshDriver/snappySnapDriver.C
  snappyHexMeshDriver/snappySnapDriverFeature.C
  snappyHexMeshDriver/snappyRefineDriver.C
  snappyHexMeshDriver/layerParameters/layerParameters.C
  snappyHexMeshDriver/refinementParameters/refinementParameters.C
  snappyHexMeshDriver/snapParameters/snapParameters.C
  snappyHexMeshDriver/pointData/pointData.C
  meshRefinement/meshRefinementBaffles.C
  meshRefinement/meshRefinement.C
  meshRefinement/meshRefinementMerge.C
  meshRefinement/meshRefinementProblemCells.C
  meshRefinement/meshRefinementRefine.C
  meshRefinement/patchFaceOrientation.C
  refinementFeatures/refinementFeatures.C
  refinementSurfaces/surfaceZonesInfo.C
  refinementSurfaces/refinementSurfaces.C
  refinementRegions/refinementRegions.C
  trackedParticle/trackedParticle.C
  externalDisplacementMeshMover/displacementMeshMoverMotionSolver.C
  externalDisplacementMeshMover/externalDisplacementMeshMover.C
  externalDisplacementMeshMover/medialAxisMeshMover.C
  externalDisplacementMeshMover/zeroFixedValue/zeroFixedValuePointPatchFields.C
)
add_library(snappyHexMesh ${_FILES})
target_compile_features(snappyHexMesh PUBLIC cxx_std_11)
target_include_directories(snappyHexMesh PUBLIC include PRIVATE includePrivate)
