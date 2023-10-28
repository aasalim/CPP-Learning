#ifndef __GUMBALL_MACHINE_H__
#define __GUMBALL_MACHINE_H__
#include "StateInterface.h"
/**
 * Sold state.
 *
 */
class GumballMachine  {
    /* States */
    StateInterface *pxSoldState;
    StateInterface *pxHasQuarterState;
    StateInterface *pxNoQuarterState;
    StateInterface *pxSoldOutState;

    StateInterface *pxCurrentState;
    int lCount;

public:
    GumballMachine(int lNumberOfGumballs);
    ~GumballMachine();

    /* Actions */
    void vInsertQuarter();
    void vEjectQuarter();
    void vTurnCrank();
    void vReleaseBall();
    void vToString();

    /* Setter Functions */
    void vSetState(StateInterface *pxState);

    /* Getter Functions */
    int lGetCount();
    StateInterface *pxGetSoldState();
    StateInterface *pxGetHasQuarterState();
    StateInterface *pxGetNoQuarterState();
    StateInterface *pxGetSoldOutState();
};

#endif /* __GUMBALL_MACHINE_H__ */