#ifndef __FLY_NO_WAY_H__
#define __FLY_NO_WAY_H__
#include "FlyBehaviorInterface.h"
/**
 * Fly no way.
 *
 */
class FlyNoWay : public FlyBehaviorInterface {
public:
  FlyNoWay();
  ~FlyNoWay();
  void fly() override;
};

#endif /* __FLY_NO_WAY_H__ */