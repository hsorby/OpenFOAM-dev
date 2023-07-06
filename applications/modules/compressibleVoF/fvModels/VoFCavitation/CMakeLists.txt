set(_FILES
  VoFCavitation.C
)
add_library(compressibleVoFCavitation ${_FILES})
target_compile_features(compressibleVoFCavitation PUBLIC cxx_std_11)
target_include_directories(compressibleVoFCavitation PUBLIC include PRIVATE includePrivate)
