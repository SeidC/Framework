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
 *          Filename......: [ HwTimer_Cfg.h  ]                                *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef HWTIMER_CFG_H_INCLUDED
#define HWTIMER_CFG_H_INCLUDED
 
/*=== Includes ================================================================*/

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/
/*--- Register for Hardware Timer 0 -------------------------------------------*/

#if(__AVR_ATmega324PA__)

#define COMA    6
#define COMB    4



/*--- Register for Hardware Timer 0 --------------------------------------------*/
#define GET_HW_TIMER_REGISTER_TCCR0A() 		\
		(TCCR0A)
		
#define GET_HW_TIMER_REGISTER_TCCR0B()		\
		(TCCR0B)
		
#define GET_HW_TIMER_REGISTER_TCNT0()		\
		(TCNT0)
		
#define GET_HW_TIMER_REGISTER_OCR0A()		\
		(OCR0A)

#define GET_HW_TIMER_REGISTER_OCR0B()		\
		(OCR0B)

#define GET_HW_TIMER_REGISTER_TIMSK0()		\
		(TIMSK0)

#define GET_HW_TIMER_REGISTER_TIFR0()		\
		(TIFR0)

/*--- Register for Hardware Timer 1 --------------------------------------------*/
#define GET_HW_TIMER_REGISTER_TCCR1A() 		\
		(TCCR1A)
		
#define GET_HW_TIMER_REGISTER_TCCR1B()		\
		(TCCR1B)
		
#define GET_HW_TIMER_REGISTER_TCNT1()		\
		(TCNT1)
		
#define GET_HW_TIMER_REGISTER_OCR1A()		\
		(OCR1A)

#define GET_HW_TIMER_REGISTER_OCR1B()		\
		(OCR1B)

#define GET_HW_TIMER_REGISTER_TIMSK1()		\
		(TIMSK1)

#define GET_HW_TIMER_REGISTER_TIFR1()		\
		(TIFR1)
		
#define GET_HW_TIMER_REGISTER_ICR1()		\
		(ICR1)
		
/*--- Register for Hardware Timer 2 -------------------------------------------*/
#define GET_HW_TIMER_REGISTER_TCCR2A() 		\
		(TCCR2A)
		
#define GET_HW_TIMER_REGISTER_TCCR2B()		\
		(TCCR2B)
		
#define GET_HW_TIMER_REGISTER_TCNT2()		\
		(TCNT2)
		
#define GET_HW_TIMER_REGISTER_OCR2A()		\
		(OCR2A)

#define GET_HW_TIMER_REGISTER_OCR2B()		\
		(OCR2B)

#define GET_HW_TIMER_REGISTER_TIMSK2()		\
		(TIMSK2)

#define GET_HW_TIMER_REGISTER_TIFR2()		\
		(TIFR2)
		
#define GET_HW_TIMER_REGISTER_ASSR()		\
		(ASSR)
				
#define GET_HW_TIMER_REGISTER_GTCCR()		\
		(GTCCR)
		
/*--- Register for Hardware Timer 3 -------------------------------------------*/
#define GET_HW_TIMER_REGISTER_TCCR3A() 		\
		(NULL)
		
#define GET_HW_TIMER_REGISTER_TCCR3B()		\
		(NULL)
		
#define GET_HW_TIMER_REGISTER_TCNT3()		\
		(NULL)
		
#define GET_HW_TIMER_REGISTER_OCR3A()		\
		(NULL)

#define GET_HW_TIMER_REGISTER_OCR3B()		\
		(NULL)

#define GET_HW_TIMER_REGISTER_TIMSK3()		\
		(NULL)

#define GET_HW_TIMER_REGISTER_TIFR3()		\
		(NULL)

#define GET_HW_TIMER_REGISTER_ICR3()		\
		(NULL)
				
#else 	
		
/*--- Register for Hardware Timer 3 -------------------------------------------*/
/*
#define GET_HW_TIMER_REGISTER_TCCR3A() 		\
		(TCCR3A)
		
#define GET_HW_TIMER_REGISTER_TCCR3B()		\
		(TCCR3B)
		
#define GET_HW_TIMER_REGISTER_TCNT3()		\
		(TCNT3)
		
#define GET_HW_TIMER_REGISTER_OCR3A()		\
		(OCR3A)

#define GET_HW_TIMER_REGISTER_OCR3B()		\
		(OCR3B)

#define GET_HW_TIMER_REGISTER_TIMSK3()		\
		(TIMSK3)

#define GET_HW_TIMER_REGISTER_TIFR3()		\
		(TIFR3)

#define GET_HW_TIMER_REGISTER_ICR3()		\
		(ICR3)
*/
	#error "No configuration for the current device"	
#endif
/*=== Global Data Types =======================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/


#endif // HWTIMER_CFG_H_INCLUDED