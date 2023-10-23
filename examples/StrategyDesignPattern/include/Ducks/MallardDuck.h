#ifndef __MALLARD_DUCK_H__
#define __MALLARD_DUCK_H__
#include "Ducks/Duck.h"
/**
 * Mallard duck.
 *
 *
 *
 */
class MallardDuck : public Duck {
public:
  MallardDuck();
  ~MallardDuck();
  void draw() override;
};

#endif /* __MALLARD_DUCK_H__ */