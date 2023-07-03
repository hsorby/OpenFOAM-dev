set(_FILES
  ignition.C
  ignitionIO.C
  ignitionSite.C
  ignitionSiteIO.C
)
add_library(XiIgnition ${_FILES})
target_compile_features(XiIgnition PUBLIC cxx_std_11)
target_include_directories(XiIgnition PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/ignition/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/thermophysicalModels/ignition/includePrivate)
