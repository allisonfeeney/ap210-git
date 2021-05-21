#ifndef DATUM_DIFFERENCE_ANALYTICAL_MODEL_PORT_ASSIGNMENT_H
#define DATUM_DIFFERENCE_ANALYTICAL_MODEL_PORT_ASSIGNMENT_H

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

class AP210ARM_API datum_difference_analytical_model_port_assignment:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 415};

   private:
      // Required attributes
      class analytical_model_port *_assigned_analytical_model_port;
      class datum_difference *_of_datum_difference;

      // Optional attributes

   protected:
      datum_difference_analytical_model_port_assignment();

   public:
      ~datum_difference_analytical_model_port_assignment();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static datum_difference_analytical_model_port_assignment *InstanceOf(ARMObject *);
      static datum_difference_analytical_model_port_assignment *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static datum_difference_analytical_model_port_assignment *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
