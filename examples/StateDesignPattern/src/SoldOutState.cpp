#include "SoldOutState.h"

#include <iostream>

SoldOutState::SoldOutState(GumballMachine *pxGumballMachine)
{
    std::cout << "Attaching Sold Out State" << std::endl;
    this->pxGumballMachine = pxGumballMachine;
}

SoldOutState::~SoldOutState()
{
    std::cout << "Detaching Sold Out State" << std::endl;
}

void SoldOutState::vInsertQuarter()
{
    std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
}

void SoldOutState::vEjectQuarter()
{
    std::cout << "You can't eject, you haven't inserted a quarter yet" << std::endl;
}

void SoldOutState::vTurnCrank()
{
    std::cout << "You turned, but there are no gumballs" << std::endl;
}

void SoldOutState::vDispense()
{
    std::cout << "No gumball dispensed" << std::endl;
}
void SoldOutState::vToString() {
    std::cout << "SoldOutState" << std::endl;
}