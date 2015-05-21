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
 *          Filename......: [ IoPortAbs.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "IoPortAbs.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the IoPortAbs module
 */
#define IOPORTABS_MAJOR_VERSION_C                                 0u
/**
 * Minor version of the IoPortAbs module
 */
#define IOPORTABS_MINOR_VERSION_C                                 1u
 /**
  * Patch version of the IoPortAbs module
  */
#define IOPORTABS_PATCH_VERSION_C                                 0u

#if (IOPORTABS_MAJOR_VERSION_C == IOPORTABS_MAJOR_VERSION_H)
#if (IOPORTABS_MINOR_VERSION_C == IOPORTABS_MINOR_VERSION_H)
#if (IOPORTABS_PATCH_VERSION_C == IOPORTABS_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/

/*******************************************************************************
 * FUNCTION: IoPortAbs(...)
 ******************************************************************************/
IoPortAbs::IoPortAbs()
{
   return;
}


/*******************************************************************************
 * FUNCTION: IoPortAbs(...)
 ******************************************************************************/
IoPortAbs::IoPortAbs(IoPort_t& port) : Io(port)
{
   return;
}


/*******************************************************************************
 * FUNCTION: ~IoPortAbs(...)
 ******************************************************************************/
IoPortAbs::~IoPortAbs()
{
   return;
}


/*******************************************************************************
 * FUNCTION: void setPort(...)
 ******************************************************************************/
void IoPortAbs::setIoPort(IoPort_t& port)
{
   ioDdrx.setRegister((*port.ddr));
   ioPortx.setRegister(*(port.port));
   ioPinx.setRegister(*(port.pin));
   return;
}

/*******************************************************************************
 * FUNCTION: void setIoDirection(...)
 ******************************************************************************/
void IoPortAbs::setIoDirection(Pin_t pin,IODirection_t dir)
{
   if (dir == DIGITAL_IN)
   {
      ioDdrx.clearBit((Bit_t)pin);
   }
   else if (dir == DIGITAL_OUT)
   {
      ioDdrx.setBit((Bit_t)pin);
   }
   else
   {
      /*-- Do Nothing ---*/
   }
   return;
}

/*******************************************************************************
 * FUNCTION: void setIoPullUp(...)
 ******************************************************************************/
void IoPortAbs::setIoPullUp(Pin_t pin, IOPullup_t pullUp)
{
   if(ioDdrx.getBit((Bit_t)pin) == LOW)
   {
      if (pullUp == PULLUP_ON)
      {
         ioPortx.setBit((Bit_t)pin);
      }
      else
      {
         ioPortx.clearBit((Bit_t)pin);
      }
   }
   return;
}


/*******************************************************************************
 * FUNCTION: void setIo(...)
 ******************************************************************************/
void IoPortAbs::setIo(Pin_t pin,Status_t status)
{
   if(ioDdrx.getBit((Bit_t)pin) == LOW)
   {
      if(status == LOW)
      {
         ioPortx.setBit((Bit_t)pin);
      }
      else
      {
         ioPortx.clearBit((Bit_t)pin);
      }
   }
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
