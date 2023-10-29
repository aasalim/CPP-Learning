#ifndef __SET_ACTION_H__
#define __SET_ACTION_H__
#include "Pin/Behaviors/HardwareInterface.h"
/**
 * Set action.
 *
 */
class SetAction : public HardwareInterface {
public:
  SetAction();
  ~SetAction();
  void xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber) override;
};

#endif /* __SET_ACTION_H__ */