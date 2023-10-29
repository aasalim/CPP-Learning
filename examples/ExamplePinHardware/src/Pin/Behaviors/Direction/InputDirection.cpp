#include "Pin/Behaviors/Direction/InputDirection.h"

InputDirection::InputDirection()
{
    std::cout << "Create InputDirection" << std::endl;
}

InputDirection::~InputDirection()
{
    std::cout << "Destroy InputDirection" << std::endl;
}

void InputDirection::xHardwareExecute(BaseType_t const sDirectionRegisterAddress, BaseType_t const sPinNumber)
{
    std::cout << "Execute InputDirection" << std::endl;
}
