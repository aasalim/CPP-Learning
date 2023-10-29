#ifndef __PORT_MACRO_H__
#define __PORT_MACRO_H__
/*-----------------------------------------------------------
 * Port specific definitions.
 *
 * The settings in this file configure correctly for the
 * given hardware and compiler.
 *
 * These settings should not be altered.
 *-----------------------------------------------------------
 */

/* Type definitions. */
#include <stdint.h>
#define portCHAR          char
#define portFLOAT         float
#define portDOUBLE        double
#define portLONG          long
#define portSHORT         int
#define portSTACK_TYPE    uint16_t
#define portBASE_TYPE     short

typedef portSTACK_TYPE   StackType_t;
typedef short            BaseType_t;
typedef unsigned short   UBaseType_t;

#define HWREG32(x)                                                              \
    (*((volatile uint32_t *)((uint16_t)x)))
#define HWREG16(x)                                                             \
    (*((volatile uint16_t *)((uint16_t)x)))
#define HWREG8(x)                                                             \
    (*((volatile uint8_t *)((uint16_t)x)))

#endif /* __PORT_MACRO_H__ */