set(_FILES
  reducedUnits/reducedUnits.C
  reducedUnits/reducedUnitsIO.C
  molecule/molecule.C
  molecule/moleculeIO.C
  moleculeCloud/moleculeCloud.C
)
add_library(molecule ${_FILES})
target_compile_features(molecule PUBLIC cxx_std_11)
target_include_directories(molecule PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/lagrangian/molecularDynamics/molecule/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/lagrangian/molecularDynamics/molecule/includePrivate)
