// Source for AP210 application object
//     interconnect_module_component_terminal

// Precompiled include files
#include <StdAfx.h>

#include "interconnect_module_component_terminal.h"

// Classes

interconnect_module_component_terminal::interconnect_module_component_terminal() {
   initialize();
   }
interconnect_module_component_terminal::~interconnect_module_component_terminal() {
   // Free string attributes
   }
// intialize data members
void interconnect_module_component_terminal::initialize() {
   // Required attributes

   // Optional attributes
   }
// Runtime type identification
int interconnect_module_component_terminal::DynamicType(int ID) {
   int result = 0;

   if (ID == typeID) {;
      result = 1;
      }
   // Check supertypes for dynamic type
   if (result == 0) {
      result = component_terminal::DynamicType(ID);
      }
   return result;
   }
interconnect_module_component_terminal *interconnect_module_component_terminal::InstanceOf(ARMObject *s) {
   if (s->getTypeID() == typeID) {
      return dynamic_cast<interconnect_module_component_terminal *>(s);
      }
   return NULL;
   }
interconnect_module_component_terminal *interconnect_module_component_terminal::KindOf(ARMObject * s) {
   if (s->DynamicType(typeID)) {
      return dynamic_cast<interconnect_module_component_terminal *>(s);
      }
   return NULL;
   }
// construction factory
interconnect_module_component_terminal *interconnect_module_component_terminal::Construct() {
   interconnect_module_component_terminal *result = NULL;

   // create the interconnect_module_component_terminal.
   result = new interconnect_module_component_terminal();
   return result;
   }
bool interconnect_module_component_terminal::hasRequiredAttributes() {
   bool result = true;

   TRACE("Checking for required attributes for: interconnect_module_component_terminal\r\n");

   // Check for the existence of all required attributes
   // Check supertypes for the existence of all required attributes
   if (component_terminal::hasRequiredAttributes() == false) {
      result = false;
      }
   return(result);
   }
