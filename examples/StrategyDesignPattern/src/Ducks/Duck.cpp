#include "Ducks/Duck.h"

#include <iostream>
Duck::Duck() { std::cout << "Creating a Duck" << std::endl; }
Duck::~Duck() {

  delete flyBehavior;
  flyBehavior = nullptr;
  delete quackBehavior;
  quackBehavior = nullptr;

  std::cout << "Removing Duck" << std::endl;
}
void Duck::draw() { std::cout << "Drawing Duck" << std::endl; }
void Duck::performQuack() { quackBehavior->quack(); }
void Duck::performFly() { flyBehavior->fly(); }
void Duck::setFlyBehavior(FlyBehaviorInterface *flyBehavior) {
  this->flyBehavior = flyBehavior;
}
void Duck::setQuackBehavior(QuackBehaviorInterface *quackBehavior) {
  this->quackBehavior = quackBehavior;
}
