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
 *          Filename......: [ AvrDefs.c  ]                                    *
 *          Date..........: [ DATE        ]                                    *
 *          Version.......: [ VERSION     ]                                    *
 *                                                                             *
 *          Description...: [ DESCRIPTION ]                                    *
 *                                                                             *
 *                                                                             *
 *******************************************************************************/

 
 
/*=== Includes ================================================================*/
#include "AvrDefs.h"
extern "C" {
#include "stdlib.h"
/*=== Version Check ===========================================================*/
/**
 * Major version of the AvrDefs module
 */
#define AVRDEFS_MAJOR_VERSION_C    					0u
/**
 * Minor version of the AvrDefs module
 */
#define AVRDEFS_MINOR_VERSION_C					1u
 /**
  * Patch version of the AvrDefs module
  */
#define AVRDEFS_PATCH_VERSION_C					0u



/*=== Local Defines ===========================================================*/

/*=== Local Constants =========================================================*/

/*=== Local Data Types ========================================================*/

/*=== Variables (Global) ======================================================*/

/*=== Variables (Local) =======================================================*/

/*=== Function Declaration ====================================================*/

/*=== Functions ===============================================================*/
/*!
 * \brief Pure-virtual workaround.
 *
 * The avr-libc does not support a default implementation for handling
 * possible pure-virtual calls. This is a short and empty workaround for this.
 */
  void __cxa_pure_virtual()
  {
    // put error handling here
  }

/*!
 * \brief New Operator workaround
 *
 * The avr-libc does not support a default implementation for the new operator
 * This implementation is a workaround.
 */
  void *operator new(size_t size)
  {
    return malloc(size);
  }

  /*!
   * \brief New Operator workaround
   *
   * The avr-libc does not support a default implementation for the new operator
   * This implementation is a workaround.
   */
  void *operator new[](size_t size)
  {
    return malloc(size);
  }
  /*!
   * \brief Delete Operator workaround
   *
   * The avr-libc does not support a default implementation for the new operator
   * This implementation is a workaround.
   */
  void operator delete(void* ptr)
  {
    free(ptr);
  }

  /*!
   * \brief Delete Operator workaround
   *
   * The avr-libc does not support a default implementation for the new operator
   * This implementation is a workaround.
   */
  void operator delete[](void* ptr)
  {
    free(ptr);
  }
}
