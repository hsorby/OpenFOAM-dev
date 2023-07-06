set(_FILES
  filmVoFTransfer.C
  VoFFilmTransfer.C
)
add_library(filmVoFTransfer ${_FILES})
target_compile_features(filmVoFTransfer PUBLIC cxx_std_11)
target_include_directories(filmVoFTransfer PUBLIC include PRIVATE includePrivate)
