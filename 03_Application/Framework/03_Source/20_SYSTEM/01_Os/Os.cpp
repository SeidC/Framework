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
 *			Filename......: [ Os.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "Os.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the Temlate module
 */
#define OS_MAJOR_VERSION_C    					0u
/**
 * Minor version of the Os module
 */
#define OS_MINOR_VERSION_C					1u
 /**
  * Patch version of the Os module
  */
#define OS_PATCH_VERSION_C					0u

#if (OS_MAJOR_VERSION_C == OS_MAJOR_VERSION_H)
#if (OS_MINOR_VERSION_C == OS_MINOR_VERSION_H)
#if (OS_PATCH_VERSION_C == OS_PATCH_VERSION_H)

/*=== Datatypes ===============================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
Os::Os(void)
{
	
}

void Os::setupTimer(void)
{
	
}

void Os::initApp(void)
{
	return;
}

void Os::startOs(void)
{

	return;
}


Os* Os::newOs(void)
{
	
	if (osCreated == false)
	{
		me = new Os();
		osCreated = true;
	}
	return me;
}


Os* Os::getOs(void)
{
	return me;
}

void Os::setRegister(Register reg,  Bits bits , Value value)
{
	volatile uint8_t *wReg = 0u;
	
	if (reg == COUNTER_CONTROL_REGISTER_A)
	{
		wReg = &TCCR1A;
	}
	else if (reg == COUNTER_CONTROL_REGISTER_B)
	{
		wReg = &TCCR1B;
	}
	else if (reg == COUNTER_CONTROL_REGISTER_C)
	{
		wReg = &TCCR1C;
	}
	else if (reg == INTERRUPT_MASK_REGISTER)
	{
		wReg = &TIMSK1;
	} 
	else
	{
		/*--- Do Nothing ---*/
	}
	
	if (wReg != NULL)
	{
		if (bits != WAVEFORM_GENERATION_MODE) 
		{
			value > 0 ? SET_BIT(*wReg,value) : RESET_BIT(*wReg,value);
		}
		else
		{
			
			
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