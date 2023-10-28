#include "NoQuarterState.h"

#include <iostream>

NoQuarterState::NoQuarterState(GumballMachine *pxGumballMachine)
{
    std::cout << "Attaching No Quarter State" << std::endl;
    this->pxGumballMachine = pxGumballMachine;
}

NoQuarterState::~NoQuarterState()
{
    std::cout << "Detaching No Quarter State" << std::endl;
}

void NoQuarterState::vInsertQuarter()
{
    std::cout << "You inserted a quarter" << std::endl;
    pxGumballMachine->vSetState(pxGumballMachine->pxGetHasQuarterState());
}

void NoQuarterState::vEjectQuarter()
{
    std::cout << "You haven't inserted a quarter" << std::endl;
}

void NoQuarterState::vTurnCrank()
{
    std::cout << "You turned, but there's no quarter" << std::endl;
}

void NoQuarterState::vDispense()
{
     std::cout << "You need to pay first" << std::endl;
}
void NoQuarterState::vToString() {
    std::cout << "NoQuarterState" << std::endl;
}