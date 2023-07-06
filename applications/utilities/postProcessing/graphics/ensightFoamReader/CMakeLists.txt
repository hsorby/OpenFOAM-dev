set(_FILES
  libuserd.C
)
add_library(userd-foam ${_FILES})
target_compile_features(userd-foam PUBLIC cxx_std_11)
target_include_directories(userd-foam PUBLIC include PRIVATE includePrivate)
