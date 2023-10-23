#ifndef __RUBBER_DUCK_H__
#define __RUBBER_DUCK_H__
#include "Ducks/Duck.h"
/**
 * Rubber duck.
 *
 *
 *
 */
class RubberDuck : public Duck {
public:
  RubberDuck();
  ~RubberDuck();
  void draw() override;
};

#endif /* __RUBBER_DUCK_H__ */