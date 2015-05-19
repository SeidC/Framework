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
 *          Filename......: [ Port.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "Port.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the Port module
 */
#define PORT_MAJOR_VERSION_C                                 0u
/**
 * Minor version of the Port module
 */
#define PORT_MINOR_VERSION_C                                 1u
 /**
  * Patch version of the Port module
  */
#define PORT_PATCH_VERSION_C                                 0u

#if (PORT_MAJOR_VERSION_C == PORT_MAJOR_VERSION_H)
#if (PORT_MINOR_VERSION_C == PORT_MINOR_VERSION_H)
#if (PORT_PATCH_VERSION_C == PORT_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/

/*******************************************************************************
 * FUNCTION: Port(...)
 ******************************************************************************/
 Port::Port(void)
 {

    return;
 }

/*******************************************************************************
 * FUNCTION: Port(...)
 ******************************************************************************/
Port::Port(IoPort_t& port) : IoPortAbs(port)
{

   return;
}

/*******************************************************************************
 * FUNCTION: ~Port(...)
 ******************************************************************************/
Port::~Port(void)
{

   return;
}

/*******************************************************************************
 * FUNCTION: void set(...)
 ******************************************************************************/
void Port::set(Pin_t pin)
{
   this->setIo(pin,HIGH);
   return;
}


/*******************************************************************************
 * FUNCTION: void setByMask(...)
 ******************************************************************************/
void Port::setByMask(uint8_t bitMask)
{
   uint8_t i;
   for(i = 0; i < 8; i++)
   {
      if ((bitMask & (1 << i)) > 0u)
      {
         this->setIo((Pin_t)i,HIGH);
      }
   }
   return;
}

/*******************************************************************************
 * FUNCTION: void clear(...)
 ******************************************************************************/
void Port::clear(Pin_t pin)
{
    this->setIo(pin,LOW);
   return;
}

/*******************************************************************************
 * FUNCTION: void clearByMask(...)
 ******************************************************************************/
void Port::clearByMask(uint8_t bitMask)
{
   uint8_t i;
   for(i = 0; i < 8; i++)
   {
      if ((bitMask & (1 << i)) == 0u)
      {
         this->setIo((Pin_t)i,LOW);
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
