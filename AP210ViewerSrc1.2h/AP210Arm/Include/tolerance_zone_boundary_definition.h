#ifndef TOLERANCE_ZONE_BOUNDARY_DEFINITION_H
#define TOLERANCE_ZONE_BOUNDARY_DEFINITION_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <managed_design_object.h>

// Unions

// Enumerations

class AP210ARM_API tolerance_zone_boundary_definition:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 119};

   private:
      // Required attributes
      class tolerance_zone_boundary *_defined_zone_boundary;

      // Optional attributes

   protected:
      tolerance_zone_boundary_definition();

   public:
      ~tolerance_zone_boundary_definition();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static tolerance_zone_boundary_definition *InstanceOf(ARMObject *);
      static tolerance_zone_boundary_definition *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static tolerance_zone_boundary_definition *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
