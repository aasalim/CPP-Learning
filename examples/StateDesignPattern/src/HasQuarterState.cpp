#include "HasQuarterState.h"

#include <iostream>

HasQuarterState::HasQuarterState(GumballMachine *pxGumballMachine)
{
    std::cout << "Attaching Has Quarter State" << std::endl;
    this->pxGumballMachine = pxGumballMachine;
}

HasQuarterState::~HasQuarterState()
{
    std::cout << "Detaching Has Quarter State" << std::endl;
}

void HasQuarterState::vInsertQuarter()
{
    std::cout << "You can't insert another quarter" << std::endl;
}

void HasQuarterState::vEjectQuarter()
{
    std::cout << "Quarter Returned" << std::endl;
    pxGumballMachine->vSetState(pxGumballMachine->pxGetNoQuarterState());
}

void HasQuarterState::vTurnCrank()
{
    std::cout << "You turned..." << std::endl;
    pxGumballMachine->vSetState(pxGumballMachine->pxGetSoldState());
}

void HasQuarterState::vDispense()
{
    std::cout << "No gumball dispensed" << std::endl;
}
void HasQuarterState::vToString() {
    std::cout << "HasQuarterState" << std::endl;
}