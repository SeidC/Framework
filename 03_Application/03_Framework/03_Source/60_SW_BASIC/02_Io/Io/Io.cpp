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
 *          Filename......: [ Io.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "Io.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the Io module
 */
#define IO_MAJOR_VERSION_C                                 0u
/**
 * Minor version of the Io module
 */
#define IO_MINOR_VERSION_C                                 1u
 /**
  * Patch version of the Io module
  */
#define IO_PATCH_VERSION_C                                 0u

#if (IO_MAJOR_VERSION_C == IO_MAJOR_VERSION_H)
#if (IO_MINOR_VERSION_C == IO_MINOR_VERSION_H)
#if (IO_PATCH_VERSION_C == IO_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
/*******************************************************************************
 * FUNCTION: Io(...)
 ******************************************************************************/
Io::Io(void)
{

}

/*******************************************************************************
 * FUNCTION: Io(...)
 ******************************************************************************/
Io::Io(Port_t& port)
{
   ioDdrx.setRegister((*port.ddr));
   ioPortx.setRegister(*(port.port));
   ioPinx.setRegister(*(port.pin));

}

/*******************************************************************************
 * FUNCTION: ~Io(...)
 ******************************************************************************/
Io::~Io(void)
{

}



/*******************************************************************************
 * FUNCTION: void setPort(...)
 ******************************************************************************/
Std_ReturnType  Io::setIoPort(Port_t& port)
{
   ioDdrx.setRegister((*port.ddr));
   ioPortx.setRegister(*(port.port));
   ioPinx.setRegister(*(port.pin));
   return E_OK;
}

/*******************************************************************************
 * FUNCTION: void setIoDirection(...)
 ******************************************************************************/
Std_ReturnType  Io::setIoDirection(Pin_t pin,IODirection_t dir)
{
   Std_ReturnType ret = E_NOK;
   if (pin != PIN_NOT_DEEF)
   {
      if (dir == DIGITAL_IN)
      {
         ret = ioDdrx.clearBit((Bit_t)pin);
      }
      else if (dir == DIGITAL_OUT)
      {
         ret = ioDdrx.setBit((Bit_t)pin);
      }
      else
      {
         /*-- Do Nothing ---*/
      }
   }
   else
   {
      ret = E_PIN_NOT_DEF;
   }
   return ret;
}

/*******************************************************************************
 * FUNCTION: void setIoPullUp(...)
 ******************************************************************************/
Std_ReturnType  Io::setIoPullUp(Pin_t pin, IOPullup_t pullUp)
{
   Std_ReturnType ret = E_NOK;
   Level_t stat;
   stat = ioDdrx.getBit((Bit_t)pin);
   switch (stat)
   {
      case LOW:
         if (pullUp == PULLUP_ON)
         {
            ioPortx.setBit((Bit_t)pin);
         }
         else
         {
            ioPortx.clearBit((Bit_t)pin);
         }
      break;
      case HIGH:
         ret = E_WRONG_IO_DIR;
      break;
      default:
         ret = E_NULL_PTR;
      break;
   }
   return E_OK;
}

/*******************************************************************************
 * FUNCTION: IODirection_t getIoDirection(...)
 ******************************************************************************/
Io::IODirection_t Io::getIoDirection(Pin_t pin)
{
   return (IODirection_t)ioDdrx.getBit((Bit_t)pin);
}

/*******************************************************************************
 * FUNCTION: IOPullup_t getIoPullupStatus(...)
 ******************************************************************************/
Io::IOPullup_t Io::getIoPullupStatus(Pin_t pin)
{
   IOPullup_t ret = PULLUP_OFF;
   if (((IODirection_t)ioDdrx.getBit((Bit_t)pin)) == DIGITAL_IN)
   {
      ret = (IOPullup_t) ioPinx.getBit((Bit_t)pin);
   }
   return ret;
}


void Io::getIoPort(Port_t &port)
{

   port.ddr = ioDdrx.getRegister();
   port.pin = ioPinx.getRegister();
   port.port= ioPortx.getRegister();
   return;
}


Std_ReturnType Io::setIo(Pin_t pin, Level_t level)
{
   Std_ReturnType ret = E_PIN_NOT_DEF;
   if(pin != PIN_NOT_DEEF)
   {
      if (level == HIGH)
      {
         ioPortx.setBit((Bit_t)pin);
      }
      else
      {
         ioPortx.clearBit((Bit_t)pin);
      }
      ret = E_OK;
   }
   return ret;
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
