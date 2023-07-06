set(_FILES
  fluid.C
  thermophysicalPredictor.C
)
add_library(fluid ${_FILES})
target_compile_features(fluid PUBLIC cxx_std_11)
target_include_directories(fluid PUBLIC include PRIVATE includePrivate)
