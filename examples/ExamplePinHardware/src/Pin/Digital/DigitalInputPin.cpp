#include "Pin/Digital/DigitalInputPin.h"
#include "Pin/Behaviors/HardwareInterface.h"
#include "Port.h"
DigitalInputPin::DigitalInputPin()
{
    std::cout << "Create DigitalInputPin" << std::endl;
    
    xPinAttachDirection(&xInputDirection);
    xPinAttachAction(&xReadAction);
}
DigitalInputPin::~DigitalInputPin()
{
    std::cout << "Destroy DigitialInputPin" << std::endl;
}
Pin &DigitalInputPin::xPinSetup()
{
    std::cout << "Setup DigitalInputPin" << std::endl;
    xInputDirection.xHardwareExecute(pxPort->sxGetRegister(DIRECTION_REGISTER), sxPinNumber);
    return *this;
}
Pin& DigitalInputPin::xPinExecute()
{
    std::cout << "Execute DigitalInputPin" << std::endl;
    xReadAction.xHardwareExecute(pxPort->sxGetRegister(INPUT_REGISTER), sxPinNumber);
    return *this;
}

Pin& DigitalInputPin::xPinAttachDirection(HardwareInterface *pxDirection)
{
    std::cout << "Attach Direction to DigitalInputPin" << std::endl;
    if(pxDirection==nullptr){
        this->pxDirection = &xInputDirection;
    }else{
        this->pxDirection = pxDirection;
    }
    return *this;
}
Pin &DigitalInputPin::xPinAttachAction(HardwareInterface *pxAction)
{
    std::cout << "Attach Action to DigitialInputPin" << std::endl;
    if(pxAction==nullptr){
        this->pxAction = &xReadAction;
    }else{
        this->pxAction = pxAction;
    }
    return *this;
}
Pin& DigitalInputPin::xAttachPin(BaseType_t sxPinNumber, Port *pxPort)
{
    this->sxPinNumber = sxPinNumber;
    this->pxPort = pxPort;
    std::cout << "Attach Pin " << sxPinNumber << " as DigitalInputPin" << std::endl;
    return *this;
}