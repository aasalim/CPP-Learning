#include <Pin/Behaviors/Action/ToggleAction.h>
ToggleAction::ToggleAction(){
    std::cout << "Create ToggleAction" << std::endl;
}
ToggleAction::~ToggleAction(){
    std::cout << "Destroy ToggleAction" << std::endl;
}
void ToggleAction::xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber){
    std::cout << "Execute ToggleAction" << std::endl;
}