set(_FILES
  vtk/vtkWriteOps.C
  vtk/vtkUnstructuredReader.C
  nas/NASCore.C
  starcd/STARCDCore.C
  obj/OBJstream.C
)
add_library(fileFormats ${_FILES})
target_compile_features(fileFormats PUBLIC cxx_std_11)
target_include_directories(fileFormats PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/fileFormats/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/fileFormats/includePrivate)
