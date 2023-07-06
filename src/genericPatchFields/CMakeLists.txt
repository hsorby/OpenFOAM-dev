set(_FILES
  genericFvPatch/genericFvPatch.C
  genericPatchField/genericPatchField.C
  genericFvPatchField/genericFvPatchFields.C
  genericPointPatchField/genericPointPatchFields.C
)
add_library(genericPatchFields ${_FILES})
target_compile_features(genericPatchFields PUBLIC cxx_std_11)
target_include_directories(genericPatchFields PUBLIC include PRIVATE includePrivate genericFvPatchField genericPointPatchField)
target_link_libraries(genericPatchFields PUBLIC OpenFOAM finiteVolume genericPatches)
