#include "Behaviors/Fly/FlyWithRockets.h"
#include <iostream>

FlyWithRockets::FlyWithRockets() {
  std::cout << "Attaching FlyWithRockets" << std::endl;
}
FlyWithRockets::~FlyWithRockets() {
  std::cout << "Removing FlyWithRockets" << std::endl;
}
void FlyWithRockets::fly() {
  std::cout << "I'm flying with a rocket" << std::endl;
}