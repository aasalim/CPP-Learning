#ifndef __DIGITAL_OUTPUT_PIN_H__
#define __DIGITAL_OUTPUT_PIN_H__
#include "Pin/Pin.h"
#include "Pin/Behaviors/Direction/OutputDirection.h"
#include "Pin/Behaviors/Action/SetAction.h"

/**
 * Digital output pin.
 *
 *
 *
 */
class DigitalOutputPin : public Pin {
  OutputDirection xOutputDirection;
  SetAction xSetAction;
public:
  DigitalOutputPin();
  ~DigitalOutputPin();
  Pin& xPinSetup() override;
  Pin& xPinExecute() override;
  Pin& xPinAttachDirection(HardwareInterface *pxDirection) override;
  Pin &xPinAttachAction(HardwareInterface *pxAction) override;
  Pin& xAttachPin(BaseType_t sxPinNumber,Port *pxPort) override;
};

#endif /* __DIGITAL_OUTPUT_PIN_H__ */