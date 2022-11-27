#ifndef POSITION_TOLERANCE_WITHOUT_REFERENCED_DATUM_SYSTEM_H
#define POSITION_TOLERANCE_WITHOUT_REFERENCED_DATUM_SYSTEM_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <position_tolerance.h>
#include <geometric_tolerance_without_referenced_datum_system.h>

// Unions

// Enumerations

class AP210ARM_API position_tolerance_without_referenced_datum_system:
public position_tolerance,
public geometric_tolerance_without_referenced_datum_system
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 718};

   private:
      // Required attributes

      // Optional attributes

   protected:
      position_tolerance_without_referenced_datum_system();

   public:
      ~position_tolerance_without_referenced_datum_system();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static position_tolerance_without_referenced_datum_system *InstanceOf(ARMObject *);
      static position_tolerance_without_referenced_datum_system *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static position_tolerance_without_referenced_datum_system *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif