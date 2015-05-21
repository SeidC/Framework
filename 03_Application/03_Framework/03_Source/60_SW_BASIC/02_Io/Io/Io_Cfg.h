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
 *          Filename......: [ Io_Cfg_Cfg.h  ]                                *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef IO_CFG_CFG_H_INCLUDED
#define IO_CFG_CFG_H_INCLUDED
 
/*=== Includes ================================================================*/
#include "Std_Types.h"
/*=== Global Defines ==========================================================*/

/*=== Global Constants ========================================================*/

/*=== Global Data Types =======================================================*/
/**
 * Type definition to configure the Port module.
 * This type is needed to initialize a Port.
 */
typedef struct
{
   vuint8_t* ddr;
   vuint8_t* port;
   vuint8_t* pin;
}IoPort_t;

/*=== Variables (Global) ======================================================*/
/**
 * Configuration for Port A
 */
extern IoPort_t IoPort_A;

/**
 * Configuration for Port B
 */
extern IoPort_t IoPort_B;

/**
 * Configuration for Port C
 */
extern IoPort_t IoPort_C;

/**
 * Configuration for Port D
 */
extern IoPort_t IoPort_D;
/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/


#endif // IO_CFG_CFG_H_INCLUDED
