set(_FILES
  VoFTurbulenceDamping.C
)
add_library(VoFTurbulenceDamping ${_FILES})
target_compile_features(VoFTurbulenceDamping PUBLIC cxx_std_11)
target_include_directories(VoFTurbulenceDamping PUBLIC include PRIVATE includePrivate)
