set(_FILES
  genericPolyPatch/genericPolyPatch.C
  genericPointPatch/genericPointPatch.C
)
add_library(genericPatches ${_FILES})
target_compile_features(genericPatches PUBLIC cxx_std_11)
target_include_directories(genericPatches PUBLIC include PRIVATE includePrivate)
target_link_libraries(genericPatches PUBLIC OpenFOAM)
