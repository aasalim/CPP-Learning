#include "GumballMachine.h"
#include <iostream>
#include <memory>

#include <iostream>

/**
 * @brief main application entry point.
 *
 */
int main(void) {
  GumballMachine xGumballMachine(5);
  xGumballMachine.vInsertQuarter();
  xGumballMachine.vTurnCrank();

  xGumballMachine.vToString();
  std::cout << std::endl;

  xGumballMachine.vInsertQuarter();
  xGumballMachine.vEjectQuarter();
  xGumballMachine.vTurnCrank();

  xGumballMachine.vToString();
  std::cout << std::endl;

  xGumballMachine.vInsertQuarter();
  xGumballMachine.vTurnCrank();
  xGumballMachine.vInsertQuarter();
  xGumballMachine.vTurnCrank();
  xGumballMachine.vEjectQuarter();
  
  xGumballMachine.vToString();
  std::cout << std::endl;

  xGumballMachine.vInsertQuarter();
  xGumballMachine.vInsertQuarter();
  xGumballMachine.vTurnCrank();
  xGumballMachine.vInsertQuarter();
  xGumballMachine.vTurnCrank();
  xGumballMachine.vInsertQuarter();
  xGumballMachine.vTurnCrank();
  
  xGumballMachine.vToString();
  std::cout << std::endl;

  return 0;
}