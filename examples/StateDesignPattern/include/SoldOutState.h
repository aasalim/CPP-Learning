#ifndef __SOLD_OUT_STATE_H__
#define __SOLD_OUT_STATE_H__
#include "StateInterface.h"
#include "GumballMachine.h"
#include <iostream>
/**
 * Sold Out state.
 *
 */
class SoldOutState : public StateInterface {
  GumballMachine *pxGumballMachine;

public:
  SoldOutState(GumballMachine *pxGumballMachine);
  ~SoldOutState();
  void vInsertQuarter() override;
  void vEjectQuarter() override;
  void vTurnCrank() override;
  void vDispense() override;
  void vToString() override;
};

#endif /* __SOLD_OUT_STATE_H__ */