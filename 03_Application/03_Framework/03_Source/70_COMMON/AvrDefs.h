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
 *          Filename......: [ Avr_Devs_.h  ]                                   *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef AVR_DEVS__H_INCLUDED
#define AVR_DEVS__H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Std_Types.h"

/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/

/**
 * @brief NOP
 *
 * No operation command for Atmel 8Bit controller
 */
#define NOP()                                           \
       asm volatile ("nop")

/**
 * @brief RETURN
 *
 * Return statement for Interrupt functions
 */
#define RETURN                                          \
        reti()
/**
 *
 */
#define INLINE

/**
 * @brief ISR_DISABLE_INTERRUPT
 *
 * Macro to disable all interrupts
 */
#define ISR_DISABLE_INTERRUPTS()                                \
        cli()

/**
 * @brief ISR_ENABLE_INTERRUPT
 *
 * Macro to enable all interrupts
 */
#define ISR_ENABLE_INTERRUPTS()                                 \
        sei()

/*=== Variables (Global) ======================================================*/
 extern "C" void __cxa_pure_virtual();
/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/


#endif // AVR_DEVS__H_INCLUDED
