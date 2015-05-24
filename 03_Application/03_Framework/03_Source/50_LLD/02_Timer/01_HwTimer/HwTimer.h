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
 *          Filename......: [ HwTimer.h  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef HWTIMER_H_INCLUDED
#define HWTIMER_H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Project.h"
#include "Std_Types.h"
#include "HwTimer_Cfg.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the HwTimer module
 */
#define HWTIMER_MAJOR_VERSION_H    					0u
/**
 * Minor version of the HwTimer module
 */
#define HWTIMER_MINOR_VERSION_H						1u
 /**
  * Patch version of the HwTimer module
  */
#define HWTIMER_PATCH_VERSION_H						0u

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
/**
 *
 */
typedef volatile uint8_t Timer8_t;

/**
 *
 */
typedef volatile uint16_t Timer16_t;


template <class T> 
class HwTimer
{
/*=== Class Parameter =========================================================*/	
   
    public: //Parameter
	
    enum OutputCompareChannel_t
    {
        CHANNEL_A = 0x00u,
        CHANNEL_B        ,
        BOTH_CHANNEL         
        
    };
    
    enum OutputCompare_t
    {
        NORMAL_MODE         = 0x00,
        TOGGLE_ON_COMPARE         , 
        CLEAR_ON_COMPARE          ,
        SET_ON_COMPARE        
    };
    
	protected: //Parameter
    
    enum HwTimer_t
    {
        TIMER_0 = 0x00,
        TIMER_1	= 0x01,
        TIMER_2	= 0x02,
        TIMER_3	= 0x03,
    };
    
	
    private: //Parameter
		Timer8_t* pTCCRxA;
		Timer8_t* pTCCRxB;
		T*		  pTCNTx;
		T*		  pOCRxA;
		T*		  pOCRxB;
		Timer8_t* pTIMSKx;
		Timer8_t* pTIFRx;
		
/*--- Register for Timer 1/3 -------------------------------------------------*/
		T*		  pICRx;
/*--- Register for Timer 2 ---------------------------------------------------*/		
		Timer8_t* pASSR;
		Timer8_t* pGTTCR;
		

/*=== Class Functions ========================================================*/
	public:	//Functions
		/**
		 *  \brief Brief
		 *  
		 *  \return Return_Description
		 *  
		 *  \details Details
		 */
		HwTimer();
		/**
		 *  \brief Brief
		 *  
		 *  \param [in] timer Parameter_Description
		 *  \return Return_Description
		 *  
		 *  \details Details
		 */
		HwTimer(HwTimer_t timer);
		/**
		 *  \brief Brief
		 *  
		 *  \return Return_Description
		 *  
		 *  \details Details
		 */
		~HwTimer();
        		/**
         *  \brief Brief
         *  
         *  \param [in] channel Parameter_Description
         *  \param [in] status Parameter_Description
         *  \return Return_Description
         *  
         *  \details Details
         */
        Std_ReturnType setOutputCompareMode(OutputCompareChannel_t channel, OutputCompare_t status);
        
        
		
	protected: //Functions
		HwTimer( const HwTimer &c );
		HwTimer& operator=( const HwTimer &c );
        		/**
         *  \brief Brief
         *  
         *  \param [in] timer Parameter_Description
         *  \return Return_Description
         *  
         *  \details Details
         */
        Std_ReturnType setHwRegister(HwTimer_t timer);
	
	private: //Functions		
		void initHwRegister(void);
        void setWaveFormGeneratorMode(void);
        
}; //HwTimer



#endif // HWTIMER_H_INCLUDED
