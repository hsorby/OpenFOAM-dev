set(_FILES
  foamToEnsightParts.C
)
add_executable(foamToEnsightParts ${_FILES})
target_compile_features(foamToEnsightParts PUBLIC cxx_std_11)
target_link_libraries(foamToEnsightParts PUBLIC finiteVolume)
