#include "Pin/Digital/DigitalOutputPin.h"
#include "Pin/Behaviors/HardwareInterface.h"
#include "Port.h"
DigitalOutputPin::DigitalOutputPin()
{
    std::cout << "Create DigitalOutputPin" << std::endl;  
    xPinAttachDirection(&xOutputDirection);
    xPinAttachAction(&xSetAction);  
}
DigitalOutputPin::~DigitalOutputPin()
{
    std::cout << "Destroy DigitalOutputPin" << std::endl;
}
Pin &DigitalOutputPin::xPinSetup()
{
    std::cout << "Setup DigitalOutputPin" << std::endl;
    xOutputDirection.xHardwareExecute(pxPort->sxGetRegister(DIRECTION_REGISTER), sxPinNumber);
    return *this;
}
Pin& DigitalOutputPin::xPinExecute()
{
    std::cout << "Execute DigitalOutputPin" << std::endl;
    xSetAction.xHardwareExecute(pxPort->sxGetRegister(OUTPUT_REGISTER), sxPinNumber);
    return *this;
}

Pin& DigitalOutputPin::xPinAttachDirection(HardwareInterface *pxDirection)
{
    std::cout << "Attach Direction to DigitalOutputPin" << std::endl;
if(pxDirection==nullptr){
        this->pxDirection = &xOutputDirection;
    }else{
        this->pxDirection = pxDirection;
    }
    return *this;
}
Pin &DigitalOutputPin::xPinAttachAction(HardwareInterface *pxAction)
{
    std::cout << "Attach Action to DigitalOutputPin" << std::endl;

    if(pxAction==nullptr){
        this->pxAction = &xSetAction;
    }else{
        this->pxAction = pxAction;
    }
    return *this;
}
Pin& DigitalOutputPin::xAttachPin(BaseType_t sxPinNumber, Port *pxPort)
{
    this->sxPinNumber = sxPinNumber;
    this->pxPort = pxPort;
    std::cout << "Attach Pin " << sxPinNumber << " as DigitalOutputPin" << std::endl;
    return *this;
}