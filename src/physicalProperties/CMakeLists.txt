set(_FILES
  physicalProperties/physicalProperties.C
  viscosity/viscosity.C
  viscosityModels/viscosityModel/viscosityModel.C
  viscosityModels/viscosityModel/viscosityModelNew.C
  viscosityModels/constant/constantViscosityModel.C
)
add_library(physicalProperties ${_FILES})
target_compile_features(physicalProperties PUBLIC cxx_std_11)
target_include_directories(physicalProperties PUBLIC include PRIVATE includePrivate)
target_link_libraries(physicalProperties PUBLIC finiteVolume)
