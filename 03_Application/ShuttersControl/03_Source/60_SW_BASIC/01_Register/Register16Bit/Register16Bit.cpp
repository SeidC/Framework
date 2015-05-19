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
 *          Filename......: [ Register16Bit.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "Register16Bit.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the Register16Bit module
 */
#define REGISTER16BIT_MAJOR_VERSION_C                                 0u
/**
 * Minor version of the Register16Bit module
 */
#define REGISTER16BIT_MINOR_VERSION_C                                 1u
 /**
  * Patch version of the Register16Bit module
  */
#define REGISTER16BIT_PATCH_VERSION_C                                 0u

#if (REGISTER16BIT_MAJOR_VERSION_C == REGISTER16BIT_MAJOR_VERSION_H)
#if (REGISTER16BIT_MINOR_VERSION_C == REGISTER16BIT_MINOR_VERSION_H)
#if (REGISTER16BIT_PATCH_VERSION_C == REGISTER16BIT_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
/*******************************************************************************
 * FUNCTION: Register16Bit(...)
 ******************************************************************************/
Register16Bit::Register16Bit(void)
{

   return;
}

/*******************************************************************************
 * FUNCTION: Register16Bit(...)
 ******************************************************************************/
Register16Bit::Register16Bit(vuint16_t& sReg)
{
   vuint16_t* ptr = (vuint16_t*)reg;
   ptr = &sReg;
   return;
}

/*******************************************************************************
 * FUNCTION: ~Register16Bit(...)
 ******************************************************************************/
Register16Bit::~Register16Bit(void)
{

   return;
}

#else
	#error "Invalid Patch Version"
#endif
#else
	#error "Invalid Minor Version"
#endif
#else
	#error "Invalid Major Version"
#endif
