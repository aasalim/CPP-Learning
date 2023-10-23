#ifndef __DUCK_H__
#define __DUCK_H__
#include "Behaviors/Fly/FlyBehaviorInterface.h"
#include "Behaviors/Quack/QuackBehaviorInterface.h"
/**
 * Duck.
 *
 *
 *
 */
class Duck {
  FlyBehaviorInterface *flyBehavior;
  QuackBehaviorInterface *quackBehavior;

public:
  Duck();
  ~Duck();
  virtual void draw();
  void performQuack();
  void performFly();
  void setFlyBehavior(FlyBehaviorInterface *flyBehavior);
  void setQuackBehavior(QuackBehaviorInterface *quackBehavior);
};

#endif /* __DUCK_H__ */