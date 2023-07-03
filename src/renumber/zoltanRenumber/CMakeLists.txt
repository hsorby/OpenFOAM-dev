set(_FILES
  zoltanRenumber.C
)
add_library(zoltanRenumber ${_FILES})
target_compile_features(zoltanRenumber PUBLIC cxx_std_11)
target_include_directories(zoltanRenumber PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/renumber/zoltanRenumber/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/renumber/zoltanRenumber/includePrivate)
