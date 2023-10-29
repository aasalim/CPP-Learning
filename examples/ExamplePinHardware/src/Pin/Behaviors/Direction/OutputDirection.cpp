#include "Pin/Behaviors/Direction/OutputDirection.h"

OutputDirection::OutputDirection()
{
    std::cout << "Create OutputDirection" << std::endl;
}

OutputDirection::~OutputDirection()
{
    std::cout << "Destroy OutputDirection" << std::endl;
}

void OutputDirection::xHardwareExecute(BaseType_t const sDirectionRegisterAddress, BaseType_t const sPinNumber)
{
    std::cout << "Execute OutputDirection" << std::endl;
}
