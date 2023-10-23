#include "Ducks/MallardDuck.h"
#include "Behaviors/Fly/FlyWithWings.h"
#include "Behaviors/Quack/Quack.h"

#include <iostream>
MallardDuck::MallardDuck() {
  std::cout << "Creating MallardDuck" << std::endl;
  setFlyBehavior(new FlyWithWings());
  setQuackBehavior(new Quack());
}
MallardDuck::~MallardDuck() {
  std::cout << "Removing MallardDuck" << std::endl;
}
void MallardDuck::draw() { std::cout << "Drawing MallardDuck" << std::endl; }