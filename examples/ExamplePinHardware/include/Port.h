#ifndef __PORT_H__
#define __PORT_H__
#include "portmacro.h"
#include "Pin/Pin.h"

#define BASE_REGISTER 0
#define DIRECTION_REGISTER 1
#define INPUT_REGISTER 2
#define OUTPUT_REGISTER 3

/**
 * Port.
 *
 *
 *
 */
class Port {
public:
    virtual ~Port()=default;
    virtual Port &xPortSetup() = 0;
    virtual Port &xAttachPin(BaseType_t sPinNumber, Pin *xPin) = 0;
    virtual Port &xPinExecute(BaseType_t sPinNumber) = 0;
    virtual BaseType_t sxGetRegister(BaseType_t sxRegisterNumber) = 0;
};

#endif /* __PORT_H__ */