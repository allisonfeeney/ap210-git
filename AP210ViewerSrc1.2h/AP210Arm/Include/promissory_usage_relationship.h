#ifndef PROMISSORY_USAGE_RELATIONSHIP_H
#define PROMISSORY_USAGE_RELATIONSHIP_H

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

class AP210ARM_API promissory_usage_relationship:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 744};

   private:
      // Required attributes
      class physical_unit *_component;
      class security_classification *_security_code;
      class physical_unit_design_view *_assembly;

      // Optional attributes

   protected:
      promissory_usage_relationship();

   public:
      ~promissory_usage_relationship();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static promissory_usage_relationship *InstanceOf(ARMObject *);
      static promissory_usage_relationship *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static promissory_usage_relationship *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
