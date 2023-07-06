set(_FILES
  patches/filmFvPatch/filmFvPatch.C
  patches/filmWall/filmWallPolyPatch/filmWallPolyPatch.C
  patches/filmWall/filmWallPointPatch/filmWallPointPatch.C
  patches/filmWall/filmWallFvPatch/filmWallFvPatch.C
  patches/filmSurface/filmSurfacePolyPatch/filmSurfacePolyPatch.C
  patches/filmSurface/filmSurfacePointPatch/filmSurfacePointPatch.C
  patches/filmSurface/filmSurfaceFvPatch/filmSurfaceFvPatch.C
  patches/mappedFilmWall/mappedFilmWallFvPatch/mappedFilmWallFvPatch.C
  patches/mappedFilmWall/mappedFilmWallPointPatch/mappedFilmWallPointPatch.C
  patches/mappedFilmWall/mappedFilmWallPolyPatch/mappedFilmWallPolyPatch.C
  patches/mappedFilmSurface/mappedFilmSurfacePolyPatch/mappedFilmSurfacePolyPatch.C
  patches/mappedFilmSurface/mappedFilmSurfacePointPatch/mappedFilmSurfacePointPatch.C
  patches/mappedFilmSurface/mappedFilmSurfaceFvPatch/mappedFilmSurfaceFvPatch.C
  derivedFvPatchFields/alphaOne/alphaOneFvPatchScalarField.C
  derivedFvPatchFields/filmContactAngle/filmContactAngleFvPatchScalarField.C
  derivedFvPatchFields/mappedFilmPressure/mappedFilmPressureFvPatchScalarField.C
  derivedFvPatchFields/filmSurfaceVelocity/filmSurfaceVelocityFvPatchVectorField.C
  filmGaussGrad/filmGaussGrads.C
  contactForce.C
  continuityPredictor.C
  prePredictor.C
  momentumPredictor.C
  correctAlpha.C
  isothermalFilm.C
)
add_library(isothermalFilm ${_FILES})
target_compile_features(isothermalFilm PUBLIC cxx_std_11)
target_include_directories(isothermalFilm PUBLIC include PRIVATE includePrivate)
