set(_FILES
  VoFClouds.C
)
add_library(VoFClouds ${_FILES})
target_compile_features(VoFClouds PUBLIC cxx_std_11)
target_include_directories(VoFClouds PUBLIC include PRIVATE includePrivate)
