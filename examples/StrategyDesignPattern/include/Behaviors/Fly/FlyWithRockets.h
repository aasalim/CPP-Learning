#ifndef __FLY_WITH_ROCKETS_H__
#define __FLY_WITH_ROCKETS_H__
#include "FlyBehaviorInterface.h"
/**
 * Fly with rockets.
 *
 */
class FlyWithRockets : public FlyBehaviorInterface {
public:
  FlyWithRockets();
  ~FlyWithRockets();
  void fly() override;
};

#endif /* __FLY_WITH_ROCKETS_H__ */