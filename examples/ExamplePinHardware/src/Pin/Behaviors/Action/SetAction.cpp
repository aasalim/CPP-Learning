#include "Pin/Behaviors/Action/SetAction.h"

SetAction::SetAction()
{
    std::cout << "Create SetAction" << std::endl;
}

SetAction::~SetAction()
{
    std::cout << "Destroy SetAction" << std::endl;
}

void SetAction::xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber)
{
    std::cout << "Execute SetAction" << std::endl;
}
