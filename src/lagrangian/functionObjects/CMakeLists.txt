set(_FILES
  cloudInfo/cloudInfo.C
  dsmcFields/dsmcFields.C
  particles/particles.C
  stopAtEmptyClouds/stopAtEmptyClouds.C
)
add_library(lagrangianFunctionObjects ${_FILES})
target_compile_features(lagrangianFunctionObjects PUBLIC cxx_std_11)
target_include_directories(lagrangianFunctionObjects PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/lagrangian/functionObjects/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/lagrangian/functionObjects/includePrivate)
