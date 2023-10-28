#include "Behaviors/Fly/FlyWithWings.h"
#include <iostream>

FlyWithWings::FlyWithWings() {
  std::cout << "Attaching FlyWithWings" << std::endl;
}
FlyWithWings::~FlyWithWings() {
  std::cout << "Removing FlyWithWings" << std::endl;
}
void FlyWithWings::fly() { std::cout << "I'm flying" << std::endl; }