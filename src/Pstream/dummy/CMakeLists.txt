set(_FILES
  UPstream.C
  UIPread.C
  UOPwrite.C
)
add_library(Pstream ${_FILES})
target_compile_features(Pstream PUBLIC cxx_std_11)
target_include_directories(Pstream PUBLIC include PRIVATE includePrivate)
