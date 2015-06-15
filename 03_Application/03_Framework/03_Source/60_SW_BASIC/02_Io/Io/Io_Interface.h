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
 *          Filename......: [ Io_Interface.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IO_INTERFACE_H_INCLUDED
#define IO_INTERFACE_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Std_Types.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the Io_Interface module
 */
#define IO_INTERFACE_MAJOR_VERSION_H                            0u
/**
 * Minor version of the Io_Interface module
 */
#define IO_INTERFACE_MINOR_VERSION_H                            1u
/**
 * Patch version of the Io_Interface module
 */
#define IO_INTERFACE_PATCH_VERSION_H	                         0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class Io_Interface : public Object
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
      Io_Interface() {};
      virtual ~Io_Interface() {};

      virtual Std_ReturnType setPort(Port_t &sPort) = 0;
      virtual void getPort(Port_t &sPort) = 0;


   protected:


   private:
      //Functions
      Io_Interface(const Io_Interface &c);
      Io_Interface& operator=(const Io_Interface &c);

};
//Io_Interface

#endif // IO_INTERFACE_H_INCLUDED