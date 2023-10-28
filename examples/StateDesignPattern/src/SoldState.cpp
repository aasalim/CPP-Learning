#include "SoldState.h"

#include <iostream>

SoldState::SoldState(GumballMachine *pxGumballMachine)
{
    std::cout << "Attaching Sold State" << std::endl;
    this->pxGumballMachine = pxGumballMachine;
}

SoldState::~SoldState()
{
    std::cout << "Detaching Sold State" << std::endl;
}

void SoldState::vInsertQuarter()
{
    std::cout << "Please wait, we're already giving you a gumball" << std::endl;
}

void SoldState::vEjectQuarter()
{
    std::cout << "Sorry, you already turned the crank" << std::endl;
}

void SoldState::vTurnCrank()
{
    std::cout << "Turning twice doesn't get you another gumball!" << std::endl;
}

void SoldState::vDispense()
{
    pxGumballMachine->vReleaseBall();
    if(pxGumballMachine->lGetCount()>0){
        pxGumballMachine->vSetState(pxGumballMachine->pxGetNoQuarterState());
    }
    else
    {
        std::cout << "Oops, out of gumballs!" << std::endl;
        pxGumballMachine->vSetState(pxGumballMachine->pxGetSoldOutState());
    }
}
void SoldState::vToString() {
    std::cout << "SoldState" << std::endl;
}
