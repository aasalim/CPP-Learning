#ifndef __PIN_H__
#define __PIN_H__
#include "portmacro.h"
#include "Pin/Behaviors/HardwareInterface.h"

class Port;
/**
 * Pin Interface.
 *
 *
 *
 */
class Pin {
protected:
    HardwareInterface *pxDirection;    
    HardwareInterface *pxAction;
    Port *pxPort;
    BaseType_t sxPinNumber;

public:
    Pin();
    virtual ~Pin() = default;
    virtual Pin &xPinSetup() = 0;
    virtual Pin &xPinExecute() = 0;
    virtual Pin &xPinAttachDirection(HardwareInterface *pxDirection) = 0;
    virtual Pin &xPinAttachAction(HardwareInterface *pxAction) = 0;
    virtual Pin &xAttachPin(BaseType_t sxPinNumber, Port *pxPort) = 0;
};

#endif /* __PIN_H__ */