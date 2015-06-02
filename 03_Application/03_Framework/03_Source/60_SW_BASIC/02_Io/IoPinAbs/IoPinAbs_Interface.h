/*******************************************************************************
 *         ad88888ba             88          88   ,ad8888ba,                   *
 *        d8"     "8b            ""          88  d8"'    `"8b                  *
 *        Y8,                                88 d8'                            *
 *        `Y8aaaaa,    ,adPPYba, 88  ,adPPYb,88 88                             *
 *          `"""""8b, a8P_____88 88 a8"    `Y88 88                             *
 *                `8b 8PP""""""" 88 8b       88 Y8,                            *
 *        Y8a     a8P "8b,   ,aa 88 "8a,   ,d88  Y8a.    .a8P                  *
 *         "Y88888P"   `"Ybbd8"' 88  `"8bbdP"Y8   `"Y8888Y"'                   *
 *                                                                             *
 *          Filename......: [ IoPinAbs_Interface.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IOPINABS_INTERFACE_H_INCLUDED
#define IOPINABS_INTERFACE_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Std_Types.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the IoPinAbs_Interface module
 */
#define IOPINABS_INTERFACE_MAJOR_VERSION_H                            0u
/**
 * Minor version of the IoPinAbs_Interface module
 */
#define IOPINABS_INTERFACE_MINOR_VERSION_H                            1u
/**
 * Patch version of the IoPinAbs_Interface module
 */
#define IOPINABS_INTERFACE_PATCH_VERSION_H	                         0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class IoPinAbs_Interface : public Object
{
/*=== Enumerates =============================================================*/
   public:

   private:

   protected:

/*=== Parameter ==============================================================*/
   public:

   protected:


   private:


/*=== Functions ===============================================================*/
   public:
      IoPinAbs_Interface() {};
      virtual ~IoPinAbs_Interface() {};
      virtual Level_t getPinStatus(void) = 0;
      virtual void getPin(Pin_t &pin) = 0;

      virtual boolean isOutput(void) = 0;
      virtual boolean isPullUpEnabled(void) = 0;




   protected:


   private:
      //Functions
      IoPinAbs_Interface(const IoPinAbs_Interface &c);
      IoPinAbs_Interface& operator=(const IoPinAbs_Interface &c);

};
//IoPinAbs_Interface

#endif // IOPINABS_INTERFACE_H_INCLUDED
