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
 *	         Filename......: [ Std_Types.h  ]                                   *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

#ifndef STD_TYPES_H_INCLUDED
#define STD_TYPES_H_INCLUDED

/*=== Includes ================================================================*/
#include <avr/io.h>
#include <stdint.h>

/*=== Version Check ===========================================================*/

/*=== Datatypes ===============================================================*/

/**
 * Definition of a Null Pointer
 */
#define NULL (0u)

/**
 * Definition of a boolean true value
 */
#define TRUE  ((uint8_t)1)

/**
 * Definiton of a boolean false value
 */
#define FALSE ((uint8_t)0)
/*=== Variables (Global) ======================================================*/

/**
 * Type definition of a boolean data type
 */
typedef uint8_t boolean;

/**
 * Standard return type definition which can be used as return value for each
 * function
 */
typedef uint8_t Std_ReturnType;

/**
 * Type definition for a volatile unsigned 8Bit type
 */
typedef volatile uint8_t vuint8_t;

/**
 * Type definition for a volatile unsigned 16Bit type
 */
typedef volatile uint16_t vuint16_t;
/*----------------------------------------------------------------------------*/

/**
 * Return value for NOT OK
 */
#define E_NOK                 0x00

/**
 * Return value for OK
 */
#define E_OK                  0x01

/**
 * Return value for NULL_PTR
 */
#define E_NULL_PTR            0x02


/**
 * Return value for Wrong IO Direction
 */
#define E_W_IO_DIR            0x03
/*--- SETTER MACROS --------------------------------------------------------*/
#define SET_BIT(reg_b,bit_b)			        \
	(reg_b |= (1 << bit_b))

#define SET_BITS_BY_MASK(reg_b,bitmask_b)		\
(reg_b |= bitmask_b)

#define SET_BITS(reg_b, val_b, rCnt_b)          \
    (reg_b |= (1 << bit_b))

/*--- RESETTER MACROS ------------------------------------------------------*/

#define RESET_BIT(reg_b,bit_b)			\
	(reg_b &= ~(1 << bit_b))

#define RESET_BITS_BY_MASK(reg_b,bitmask_b)		\
	(reg_b &= ~bitmask_b)

/*--- GETTER MACROS --------------------------------------------------------*/

#define GET_BIT_STATUS(reg_b,bit_b)				\
	(reg_b & (1 << bit_b))

#define GET_BITS_BY_MASK(reg_b, bitmask_b)		\
	(reg_b & bitmask_b)

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/

class Object
{
/*=== Enumerates  =============================================================*/
         public:  //Enumerates

         private:

         protected:

/*=== Enumerates  =============================================================*/
         public:   //Parameter

            enum Bit_t
            {
               BIT_0 = 0x00u,
               BIT_1,
               BIT_2,
               BIT_3,
               BIT_4,
               BIT_5,
               BIT_7,
               BIT_8,
               BIT_9,
               BIT_10,
               BIT_11,
               BIT_12,
               BIT_13,
               BIT_14,
               BIT_15,
            };

            enum Pin_t
            {
               PIN_NOT_DEEF   = -1,
               PIN_0          =  0,
               PIN_1          =  1,
               PIN_2          =  2,
               PIN_3          =  3,
               PIN_4          =  4,
               PIN_5          =  5,
               PIN_6          =  6,
               PIN_7          =  7,
            };

            enum Level_t
            {
               LOW        =   0x00,
               HIGH       =   0x01,
               ERROR      =   0x02,
            };
         protected:   //Parameter

         private:   //Parameter

/*=== Functions ===============================================================*/
         public:   //Functions
            Object()  {};
            ~Object() {};

         protected:   //Functions

         private:  //Functions
            Object(const Object &c);
            Object& operator=(const Object &c);
};

#endif // STD_TYPES_H_INCLUDED
