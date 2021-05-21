#ifndef DESIGN_INTENT_MODIFICATION_STYLED_AREA_REPRESENTATION_H
#define DESIGN_INTENT_MODIFICATION_STYLED_AREA_REPRESENTATION_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <managed_design_object.h>

// Unions
#include <styled_area_representation.h>

// Enumerations

class AP210ARM_API design_intent_modification_styled_area_representation:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 462};

   private:
      // Required attributes
      class design_intent_modification *_represented_design_intent_modification;
      union styled_area_representation *_shape_styled_area_representation;

      // Optional attributes
      class design_intent_modification_planar_shape *_derived_planar_shape[2000];

   protected:
      design_intent_modification_styled_area_representation();

   public:
      ~design_intent_modification_styled_area_representation();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static design_intent_modification_styled_area_representation *InstanceOf(ARMObject *);
      static design_intent_modification_styled_area_representation *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static design_intent_modification_styled_area_representation *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
