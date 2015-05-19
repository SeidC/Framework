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
 *          Filename......: [ Port.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef PORT_H_INCLUDED
#define PORT_H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Project.h"
#include "IoPortAbs.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the Port module
 */
#define PORT_MAJOR_VERSION_H                                   0u
/**
 * Minor version of the Port module
 */
#define PORT_MINOR_VERSION_H                                   1u
 /**
  * Patch version of the Port module
  */
#define PORT_PATCH_VERSION_H                                   0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class Port : public IoPortAbs
{
/*=== Enumerates ===========================================================*/
   public:

   void set(Pin_t pin);
   void setByMask(uint8_t bitMask);
   void clear(Pin_t pin);
   void clearByMask(uint8_t bitMask);


   private:

   protected:

/*=== Parameter ===========================================================*/
   public:


   protected:

   private:


/*=== Functions ===============================================================*/
   public:
   Port(void);
   Port(IoPort_t& port);
   ~Port(void);



   protected:


   private:
   Port(const Port &c);
   Port& operator=(const Port &c);

};
//Port


#endif // PORT_H_INCLUDED
