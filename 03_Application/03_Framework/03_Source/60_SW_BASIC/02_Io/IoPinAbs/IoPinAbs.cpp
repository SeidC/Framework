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
 *          Filename......: [ IoPinAbs.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "IoPinAbs.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the IoPinAbs module
 */
#define IOPINABS_MAJOR_VERSION_C                                 0u
/**
 * Minor version of the IoPinAbs module
 */
#define IOPINABS_MINOR_VERSION_C                                 1u
 /**
  * Patch version of the IoPinAbs module
  */
#define IOPINABS_PATCH_VERSION_C                                 0u

#if (IOPINABS_MAJOR_VERSION_C == IOPINABS_MAJOR_VERSION_H)
#if (IOPINABS_MINOR_VERSION_C == IOPINABS_MINOR_VERSION_H)
#if (IOPINABS_PATCH_VERSION_C == IOPINABS_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/

IoPinAbs::IoPinAbs(Port_t& port) : Io(port)
{
   pin = PIN_NOT_DEEF;
   return;
};


IoPinAbs::IoPinAbs()
{
   pin = PIN_NOT_DEEF;
   return;
}


IoPinAbs::~IoPinAbs()
{

   return;
}

void IoPinAbs::setPin(Pin_t sPin)
{
   pin = sPin;
   return;
}


void IoPinAbs::setPinPort(Port_t &sPort)
{
   setIoPort(sPort);
   return;
}


Std_ReturnType IoPinAbs::set(void)
{
   return setIo(pin,HIGH);
}


Std_ReturnType IoPinAbs::set(IoPinAbs::Level_t level)
{
   return setIo(pin,level);
}

Std_ReturnType IoPinAbs::reset(void)
{
   return setIo(pin,LOW);
}

Std_ReturnType IoPinAbs::setDir(IODirection_t dir)
{
   return setIoDirection(pin,dir);
}

Std_ReturnType IoPinAbs::setPort(Port_t &sPort)
{
   return setIoPort(sPort);
}


void IoPinAbs::getPort(Port_t &sPort)
{
   getIoPort(sPort);
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
