set(_FILES
  rigidBodyMeshMotion/rigidBodyMeshMotion.C
  rigidBodyMeshMotionSolver/rigidBodyMeshMotionSolver.C
)
add_library(rigidBodyMeshMotion ${_FILES})
target_compile_features(rigidBodyMeshMotion PUBLIC cxx_std_11)
target_include_directories(rigidBodyMeshMotion PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/rigidBodyMeshMotion/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/rigidBodyMeshMotion/includePrivate)
