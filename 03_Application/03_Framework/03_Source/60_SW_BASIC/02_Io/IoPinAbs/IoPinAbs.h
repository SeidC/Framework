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
 *          Filename......: [ IoPinAbs.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IOPINABS_H_INCLUDED
#define IOPINABS_H_INCLUDED

/*=== Includes ================================================================*/
#include "Project.h"
#include "Io.h"
#include "IoPinAbs_Interface.h"


/*=== Version Check ===========================================================*/
/**
 * Major version of the IoPinAbs module
 */
#define IOPINABS_MAJOR_VERSION_H                   0u
/**
 * Minor version of the IoPinAbs module
 */
#define IOPINABS_MINOR_VERSION_H                   1u
/**
 * Patch version of the IoPinAbs module
 */
#define IOPINABS_PATCH_VERSION_H                   0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class IoPinAbs : private Io, public IoPinAbs_Interface
{
/*=== Enumerates	===========================================================*/
   public:

   private:

   protected:

/*=== Parameter ===========================================================*/
   public:


   protected:
   //Parameter

   private:
   Pin_t pin;

/*=== Functions ===============================================================*/
   public:
   /**
    *  \brief Brief
    *  
    *  \return Return_Description
    *  
    *  \details Details
    */
   IoPinAbs();
   /**
    *  \brief Brief
    *  
    *  \param [in] port Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   IoPinAbs(Port_t& port);
   /**
    *  \brief Brief
    *  
    *  \return Return_Description
    *  
    *  \details Details
    */
   ~IoPinAbs();

   protected:


   private:
   /**
    *  \brief Brief
    *  
    *  \param [in] c Parameter_Description
    *  \return Return_Description
    *  
    *  \details Details
    */
   IoPinAbs(const IoPinAbs &c);
   IoPinAbs& operator=(const IoPinAbs &c);

   public:
   void setPin(Pin_t sPin);
   void setPinPort(Port_t &sPort);

   Std_ReturnType set(void);
   Std_ReturnType set(Level_t level);
   Std_ReturnType reset(void);
   Std_ReturnType setDir(IODirection_t dir);

   protected:


   private:
};
//IoPinAbs

#endif // IOPINABS_H_INCLUDED
