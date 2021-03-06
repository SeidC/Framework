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
 *          Filename......: [ Io_Cfg.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "Io_Cfg.h"

/*=== Version Check ===========================================================*/
/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
/**
 * Configuration for Port A
 */
IoPort_t IoPort_A =
      {
          &DDRA,
          &PORTA,
          &PINA,
      };

/**
 * Configuration for Port B
 */
IoPort_t IoPort_B =
      {
          &DDRB,
          &PORTB,
          &PINB,
      };

/**
 * Configuration for Port C
 */
IoPort_t IoPort_C =
      {
          &DDRC,
          &PORTC,
          &PINC,
      };

/**
 * Configuration for Port D
 */
IoPort_t IoPort_D =
      {
          &DDRD,
          &PORTD,
          &PIND,
      };



