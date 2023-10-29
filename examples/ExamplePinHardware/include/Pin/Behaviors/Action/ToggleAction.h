#ifndef __TOGGLE_ACTION_H__
#define __TOGGLE_ACTION_H__
#include "Pin/Behaviors/HardwareInterface.h"
/**
 * Toggle action.
 *
 */
class ToggleAction : public HardwareInterface {
public:
  ToggleAction();
  ~ToggleAction();
  void xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber) override;
};

#endif /* __TOGGLE_ACTION_H__ */