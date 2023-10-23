#ifndef __SQUEAK_H__
#define __SQUEAK_H__
#include "QuackBehaviorInterface.h"
/**
 * Squeak.
 *
 */
class Squeak : public QuackBehaviorInterface {
public:
  Squeak();
  ~Squeak();
  void quack() override;
};

#endif /* __SQUEAK_H__ */