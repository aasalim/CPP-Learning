#include "Behaviors/Fly/FlyNoWay.h"
#include <iostream>

FlyNoWay::FlyNoWay() { std::cout << "Attaching FlyNoWay" << std::endl; }
FlyNoWay::~FlyNoWay() { std::cout << "Removing FlyNoWay" << std::endl; }
void FlyNoWay::fly() { std::cout << "I can't fly" << std::endl; }