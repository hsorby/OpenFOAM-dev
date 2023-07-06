set(_FILES
  VoFCavitation.C
)
add_library(VoFCavitation ${_FILES})
target_compile_features(VoFCavitation PUBLIC cxx_std_11)
target_include_directories(VoFCavitation PUBLIC include PRIVATE includePrivate)
