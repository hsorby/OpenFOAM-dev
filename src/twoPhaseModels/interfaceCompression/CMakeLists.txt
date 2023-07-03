set(_FILES
  interfaceCompression/interfaceCompression.C
  noInterfaceCompression/noInterfaceCompression.C
  MPLIC/MPLICface.C
  MPLIC/MPLICcellStorage.C
  MPLIC/MPLICcell.C
  MPLIC/MPLIC.C
  MPLIC/MPLICU.C
  PLIC/PLIC.C
  PLIC/PLICU.C
)
add_library(interfaceCompression ${_FILES})
target_compile_features(interfaceCompression PUBLIC cxx_std_11)
target_include_directories(interfaceCompression PUBLIC include PRIVATE includePrivate)
