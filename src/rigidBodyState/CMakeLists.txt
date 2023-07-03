set(_FILES
  rigidBodyState/rigidBodyState.C
  rigidBodyPoints/rigidBodyPoints.C
)
add_library(rigidBodyState ${_FILES})
target_compile_features(rigidBodyState PUBLIC cxx_std_11)
target_include_directories(rigidBodyState PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/rigidBodyState/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/rigidBodyState/includePrivate)
