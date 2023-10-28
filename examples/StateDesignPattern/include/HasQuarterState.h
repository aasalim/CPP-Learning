#ifndef __HAS_QUARTER_STATE_H__
#define __HAS_QUARTER_STATE_H__
#include "StateInterface.h"
#include "GumballMachine.h"
#include <iostream>
/**
 * Has Quarter state.
 *
 */
class HasQuarterState : public StateInterface {
  GumballMachine *pxGumballMachine;

public:
  HasQuarterState(GumballMachine *pxGumballMachine);
  ~HasQuarterState();
  void vInsertQuarter() override;
  void vEjectQuarter() override;
  void vTurnCrank() override;
  void vDispense() override;
  void vToString() override;
};

#endif /* __HAS_QUARTER_STATE_H__ */