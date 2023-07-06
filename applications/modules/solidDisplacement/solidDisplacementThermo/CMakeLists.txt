set(_FILES
  solidDisplacementThermo.C
)
add_library(solidDisplacementThermo ${_FILES})
target_compile_features(solidDisplacementThermo PUBLIC cxx_std_11)
target_include_directories(solidDisplacementThermo PUBLIC include PRIVATE includePrivate)
