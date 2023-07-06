set(_FILES
  solid.C
)
add_library(solid ${_FILES})
target_compile_features(solid PUBLIC cxx_std_11)
target_include_directories(solid PUBLIC include PRIVATE includePrivate)
