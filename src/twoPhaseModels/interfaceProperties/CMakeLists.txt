set(_FILES
  interfaceProperties.C
  surfaceTensionModels/surfaceTensionModel/surfaceTensionModel.C
  surfaceTensionModels/surfaceTensionModel/surfaceTensionModelNew.C
  surfaceTensionModels/constant/constantSurfaceTension.C
  surfaceTensionModels/temperatureDependent/temperatureDependentSurfaceTension.C
  contactAngleModels/contactAngleModel/contactAngleModel.C
  contactAngleModels/contactAngleModel/contactAngleModelNew.C
  contactAngleModels/constant/constantContactAngle.C
  contactAngleModels/temperatureDependent/temperatureDependentContactAngle.C
  contactAngleModels/dynamic/dynamicContactAngle.C
  contactAngleModels/gravitational/gravitationalContactAngle.C
  contactAngle/contactAngleFvPatchScalarField.C
)
add_library(interfaceProperties ${_FILES})
target_compile_features(interfaceProperties PUBLIC cxx_std_11)
target_include_directories(interfaceProperties PUBLIC /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/interfaceProperties/include PRIVATE /Users/hsor001/Projects/opensource/openfoam/src/twoPhaseModels/interfaceProperties/includePrivate)
