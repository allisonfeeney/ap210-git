// Source for AP210 application object
//     composite_linear_profile_refinement_tolerance

// Precompiled include files
#include <StdAfx.h>

#include "composite_linear_profile_refinement_tolerance.h"

// Classes

composite_linear_profile_refinement_tolerance::composite_linear_profile_refinement_tolerance() {
   initialize();
   }
composite_linear_profile_refinement_tolerance::~composite_linear_profile_refinement_tolerance() {
   // Free string attributes
   }
// intialize data members
void composite_linear_profile_refinement_tolerance::initialize() {
   // Required attributes

   // Optional attributes
   }
// Runtime type identification
int composite_linear_profile_refinement_tolerance::DynamicType(int ID) {
   int result = 0;

   if (ID == typeID) {;
      result = 1;
      }
   // Check supertypes for dynamic type
   if (result == 0) {
      result = profile_of_any_line_tolerance::DynamicType(ID);
      }
   return result;
   }
composite_linear_profile_refinement_tolerance *composite_linear_profile_refinement_tolerance::InstanceOf(ARMObject *s) {
   if (s->getTypeID() == typeID) {
      return dynamic_cast<composite_linear_profile_refinement_tolerance *>(s);
      }
   return NULL;
   }
composite_linear_profile_refinement_tolerance *composite_linear_profile_refinement_tolerance::KindOf(ARMObject * s) {
   if (s->DynamicType(typeID)) {
      return dynamic_cast<composite_linear_profile_refinement_tolerance *>(s);
      }
   return NULL;
   }
// construction factory
composite_linear_profile_refinement_tolerance *composite_linear_profile_refinement_tolerance::Construct() {
   composite_linear_profile_refinement_tolerance *result = NULL;

   // create the composite_linear_profile_refinement_tolerance.
   result = new composite_linear_profile_refinement_tolerance();
   return result;
   }
bool composite_linear_profile_refinement_tolerance::hasRequiredAttributes() {
   bool result = true;

   TRACE("Checking for required attributes for: composite_linear_profile_refinement_tolerance\r\n");

   // Check for the existence of all required attributes
   if (_refined_control == NULL) {
      TRACE("ERROR: _refined_control a required attribute is NULL!\r\n");
      result = false;
      }
   // Check supertypes for the existence of all required attributes
   if (profile_of_any_line_tolerance::hasRequiredAttributes() == false) {
      result = false;
      }
   return(result);
   }
