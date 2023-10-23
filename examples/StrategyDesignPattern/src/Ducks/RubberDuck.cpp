#include "Ducks/RubberDuck.h"
#include "Behaviors/Fly/FlyNoWay.h"
#include "Behaviors/Quack/Squeak.h"

#include <iostream>
RubberDuck::RubberDuck() {
  std::cout << "Creating RubberDuck" << std::endl;
  setFlyBehavior(new FlyNoWay());
  setQuackBehavior(new Squeak());
}
RubberDuck::~RubberDuck() { std::cout << "Removing RubberDuck" << std::endl; }
void RubberDuck::draw() { std::cout << "Drawing RubberDuck" << std::endl; }