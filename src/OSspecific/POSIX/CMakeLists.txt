set(_FILES
  signals/sigFpe.C
  signals/sigSegv.C
  signals/sigInt.C
  signals/sigQuit.C
  signals/sigStopAtWriteNow.C
  signals/sigWriteNow.C
  regExp.C
  timer.C
  fileStat.C
  POSIX.C
  cpuTime/cpuTime.C
  clockTime/clockTime.C
  memInfo/memInfo.C
  fileMonitor.C
      dummyPrintStack.C
      printStack.C
)
add_library(OSspecific ${_FILES})
target_compile_features(OSspecific PUBLIC cxx_std_11)
target_include_directories(OSspecific PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/OSspecific/POSIX/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/OSspecific/POSIX/includePrivate)
