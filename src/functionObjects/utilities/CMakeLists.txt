set(_FILES
  codedFunctionObject/codedFunctionObject.C
  residuals/residuals.C
  timeActivatedFileUpdate/timeActivatedFileUpdate.C
  timeStep/timeStepFunctionObject.C
  setTimeStep/setTimeStepFunctionObject.C
  setWriteInterval/setWriteIntervalFunctionObject.C
  systemCall/systemCall.C
  stopAt/stopAt.C
  stopAt/stopAtFile/stopAtFile.C
  stopAt/stopAtClockTime/stopAtClockTime.C
  stopAt/stopAtTimeStep/stopAtTimeStep.C
  removeRegisteredObject/removeRegisteredObject.C
  writeDictionary/writeDictionary.C
  writeObjects/writeObjects.C
  time/timeFunctionObject.C
  checkMesh/checkMesh.C
)
add_library(utilityFunctionObjects ${_FILES})
target_compile_features(utilityFunctionObjects PUBLIC cxx_std_11)
target_include_directories(utilityFunctionObjects PUBLIC include PRIVATE includePrivate)
