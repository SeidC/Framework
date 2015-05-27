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
 *          Filename......: [ Register.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

/*=== Includes ================================================================*/
#include "Register.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the Register module
 */
#define REGISTER_MAJOR_VERSION_C                   0u
/**
 * Minor version of the Register module
 */
#define REGISTER_MINOR_VERSION_C                   1u
/**
 * Patch version of the Register module
 */
#define REGISTER_PATCH_VERSION_C                   0u

#if (REGISTER_MAJOR_VERSION_C == REGISTER_MAJOR_VERSION_H)
#if (REGISTER_MINOR_VERSION_C == REGISTER_MINOR_VERSION_H)
#if (REGISTER_PATCH_VERSION_C == REGISTER_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
/*******************************************************************************
 * FUNCTION: Register(...)
 ******************************************************************************/
template <typename U, typename D> Register<U,D>::Register(void)
{
   reg = NULL;
   return;
}

/*******************************************************************************
 * FUNCTION: Register(...)
 ******************************************************************************/
template <typename U, typename D> Register<U,D>::Register(D& sReg)
{
   D* ptr = (D*) reg;
   ptr = &sReg;
   return;
}

/*******************************************************************************
 * FUNCTION: ~Register(...)
 ******************************************************************************/
template <typename U, typename D> Register<U,D>::~Register(void)
{
   reg = NULL;
   return;
}

/*******************************************************************************
 * FUNCTION: void setBit(...)
 ******************************************************************************/
template <typename U, typename D> Std_ReturnType Register<U,D>::setBit(Bit_t bit)
{
   Std_ReturnType ret = E_NULL_PTR;
   if(reg != NULL)
   {
      D* ptr = (D*) reg;
      *ptr |= (1 << (D)bit);
      ret = E_OK;
   }
   return ret;
}

/*******************************************************************************
 * FUNCTION: void clearBit(...)
 ******************************************************************************/
template <typename U, typename D> Std_ReturnType Register<U,D>::clearBit(Bit_t bit)
{
Std_ReturnType ret = E_NULL_PTR;
  if(reg != NULL)
  {
     D* ptr = (D*) reg;
     *ptr &= ~(1 << (D)bit);
     ret = E_OK;
  }
  return ret;
}

/*******************************************************************************
 * FUNCTION: Status_t getBit(...)
 ******************************************************************************/
template <typename U, typename D>  typename Register<U,D>::Status_t Register<U,D>::getBit(Bit_t bit)
{
   Status_t ret = ERROR;
   if (reg != NULL)
   {
      D* ptr = (D*) reg;
      ret = (Status_t) (*ptr & (1 << (D) bit));
   }
   return ret;
}

/*******************************************************************************
 * FUNCTION: void setRegister(...)
 ******************************************************************************/
template <typename U, typename D> void Register<U,D>::setRegister(U& sReg)
{
   reg = &sReg;
   return;
}

/*******************************************************************************
 * FUNCTION: void setRegister(...)
 ******************************************************************************/
template <typename U, typename D> void Register<U,D>::setRegister(D& sReg)
{
   if (reg != NULL)
   {
      D* ptr = (D*)reg;
      ptr = &sReg;
   }
   return;
}


template <typename U, typename D>  U* Register<U,D>::getRegister(void)
{
   return this->reg;
}

template class Register<volatile Register16Bit_t, vuint16_t>;
template class Register<volatile Register8Bit_t, vuint8_t>;


#else
#error "Invalid Patch Version"
#endif
#else
#error "Invalid Minor Version"
#endif
#else
#error "Invalid Major Version"
#endif
