#include "GumballMachine.h"
#include "SoldState.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"

#include <iostream>

GumballMachine::GumballMachine(int lNumberOfGumballs)
{
    std::cout << "Creating Gumball Machine" << std::endl;
    this->pxSoldState = new SoldState(this);
    this->pxHasQuarterState = new HasQuarterState(this);
    this->pxNoQuarterState = new NoQuarterState(this);
    this->pxSoldOutState = new SoldOutState(this);

    this->pxCurrentState = pxSoldOutState;
    this->lCount = lNumberOfGumballs;
    std::cout << "Inventory: "<<lNumberOfGumballs<< " gumballs" << std::endl;
    if(lNumberOfGumballs>0){
        pxCurrentState = pxNoQuarterState;
        std::cout << "Machine is waiting for quarter" << std::endl;
    }
    else
    {
        std::cout << "Machine is sold out" << std::endl;
    }
}

GumballMachine::~GumballMachine()
{
    std::cout << "Removing Gumball Machine" << std::endl;
}

void GumballMachine::vInsertQuarter()
{
    pxCurrentState->vInsertQuarter();
}

void GumballMachine::vEjectQuarter()
{
    pxCurrentState->vEjectQuarter();
}

void GumballMachine::vTurnCrank()
{
    pxCurrentState->vTurnCrank();
    pxCurrentState->vDispense();
}

void GumballMachine::vSetState(StateInterface *pxState)
{
    this->pxCurrentState = pxState;
}

void GumballMachine::vReleaseBall()
{
    std::cout << "A gumball comes rolling out the slot..." << std::endl;
    if(lCount!=0){
        --lCount;
    }
}

void GumballMachine::vToString()
{
    pxCurrentState->vToString();
}

int GumballMachine::lGetCount(){
    return lCount;
}

StateInterface *GumballMachine::pxGetSoldState()
{
    return pxSoldState;
}

StateInterface *GumballMachine::pxGetHasQuarterState()
{
    return pxHasQuarterState;
}

StateInterface *GumballMachine::pxGetNoQuarterState()
{
    return pxNoQuarterState;
}

StateInterface *GumballMachine::pxGetSoldOutState()
{
    return pxSoldOutState;
}
