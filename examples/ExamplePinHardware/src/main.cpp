#include <iostream>
#include <Pin/GPIOPort.h>
#include <Pin/Digital/DigitalInputPin.h>
#include <Pin/Digital/DigitalOutputPin.h>

DigitalInputPin pin1;
/**
 * @brief main application entry point.
 * ! Pin Hardware Domain Analysis
 * Hardware consists of a GPIO Port. A Port has Pin(s). Each pin has different behaviors
 *
 * Port
 *  Pin[N]
 *    Behaviors:
 *      Direction:
 *        Output:
 *          Operation:
 *            Digital: {Set,Clear,Toggle,Read}
 *            Analog: {Read, Write}
 *        Input:
 *          Operation:
 *            Digital: {Read}
 *            Analog:
 *          Resistor: {}
 *
 */
int main(void) {
  std::cout << "Running ExamplePinHardware" << std::endl;
  GPIOPort port1(0x003, 0x324, 0x3434, 0x8585);
 
  port1.xAttachPin(1, &pin1).xPinExecute(1).xPinExecute(1);

  return 0;
}