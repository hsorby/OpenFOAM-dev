set(_FILES
  genericFvPatch/genericFvPatch.C
  genericPatchField/genericPatchField.C
  genericFvPatchField/genericFvPatchFields.C
  genericPointPatchField/genericPointPatchFields.C
)
add_library(genericPatchFields ${_FILES})
target_compile_features(genericPatchFields PUBLIC cxx_std_11)
target_include_directories(genericPatchFields PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/genericPatchFields/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/genericPatchFields/includePrivate)
