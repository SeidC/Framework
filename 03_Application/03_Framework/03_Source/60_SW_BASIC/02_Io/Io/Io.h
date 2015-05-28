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
      DIGITAL_IN      =   0x00,
      DIGITAL_OUT     =   0x01,
      DIGITAL_NOT_DEF =   0x02,
   };

   enum IORegister_t
   {
      DDR = 0x00,
      PORT,
      PIN
   };

   enum IOPullup_t
   {
      PULLUP_OFF        = 0x00,
      PULLUP_ON         = 0x01,
      PULLUP_NOT_DEF    = 0x02,
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
   Std_ReturnType setIoDirection(Pin_t pin,IODirection_t dir);
   /**
    *  \brief Brief
    *  
    *  \param [in] pin Parameter_Description
    *  \param [in] pullUp Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   Std_ReturnType  setIoPullUp(Pin_t pin, IOPullup_t pullUp);
   /**
    *  \brief Brief
    *  
    *  \param [in] port Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   Std_ReturnType  setIoPort(IoPort_t& port);
   /**
    *  \brief Brief
    *
    *  \param [in] port Parameter_Description
    *  \return Return_Description
    *
    *  \details Details
    */
   IODirection_t getIoDirection(Pin_t pin);
   /**
    *  \brief Brief
    *
    *  \param [in] port Parameter_Description
    *  \return Return_Description
    *
    *  \details Details
    */
   IOPullup_t getIoPullupStatus(Pin_t pin);


   private:
   Io(const Io &c);
   Io& operator=(const Io &c);
};
//Io

#endif // IO_H_INCLUDED
