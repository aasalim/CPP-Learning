#include "Pin/GPIOPort.h"

GPIOPort::GPIOPort(BaseType_t sBaseAddress,BaseType_t sOutputRegisterAddress,BaseType_t sInputRegisterAddress,BaseType_t sDirectionRegisterAddress)
{
    this->sBaseAddress = sBaseAddress;
    this->sOutputRegisterAddress = sOutputRegisterAddress;
    this->sInputRegisterAddress = sInputRegisterAddress;
    this->sDirectionRegisterAddress = sDirectionRegisterAddress;
}

GPIOPort::~GPIOPort()
{
}

GPIOPort &GPIOPort::xPortSetup()
{
    
    return *this;
}

Port& GPIOPort::xAttachPin(BaseType_t sPinNumber, Pin *xPin)
{
    xPin->xAttachPin(sPinNumber,this);
    xPins[sPinNumber] = xPin;
    return *this;
}

Port &GPIOPort::xPinExecute(BaseType_t sPinNumber)
{
    xPins[sPinNumber]->xPinExecute();
    return *this;
}
BaseType_t GPIOPort::sxGetRegister(BaseType_t sxRegisterNumber)
{
    switch (sxRegisterNumber)
    {
    case BASE_REGISTER:
        return sOutputRegisterAddress;
        break;
    case DIRECTION_REGISTER:
        return sDirectionRegisterAddress;
        break;
    case INPUT_REGISTER:
        return sInputRegisterAddress;
        break;
    case OUTPUT_REGISTER:
        return sOutputRegisterAddress;
        break;
    }
    return 0;
}
