set(_FILES
  functions.C
)
add_library(functions ${_FILES})
target_compile_features(functions PUBLIC cxx_std_11)
target_include_directories(functions PUBLIC include PRIVATE includePrivate)
