#include "Behaviors/Fly/FlyNoWay.h"
#include "Behaviors/Fly/FlyWithRockets.h"
#include "Behaviors/Quack/Quack.h"

#include "Ducks/MallardDuck.h"
#include "Ducks/RubberDuck.h"
#include <iostream>
#include <memory>

/**
 * @brief main application entry point.
 *
 * Design Principles:
 *    1) Identify the aspects of your application that vary and separate them
 *       from what stays the same. Encapsulate what varies.
 *
 *   2)  Program to an interface(Program to a supertype), not to an
 *       implementation.
 *
 *   3) Favor composition over inheritance, allows you to change behavior
 *      at runtime.
 *
 * The Strategy Pattern defines a family of algorithms, encapsulates each one,
 * and makes them interchangeable. Strategy lets the algorithm vary
 * independently from clients that use it.
 */
int main(void) {
  {
    std::unique_ptr<Duck> duck(new MallardDuck());
    duck->draw();
    duck->performFly();
    duck->performQuack();
  }

  std::cout << " " << std::endl;
  Duck *modelDuck = new Duck();
  modelDuck->setFlyBehavior(new FlyNoWay());
  modelDuck->setQuackBehavior(new Quack());
  modelDuck->draw();
  modelDuck->performFly();
  modelDuck->performQuack();
  delete modelDuck;

  std::cout << " " << std::endl;
  {
    std::unique_ptr<Duck> duck(new RubberDuck());
    duck->draw();
    duck->performFly();
    duck->performQuack();
  }

  std::cout << " " << std::endl;
  {
    std::unique_ptr<Duck> duck(new RubberDuck());
    duck->setFlyBehavior(new FlyWithRockets());
    duck->draw();
    duck->performFly();
    duck->performQuack();
  }

  return 0;
}