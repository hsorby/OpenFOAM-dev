set(_FILES
  vtkPVblockMesh.C
  vtkPVblockMeshConvert.C
  vtkPVblockMeshUtils.C
)
add_library($(PV_PLUGIN_PATH)/libvtkPVblockMesh ${_FILES})
target_compile_features($(PV_PLUGIN_PATH)/libvtkPVblockMesh PUBLIC cxx_std_11)
target_include_directories($(PV_PLUGIN_PATH)/libvtkPVblockMesh PUBLIC include PRIVATE includePrivate)
