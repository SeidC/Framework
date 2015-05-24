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
 *          Filename......: [ Io.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Io_Cfg.h"
#include "Register8Bit.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the Io module
 */
#define IO_MAJOR_VERSION_H                                           0u
/**
 * Minor version of the Io module
 */
#define IO_MINOR_VERSION_H                                           1u
/**
 * Patch version of the Io module
 */
#define IO_PATCH_VERSION_H                                           0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class Io : public Object
{
/*=== Enumerates	===========================================================*/
   public:
   //Enumerates
   enum IODirection_t
   {
      DIGITAL_IN = 0x00,
      DIGITAL_OUT = 0x01
   };

   enum IORegister_t
   {
      DDR = 0x00,
      PORT,
      PIN
   };

   enum IOPullup_t
   {
      PULLUP_OFF = 0x00,
      PULLUP_ON
   };
   private:

   protected:

/*=== Enumerates	===========================================================*/
   public:
   //Parameter

   protected:
   Register8Bit ioDdrx;
   Register8Bit ioPortx;
   Register8Bit ioPinx;

   private:



/*=== Functions ===============================================================*/
   public:
   /**
    *  \brief Brief
    *  
    *  \return Return_Description
    *  
    *  \details Details
    */
   Io(void);
   /**
    *  \brief Brief
    *  
    *  \param [in] port Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   Io(IoPort_t& port);
   /**
    *  \brief Brief
    *  
    *  \return Return_Description
    *  
    *  \details Details
    */
   virtual ~Io(void);



   protected:

    /**
    *  \brief Brief
    *  
    *  \param [in] pin Parameter_Description
    *  \param [in] status Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   virtual void setIo(Pin_t pin, Status_t status) = 0;
   /**
    *  \brief Brief
    *  
    *  \param [in] pin Parameter_Description
    *  \param [in] dir Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   virtual void setIoDirection(Pin_t pin,IODirection_t dir) = 0;
   /**
    *  \brief Brief
    *  
    *  \param [in] pin Parameter_Description
    *  \param [in] pullUp Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   virtual void setIoPullUp(Pin_t pin, IOPullup_t pullUp) = 0;
   /**
    *  \brief Brief
    *  
    *  \param [in] port Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   virtual void setIoPort(IoPort_t& port) = 0;



   private:
   Io(const Io &c);
   Io& operator=(const Io &c);
};
//Io

#endif // IO_H_INCLUDED
