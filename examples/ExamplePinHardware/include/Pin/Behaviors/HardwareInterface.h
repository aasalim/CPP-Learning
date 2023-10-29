#ifndef __HARDWARE_INTERFACE_H__
#define __HARDWARE_INTERFACE_H__
#include "portmacro.h"
#include <iostream>
/**
 * Hardware interface.
 *
 */
class HardwareInterface {
public:
  virtual ~HardwareInterface() = default;
  virtual void xHardwareExecute(BaseType_t const sRegisterAddress, BaseType_t const sPinNumber) = 0;
};

#endif /* __HARDWARE_INTERFACE_H__ */