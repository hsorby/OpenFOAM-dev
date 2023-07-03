set(_FILES
  meshTriangulation/meshTriangulation.C
  triSurface/triSurface.C
  triSurface/triSurfaceAddressing.C
  triSurface/stitchTriangles.C
  triSurface/interfaces/STL/writeSTL.C
  triSurface/interfaces/STL/readSTL.C
  triSurface/interfaces/STL/readSTLBINARY.C
  triSurface/interfaces/GTS/writeGTS.C
  triSurface/interfaces/GTS/readGTS.C
  triSurface/interfaces/OBJ/readOBJ.C
  triSurface/interfaces/OBJ/writeOBJ.C
  triSurface/interfaces/SMESH/writeSMESH.C
  triSurface/interfaces/OFF/readOFF.C
  triSurface/interfaces/OFF/writeOFF.C
  triSurface/interfaces/TRI/writeTRI.C
  triSurface/interfaces/TRI/readTRI.C
  triSurface/interfaces/AC3D/readAC.C
  triSurface/interfaces/AC3D/writeAC.C
  triSurface/interfaces/VTK/readVTK.C
  triSurface/interfaces/VTK/writeVTK.C
  triSurface/interfaces/NAS/readNAS.C
  triSurface/geometricSurfacePatch/geometricSurfacePatch.C
  triSurface/surfacePatch/surfacePatch.C
  triSurface/surfacePatch/surfacePatchIOList.C
  tools/labelledTri/sortLabelledTri.C
  triSurfaceFields/triSurfaceFields.C
)
add_library(triSurface ${_FILES})
target_compile_features(triSurface PUBLIC cxx_std_11)
target_include_directories(triSurface PUBLIC include PRIVATE includePrivate)
