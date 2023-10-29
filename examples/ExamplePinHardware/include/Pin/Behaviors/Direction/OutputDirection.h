#ifndef __OUTPUT_DIRECTION_H__
#define __OUTPUT_DIRECTION_H__
#include "Pin/Behaviors/HardwareInterface.h"
/**
 * Output direction.
 *
 */
class OutputDirection : public HardwareInterface {
public:
  OutputDirection();
  ~OutputDirection();
  void xHardwareExecute(BaseType_t const sDirectionRegisterAddress, BaseType_t const sPinNumber) override;
};

#endif /* __OUTPUT_DIRECTION_H__ */