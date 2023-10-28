#ifndef __NO_QUARTER_STATE_H__
#define __NO_QUARTER_STATE_H__
#include "StateInterface.h"
#include "GumballMachine.h"
#include <iostream>
/**
 * No Quarter state.
 *
 */
class NoQuarterState : public StateInterface {
  GumballMachine *pxGumballMachine;

public:
  NoQuarterState(GumballMachine *pxGumballMachine);
  ~NoQuarterState();
  void vInsertQuarter() override;
  void vEjectQuarter() override;
  void vTurnCrank() override;
  void vDispense() override;
  void vToString() override;
};

#endif /* __NO_QUARTER_STATE_H__ */