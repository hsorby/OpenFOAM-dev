set(_FILES
  film.C
  thermophysicalPredictor.C
)
add_library(film ${_FILES})
target_compile_features(film PUBLIC cxx_std_11)
target_include_directories(film PUBLIC include PRIVATE includePrivate)
