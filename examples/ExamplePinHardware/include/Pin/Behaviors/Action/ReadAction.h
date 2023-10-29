#ifndef __READ_ACTION_H__
#define __READ_ACTION_H__
#include "Pin/Behaviors/HardwareInterface.h"
/**
 * Clear action.
 *
 */
class ReadAction : public HardwareInterface {
public:
  ReadAction();
  ~ReadAction();
  void xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber) override;
};

#endif /* __READ_ACTION_H__ */