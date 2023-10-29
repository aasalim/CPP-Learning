#ifndef __GPIO_GPIOPort_H__
#define __GPIO_GPIOPort_H__
#include "portmacro.h"
#include "Port.h"
#include "Pin/Pin.h"

/**
 * GPIOPort.
 *
 *
 *
 */
class GPIOPort: public Port {
    BaseType_t sBaseAddress;
    BaseType_t sOutputRegisterAddress;
    BaseType_t sInputRegisterAddress;
    BaseType_t sDirectionRegisterAddress;
    
    Pin *xPins[8];

public:
    GPIOPort(BaseType_t sBaseAddress,BaseType_t sOutputRegisterAddress,BaseType_t sInputRegisterAddress,BaseType_t sDirectionRegisterAddress);
    ~GPIOPort();
    GPIOPort &xPortSetup() override;
    Port &xAttachPin(BaseType_t sPinNumber, Pin *xPin) override;
    Port &xPinExecute(BaseType_t sPinNumber) override;
    BaseType_t sxGetRegister(BaseType_t sxRegisterNumber) override;
};

#endif /* __GPIO_GPIOPort_H__ */