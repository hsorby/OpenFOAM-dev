set(_FILES
  alphaContactAngle/alphaContactAngleFvPatchScalarField.C
  correctContactAngle/correctContactAngle.C
)
add_library(multiphaseProperties ${_FILES})
target_compile_features(multiphaseProperties PUBLIC cxx_std_11)
target_include_directories(multiphaseProperties PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/multiphaseModels/multiphaseProperties/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/multiphaseModels/multiphaseProperties/includePrivate)
