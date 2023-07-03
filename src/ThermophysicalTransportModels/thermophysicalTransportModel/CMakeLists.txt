set(_FILES
  thermophysicalTransportModel.C
)
add_library(thermophysicalTransportModel ${_FILES})
target_compile_features(thermophysicalTransportModel PUBLIC cxx_std_11)
target_include_directories(thermophysicalTransportModel PUBLIC include PRIVATE includePrivate)
