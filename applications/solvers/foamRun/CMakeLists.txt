set(_FILES
  setDeltaT.C
  foamRun.C
)
add_executable(foamRun ${_FILES})
target_include_directories(foamRun PRIVATE includePrivate)
target_compile_features(foamRun PUBLIC cxx_std_11)
target_link_libraries(foamRun PUBLIC finiteVolume)
