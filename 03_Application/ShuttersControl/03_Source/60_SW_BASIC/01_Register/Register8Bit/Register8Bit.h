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
 *          Filename......: [ Register8Bit.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef REGISTER8BIT_H_INCLUDED
#define REGISTER8BIT_H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Project.h"
#include "Register.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the Register8Bit module
 */
#define REGISTER8BIT_MAJOR_VERSION_H                          0u
/**
 * Minor version of the Register8Bit module
 */
#define REGISTER8BIT_MINOR_VERSION_H                          1u
 /**
  * Patch version of the Register8Bit module
  */
#define REGISTER8BIT_PATCH_VERSION_H                          0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class Register8Bit : public Register<volatile Register8Bit_t,vuint8_t>
{
/*=== Enumerates	===========================================================*/
   public:   //Enumerates

   private:

   protected:

/*=== Enumerates	===========================================================*/
   public:   //Parameter

   protected:   //Parameter

   private:   //Parameter

/*=== Functions ===============================================================*/
   public:   //Functions
   Register8Bit(void);
   Register8Bit(vuint8_t& sReg);
   ~Register8Bit(void);

   protected:   //Functions

   private:    //Functions
   Register8Bit(const Register8Bit &c);
   Register8Bit& operator=(const Register8Bit &c);

}; //Register8Bit


#endif // REGISTER8BIT_H_INCLUDED
