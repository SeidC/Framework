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
 *          Filename......: [ PortPin.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef PORTPIN_H_INCLUDED
#define PORTPIN_H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Project.h"
#include "IoPinAbs.h"

/*=== Version Check ===========================================================*/
/**
 * Major version of the PortPin module
 */
#define PORTPIN_MAJOR_VERSION_H                                 0u
/**
 * Minor version of the PortPin module
 */
#define PORTPIN_MINOR_VERSION_H                                 1u
 /**
  * Patch version of the PortPin module
  */
#define PORTPIN_PATCH_VERSION_H                                 0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

class PortPin : public IoPinAbs
{
/*=== Enumerates	===========================================================*/	
	public: //Enumerates
	
	private:
	
	protected:
	
/*=== Enumerates	===========================================================*/		
	public: //Parameter			
		
	protected: //Parameter

	private: //Parameter
	
/*=== Functions ===============================================================*/
	public: //Functions
		 /**
		  *  \brief Brief
		  *  
		  *  \return Return_Description
		  *  
		  *  \details Details
		  */
		 PortPin();
		 /**
		  *  \brief Brief
		  *  
		  *  \param [in] port Parameter_Description
		  *  \return Return_Description
		  *  
		  *  \details Details
		  */
		 PortPin(IoPort_t& port);
		 /**
		 *  \brief Brief
		 *  
		 *  \return Return_Description
		 *  
		 *  \details Details
		 */
		~PortPin();

	   /**
		*  \brief Brief
		*
		*  \param [in] pin Parameter_Description
		*  \return Return_Description
		*
		*  \details Details
		*/
	   void setIoPin(Pin_t pin);
	protected: //Functions
			
	private: //Functions
		/**
		 *  \brief Brief
		 *  
		 *  \param [in] c Parameter_Description
		 *  \return Return_Description
		 *  
		 *  \details Details
		 */
		PortPin( const PortPin &c );
		
		PortPin& operator=( const PortPin &c );
		
}; //PortPin


#endif // PORTPIN_H_INCLUDED
