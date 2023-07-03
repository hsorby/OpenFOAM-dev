set(_FILES
  Kmesh/Kmesh.C
  fft/fft.C
  fft/fftRenumber.C
  fft/writeEk.C
  fft/kShellIntegration.C
  processes/UOprocess/UOprocess.C
  turbulence/turbGen.C
  noise/noiseFFT.C
)
add_library(randomProcesses ${_FILES})
target_compile_features(randomProcesses PUBLIC cxx_std_11)
target_include_directories(randomProcesses PUBLIC include PRIVATE includePrivate)
