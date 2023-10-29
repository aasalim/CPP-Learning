#ifndef __DIGITAL_INTPUT_PIN_H__
#define __DIGITAL_INTPUT_PIN_H__
#include "Pin/Pin.h"
#include "Pin/Behaviors/Direction/InputDirection.h"
#include "Pin/Behaviors/Action/ReadAction.h"
/**
 * Digital input pin.
 *
 *
 *
 */
class DigitalInputPin : public Pin {
  InputDirection xInputDirection;
  ReadAction xReadAction;

public:
  DigitalInputPin();
  ~DigitalInputPin();
  Pin& xPinSetup() override;
  Pin& xPinExecute() override;
  Pin& xPinAttachDirection(HardwareInterface *pxDirection) override;
  Pin &xPinAttachAction(HardwareInterface *pxAction) override;
  Pin& xAttachPin(BaseType_t sxPinNumber,Port *pxPort) override;
};

#endif /* __DIGITAL_INTPUT_PIN_H__ */