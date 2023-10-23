#ifndef __QUACK_H__
#define __QUACK_H__
#include "QuackBehaviorInterface.h"
/**
 * Quack.
 *
 */
class Quack : public QuackBehaviorInterface {
public:
  Quack();
  ~Quack();
  void quack() override;
};

#endif /* __QUACK_H__ */