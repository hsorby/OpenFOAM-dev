set(_FILES
  filmCloudTransfer.C
  ejectionModels/ejectionModel/ejectionModel.C
  ejectionModels/ejectionModel/ejectionModelNew.C
  ejectionModels/dripping/dripping.C
  ejectionModels/BrunDripping/BrunDripping.C
  ejectionModels/curvatureSeparation/curvatureSeparation.C
  cloudFilmTransfer/CloudFilmTransfer/CloudFilmTransferBase.C
  cloudFilmTransfer/makeThermoParcelCloudFilmTransfer.C
  cloudFilmTransfer/makeReactingParcelCloudFilmTransfer.C
  cloudFilmTransfer/makeReactingMultiphaseParcelCloudFilmTransfer.C
  cloudFilmTransfer/makeSprayParcelCloudFilmTransfer.C
)
add_library(filmCloudTransfer ${_FILES})
target_compile_features(filmCloudTransfer PUBLIC cxx_std_11)
target_include_directories(filmCloudTransfer PUBLIC include PRIVATE includePrivate)
