set(_FILES
  multiphaseSystems.C
)
add_library(multiphaseSystems ${_FILES})
target_compile_features(multiphaseSystems PUBLIC cxx_std_11)
target_include_directories(multiphaseSystems PUBLIC include PRIVATE includePrivate)
