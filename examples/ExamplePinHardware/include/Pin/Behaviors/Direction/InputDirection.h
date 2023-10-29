#ifndef __INPUT_DIRECTION_H__
#define __INPUT_DIRECTION_H__
#include "Pin/Behaviors/HardwareInterface.h"
/**
 * Input direction.
 *
 */
class InputDirection : public HardwareInterface {
public:
  InputDirection();
  ~InputDirection();
  void xHardwareExecute(BaseType_t const sDirectionRegisterAddress, BaseType_t const sPinNumber) override;
};

#endif /* __INPUT_DIRECTION_H__ */