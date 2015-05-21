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
 *          Filename......: [ IoPortAbs.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IOPORTABS_H_INCLUDED
#define IOPORTABS_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Io.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the IoPortAbs module
 */
#define IOPORTABS_MAJOR_VERSION_H    					0u
/**
 * Minor version of the IoPortAbs module
 */
#define IOPORTABS_MINOR_VERSION_H					1u
/**
 * Patch version of the IoPortAbs module
 */
#define IOPORTABS_PATCH_VERSION_H					0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class IoPortAbs : public Io
{
   /*=== Enumerates	===========================================================*/
   public:


   private:

   protected:

   /*=== Parameter	===========================================================*/
   public:


   protected:


   private:


   /*=== Functions ===============================================================*/
   public:
   IoPortAbs();
   IoPortAbs(IoPort_t& port);
   ~IoPortAbs();


   protected:
   void setIo(Pin_t pin, Status_t status);
   void setIoDirection(Pin_t pin, IODirection_t dir);
   void setIoPullUp(Pin_t pin, IOPullup_t pullUp);
   void setIoPort(IoPort_t& port);

   private:
   IoPortAbs(const IoPortAbs &c);
   IoPortAbs& operator=(const IoPortAbs &c);

};
//IoPortAbs

#endif // IOPORTABS_H_INCLUDED
