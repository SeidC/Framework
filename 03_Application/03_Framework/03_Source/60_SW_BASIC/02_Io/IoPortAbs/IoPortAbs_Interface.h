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
 *          Filename......: [ IoPortAbs_Interface.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IOPORTABS_INTERFACE_H_INCLUDED
#define IOPORTABS_INTERFACE_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Io_Interface.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the IoPortAbs_Interface module
 */
#define IOPORTABS_INTERFACE_MAJOR_VERSION_H                            0u
/**
 * Minor version of the IoPortAbs_Interface module
 */
#define IOPORTABS_INTERFACE_MINOR_VERSION_H                            1u
/**
 * Patch version of the IoPortAbs_Interface module
 */
#define IOPORTABS_INTERFACE_PATCH_VERSION_H	                           0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class IoPortAbs_Interface : public Io_Interface
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

      IoPortAbs_Interface() {};
      virtual ~IoPortAbs_Interface() {};
   protected:


   private:
      //Functions
      IoPortAbs_Interface(const IoPortAbs_Interface &c);
      IoPortAbs_Interface& operator=(const IoPortAbs_Interface &c);

};
//IoPortAbs_Interface

#endif // IOPORTABS_INTERFACE_H_INCLUDED
