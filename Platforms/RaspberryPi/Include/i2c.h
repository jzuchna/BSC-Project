/****************************************************************************
 *
 * Bioreactor Sample Collector
 * Written by Jakob Zuchna
 *
 ****************************************************************************
 * FILE: i2c.h
 *
 *   DESCRIPTION:
 *
 *
 *   PUBLIC FUNCTIONS: UARTInit(); UARTTransmit(); UARTReceive();
 *
 * PUBLIC FUNCTIONS:
 *   newI2C
 *   I2CReadBytes
 *   I2CWriteBytes
 ****************************************************************************/

#ifndef I2C_H
#define I2C_H



/****************************************************************************
* SECTION: #include
****************************************************************************/
#include "HtlStdDef.h"
/****************************************************************************
* SECTION: #define
****************************************************************************/

/****************************************************************************
* SECTION: typedef
****************************************************************************/
typedef struct I2C {
	int file;
}TI2C;


#ifdef __cplusplus
  extern "C" {
#endif



/****************************************************************************
 * FUNCTION: newI2C
 ****************************************************************************/

PUBLIC TBoolean
newI2C (
  unsigned char aAddr );


/****************************************************************************
 * FUNCTION: I2CReadBytes
 ****************************************************************************/

PUBLIC TBoolean
I2CReadBytes (
  TI2C *          aI2C,
  unsigned char * aBuffer,
  int             aLength );


/****************************************************************************
 * FUNCTION: I2CWriteBytes
 ****************************************************************************/

PUBLIC TBoolean
I2CWriteBytes (
  TI2C *          aI2C,
  unsigned char * aBuffer,
  int             aLength );



#ifdef __cplusplus
  }
#endif

#endif /* I2C_H */

/* This Headerfile was generated with C2H.exe ( C2H ) */
/* (c) 2006 by TARA Systems GmbH Munich */