set(_FILES
  zoltanDecomp.C
)
add_library(zoltanDecomp ${_FILES})
target_compile_features(zoltanDecomp PUBLIC cxx_std_11)
target_include_directories(zoltanDecomp PUBLIC include PRIVATE includePrivate)
