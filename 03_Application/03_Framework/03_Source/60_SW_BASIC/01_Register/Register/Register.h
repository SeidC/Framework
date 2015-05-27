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
 *          Filename......: [ Register.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef REGISTER_H_INCLUDED
#define REGISTER_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Std_Types.h"
#include "AvrDefs.h"
#include "Register_Cfg.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the Register module
 */
#define REGISTER_MAJOR_VERSION_H                   0u
/**
 * Minor version of the Register module
 */
#define REGISTER_MINOR_VERSION_H                   1u
/**
 * Patch version of the Register module
 */
#define REGISTER_PATCH_VERSION_H                   0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/
/**
 *
 */
typedef struct
{
   unsigned bit_0                :1;
   unsigned bit_1                :1;
   unsigned bit_2                :1;
   unsigned bit_3                :1;
   unsigned bit_4                :1;
   unsigned bit_5                :1;
   unsigned bit_6                :1;
   unsigned bit_7                :1;

}Register8Bit_t;

/**
 *
 */
typedef struct
{
/*--- Byte 1 --------------------------------*/
   unsigned bit_0                :1;
   unsigned bit_1                :1;
   unsigned bit_2                :1;
   unsigned bit_3                :1;
   unsigned bit_4                :1;
   unsigned bit_5                :1;
   unsigned bit_6                :1;
   unsigned bit_7                :1;
/*--- Byte 2 --------------------------------*/
   unsigned bit_8                :1;
   unsigned bit_9                :1;
   unsigned bit_10               :1;
   unsigned bit_11               :1;
   unsigned bit_12               :1;
   unsigned bit_13               :1;
   unsigned bit_14               :1;
   unsigned bit_15               :1;

}Register16Bit_t;



/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/

template <typename U, typename D>
class Register : Object
{

/*=== Parameter ===============================================================*/
   public:
      U* reg;
   private:

   protected:
/*=== Functions ==============================================================*/
   public:
      /**
       *  \brief Brief
       *  
       *  \return Return_Description
       *  
       *  \details Details
       */
      Register(void);
	  
      Register (D& sReg);
      /**
       *  \brief Brief
       *  
       *  \return Return_Description
       *  
       *  \details Details
       */
      ~Register(void);
      /**
       *  \brief Brief
       *  
       *  \param [in] sReg Parameter_Description
       *  \return Return_Description
       *  
       *  \details Details
       */
       void setRegister(U& sReg);
      /**
       *  \brief Brief
       *  
       *  \param [in] sReg Parameter_Description
       *  \return Return_Description
       *  
       *  \details Details
       */
       void setRegister(D& sReg);
      /**
       *  \brief Brief
       *  
       *  \param [in] bit Parameter_Description
       *  \return Return_Description
       *  
       *  \details Details
       */
       Std_ReturnType setBit(Bit_t bit);
      /**
       *  \brief Brief
       *  
       *  \param [in] bit Parameter_Description
       *  \return Return_Description
       *  
       *  \details Details
       */
       Std_ReturnType clearBit(Bit_t bit);
      /**
       *  \brief Brief
       *  
       *  \param [in] bit Parameter_Description
       *  \return Return_Description
       *  
       *  \details Details
       */
       Status_t getBit(Bit_t bit);
      /**
       *  \brief Brief
       *
       *  \param [in] bit Parameter_Description
       *  \return Return_Description
       *
       *  \details Details
       */
       U* getRegister(void);
      
   private:

   protected:


};

#endif // REGISTER_H_INCLUDED
