#ifndef __CLEAR_ACTION_H__
#define __CLEAR_ACTION_H__
#include "Pin/Behaviors/HardwareInterface.h"
/**
 * Clear action.
 *
 */
class ClearAction : public HardwareInterface {
public:
  ClearAction();
  ~ClearAction();
  void xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber) override;
};

#endif /* __CLEAR_ACTION_H__ */