// Source for AP210 application object
//     consistent_part_template_shape_projection

// Precompiled include files
#include <StdAfx.h>

#include "consistent_part_template_shape_projection.h"

// Classes
#include <part_template_3d_shape.h>
#include <part_template_planar_shape.h>

consistent_part_template_shape_projection::consistent_part_template_shape_projection() {
   initialize();
   }
consistent_part_template_shape_projection::~consistent_part_template_shape_projection() {
   // Free string attributes
   }
// intialize data members
void consistent_part_template_shape_projection::initialize() {
   // Required attributes
   _projected_3d_shape = NULL;
   _resultant_planar_shape = NULL;

   // Optional attributes
   }
// Runtime type identification
int consistent_part_template_shape_projection::DynamicType(int ID) {
   int result = 0;

   if (ID == typeID) {;
      result = 1;
      }
   // Check supertypes for dynamic type
   if (result == 0) {
      result = managed_design_object::DynamicType(ID);
      }
   return result;
   }
consistent_part_template_shape_projection *consistent_part_template_shape_projection::InstanceOf(ARMObject *s) {
   if (s->getTypeID() == typeID) {
      return dynamic_cast<consistent_part_template_shape_projection *>(s);
      }
   return NULL;
   }
consistent_part_template_shape_projection *consistent_part_template_shape_projection::KindOf(ARMObject * s) {
   if (s->DynamicType(typeID)) {
      return dynamic_cast<consistent_part_template_shape_projection *>(s);
      }
   return NULL;
   }
// construction factory
consistent_part_template_shape_projection *consistent_part_template_shape_projection::Construct() {
   consistent_part_template_shape_projection *result = NULL;

   // create the consistent_part_template_shape_projection.
   result = new consistent_part_template_shape_projection();
   return result;
   }
bool consistent_part_template_shape_projection::hasRequiredAttributes() {
   bool result = true;

   TRACE("Checking for required attributes for: consistent_part_template_shape_projection\r\n");

   // Check for the existence of all required attributes
   if (_projected_3d_shape == NULL) {
      TRACE("ERROR: _projected_3d_shape a required attribute is NULL!\r\n");
      result = false;
      }
   if (_resultant_planar_shape == NULL) {
      TRACE("ERROR: _resultant_planar_shape a required attribute is NULL!\r\n");
      result = false;
      }
   // Check supertypes for the existence of all required attributes
   if (managed_design_object::hasRequiredAttributes() == false) {
      result = false;
      }
   return(result);
   }
