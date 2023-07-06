set(_FILES
  phaseSurfaceArrheniusReactionRate/makephaseSurfaceArrheniusReactions.C
)
add_library(multiphaseReactions ${_FILES})
target_compile_features(multiphaseReactions PUBLIC cxx_std_11)
target_include_directories(multiphaseReactions PUBLIC include PRIVATE includePrivate)
