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
  printStack.C
)
if (CMAKE_SYSTEM_PROCESSOR STREQUAL "SunOS64")
  list(APPEND _FILES dummyPrintStack.C)
else()
  list(APPEND _FILES printStack.C)
endif()

add_library(OSspecific ${_FILES})
target_compile_features(OSspecific PUBLIC cxx_std_11)
target_include_directories(OSspecific PUBLIC include PUBLIC includePrivate)
target_link_libraries(OSspecific PUBLIC OpenFOAM)
