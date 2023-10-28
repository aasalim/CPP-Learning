#ifndef __SOLD_STATE_H__
#define __SOLD_STATE_H__
#include "StateInterface.h"
#include "GumballMachine.h"
#include <iostream>
/**
 * Sold state.
 *
 */
class SoldState : public StateInterface {
  GumballMachine *pxGumballMachine;

public:
  SoldState(GumballMachine *pxGumballMachine);
  ~SoldState();
  void vInsertQuarter() override;
  void vEjectQuarter() override;
  void vTurnCrank() override;
  void vDispense() override;
  void vToString() override;
};

#endif /* __SOLD_STATE_H__ */