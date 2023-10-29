#include "Pin/Behaviors/Action/ReadAction.h"

ReadAction::ReadAction()
{
    std::cout << "Create ReadAction" << std::endl;
}

ReadAction::~ReadAction()
{
    std::cout << "Destroy ReadAction" << std::endl;
}

void ReadAction::xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber)
{
    std::cout << "Execute ReadAction on "<<sRegisterAddress << std::endl;
}
