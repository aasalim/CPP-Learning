#include "Pin/Behaviors/Action/ClearAction.h"

ClearAction::ClearAction()
{
    std::cout << "Create ClearAction" << std::endl;
}

ClearAction::~ClearAction()
{
    std::cout << "Destroy ClearAction" << std::endl;
}

void ClearAction::xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber)
{
    std::cout << "Execute Clear Action" << std::endl;
}
