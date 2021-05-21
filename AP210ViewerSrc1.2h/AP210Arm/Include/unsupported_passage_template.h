#ifndef UNSUPPORTED_PASSAGE_TEMPLATE_H
#define UNSUPPORTED_PASSAGE_TEMPLATE_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <inter_stratum_feature_template.h>

// Unions

// Enumerations

class AP210ARM_API unsupported_passage_template:
public inter_stratum_feature_template
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 224};

   private:
      // Required attributes

      // Optional attributes

   protected:
      unsupported_passage_template();

   public:
      ~unsupported_passage_template();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static unsupported_passage_template *InstanceOf(ARMObject *);
      static unsupported_passage_template *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static unsupported_passage_template *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
