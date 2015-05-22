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
 *          Filename......: [ Register16Bit.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef REGISTER16BIT_H_INCLUDED
#define REGISTER16BIT_H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Project.h"
#include "Register.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the Register16Bit module
 */
#define REGISTER16BIT_MAJOR_VERSION_H                          0u
/**
 * Minor version of the Register16Bit module
 */
#define REGISTER16BIT_MINOR_VERSION_H                          1u
 /**
  * Patch version of the Register16Bit module
  */
#define REGISTER16BIT_PATCH_VERSION_H                          0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class Register16Bit : public Register<volatile Register16Bit_t, vuint16_t>
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
   /**
    *  \brief Brief
    *  
    *  \return Return_Description
    *  
    *  \details Details
    */
   Register16Bit(void);
   /**
    *  \brief Brief
    *  
    *  \param [in] sReg Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   Register16Bit(vuint16_t& sReg);
   /**
    *  \brief Brief
    *  
    *  \return Return_Description
    *  
    *  \details Details
    */
   ~Register16Bit(void);

   protected:   //Functions

   private:    //Functions
   Register16Bit(const Register16Bit &c);
   Register16Bit& operator=(const Register16Bit &c);

}; //Register16Bit


#endif // REGISTER16BIT_H_INCLUDED
