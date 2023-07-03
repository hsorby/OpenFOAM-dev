set(_FILES
  scalarTransport/scalarTransport.C
  phaseScalarTransport/phaseScalarTransport.C
)
add_library(solverFunctionObjects ${_FILES})
target_compile_features(solverFunctionObjects PUBLIC cxx_std_11)
target_include_directories(solverFunctionObjects PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/functionObjects/solvers/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/functionObjects/solvers/includePrivate)
