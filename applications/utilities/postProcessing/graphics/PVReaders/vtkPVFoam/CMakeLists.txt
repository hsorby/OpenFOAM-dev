set(_FILES
  vtkPVFoam.C
  vtkPVFoamFields.C
  vtkPVFoamMesh.C
  vtkPVFoamMeshLagrangian.C
  vtkPVFoamMeshSet.C
  vtkPVFoamMeshVolume.C
  vtkPVFoamMeshZone.C
  vtkPVFoamUpdateInfo.C
  vtkPVFoamUtils.C
)
add_library($(PV_PLUGIN_PATH)/libvtkPVFoam ${_FILES})
target_compile_features($(PV_PLUGIN_PATH)/libvtkPVFoam PUBLIC cxx_std_11)
target_include_directories($(PV_PLUGIN_PATH)/libvtkPVFoam PUBLIC include PRIVATE includePrivate)
