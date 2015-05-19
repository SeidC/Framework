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
 *          Filename......: [ HwTimer.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "HwTimer.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the HwTimer module
 */
#define HWTIMER_MAJOR_VERSION_C                 0u
/**
 * Minor version of the HwTimer module
 */
#define HWTIMER_MINOR_VERSION_C                 1u
 /**
  * Patch version of the HwTimer module
  */
#define HWTIMER_PATCH_VERSION_C                 0u

#if (HWTIMER_MAJOR_VERSION_C == HWTIMER_MAJOR_VERSION_H)
#if (HWTIMER_MINOR_VERSION_C == HWTIMER_MINOR_VERSION_H)
#if (HWTIMER_PATCH_VERSION_C == HWTIMER_PATCH_VERSION_H)

/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/

/************************************************************************/
/* FUNCTION: Std_ReturnType HwTimer::HwTimer    			         	*/
/************************************************************************/
template <class T> HwTimer<T>::HwTimer()
{
	this->initHwRegister();
	
} //HwTimer

/************************************************************************/
/* FUNCTION: Std_ReturnType HwTimer::HwTimer    			         	*/
/************************************************************************/
template <class T> HwTimer<T>::HwTimer(HwTimer_t timer)
{
    this->setHwRegister(timer);
    
}

/************************************************************************/
/* FUNCTION: Std_ReturnType HwTimer::setInternalPullUp			         	*/
/************************************************************************/
template <class T>  HwTimer<T>::~HwTimer()
{
} //~HwTimer

/************************************************************************/
/* FUNCTION: Std_ReturnType HwTimer::setHwRegister 			         	*/
/************************************************************************/
template <class T> Std_ReturnType HwTimer<T>::setHwRegister(HwTimer_t timer)
{
    Std_ReturnType ret = E_NOK;
    this->initHwRegister();
    switch (timer)
    {
	    case TIMER_0:
	    pTCCRxA = &GET_HW_TIMER_REGISTER_TCCR0A();
	    pTCCRxB = &GET_HW_TIMER_REGISTER_TCCR0B();
	    pTCNTx  = &GET_HW_TIMER_REGISTER_TCNT0();
	    pOCRxA  = &GET_HW_TIMER_REGISTER_OCR0A();
	    pOCRxB  = &GET_HW_TIMER_REGISTER_OCR0B();
	    pTIMSKx = &GET_HW_TIMER_REGISTER_TIMSK0();
	    pTIFRx  = &GET_HW_TIMER_REGISTER_TIFR0();
        ret = E_OK;
	    break;
	    case TIMER_1:
	    pTCCRxA = &GET_HW_TIMER_REGISTER_TCCR1A();
	    pTCCRxB = &GET_HW_TIMER_REGISTER_TCCR1B();
	    pTCNTx  = &GET_HW_TIMER_REGISTER_TCNT1();
	    pOCRxA  = &GET_HW_TIMER_REGISTER_OCR1A();
	    pOCRxB  = &GET_HW_TIMER_REGISTER_OCR1B();
	    pTIMSKx = &GET_HW_TIMER_REGISTER_TIMSK1();
	    pTIFRx  = &GET_HW_TIMER_REGISTER_TIFR1();
	    pICRx	= &GET_HW_TIMER_REGISTER_ICR1();
        ret = E_OK;
	    break;
		 
	    case TIMER_2:
	    pTCCRxA = &GET_HW_TIMER_REGISTER_TCCR2A();
	    pTCCRxB = &GET_HW_TIMER_REGISTER_TCCR2B();
	    pTCNTx  = &GET_HW_TIMER_REGISTER_TCNT2();
	    pOCRxA  = &GET_HW_TIMER_REGISTER_OCR2A();
	    pOCRxB  = &GET_HW_TIMER_REGISTER_OCR2B();
	    pTIMSKx = &GET_HW_TIMER_REGISTER_TIMSK2();
	    pTIFRx  = &GET_HW_TIMER_REGISTER_TIFR2();
	    pASSR	= &GET_HW_TIMER_REGISTER_ASSR();
	    pGTTCR	= &GET_HW_TIMER_REGISTER_GTCCR();
        ret = E_OK;
	    break;
	    case TIMER_3:
	    pTCCRxA = NULL;
	    pTCCRxB = NULL;
	    pTCNTx  = NULL;
	    pOCRxA  = NULL;
	    pOCRxB  = NULL;
	    pTIMSKx = NULL;
	    pTIFRx  = NULL;
	    pICRx	= NULL;
	    break;
	    default:
		 
	    break;
    }
    return ret;
}

/************************************************************************/
/* FUNCTION: Std_ReturnType HwTimer::initHwRegister			         	*/
/************************************************************************/
template <class T> void HwTimer<T>::initHwRegister(void) 
{
	pTCCRxA  	  = NULL;
	pTCCRxB		  = NULL;
	pTCNTx 		  = NULL;
	pOCRxA 		  = NULL;
	pTIMSKx		  = NULL;
	pTIFRx		  = NULL;
	pICRx 		  = NULL;
	pASSR 		  = NULL;
	pGTTCR		  = NULL;
	return;
}

/************************************************************************/
/* FUNCTION: Std_ReturnType HwTimer::setOutputCompareMode              	*/
/************************************************************************/
template <class T> Std_ReturnType HwTimer<T>::setOutputCompareMode(OutputCompareChannel_t channel, 
                                                                   OutputCompare_t status)
{
    Std_ReturnType ret = E_NOK;
    
    if (pTCCRxA != NULL)
    {
        switch(channel)
        {
            case CHANNEL_A:
                status = (status << COMA);
                SET_BITS_BY_MASK(*pTCCRxA,status);
                ret = E_OK;
            break;
            case CHANNEL_B:
                status = (status << COMB);
                SET_BITS_BY_MASK(*pTCCRxA,status);
                ret = E_OK;
            break;
            case BOTH_CHANNEL:
                status = (status << COMB);
                SET_BITS_BY_MASK(*pTCCRxA,status);
                status = (status << (COMA - COMB));
                SET_BITS_BY_MASK(*pTCCRxA,status);
                ret = E_OK;
            break;
            default:
            break;
        }
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
