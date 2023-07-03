set(_FILES
  sixDoFRigidBodyState/sixDoFRigidBodyState.C
  sixDoFRigidBodyControl/sixDoFRigidBodyControl.C
)
add_library(sixDoFRigidBodyState ${_FILES})
target_compile_features(sixDoFRigidBodyState PUBLIC cxx_std_11)
target_include_directories(sixDoFRigidBodyState PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/sixDoFRigidBodyState/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/sixDoFRigidBodyState/includePrivate)
