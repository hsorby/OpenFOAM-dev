set(_FILES
  extrudeModel/extrudeModel.C
  extrudeModel/extrudeModelNew.C
  linearNormal/linearNormal.C
  planeExtrusion/planeExtrusion.C
  linearDirection/linearDirection.C
  linearRadial/linearRadial.C
  radial/radial.C
  sigmaRadial/sigmaRadial.C
  sector/sector.C
  cyclicSector/cyclicSector.C
  wedge/wedge.C
)
add_library(extrudeModel ${_FILES})
target_compile_features(extrudeModel PUBLIC cxx_std_11)
target_include_directories(extrudeModel PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/mesh/extrudeModel/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/mesh/extrudeModel/includePrivate)
