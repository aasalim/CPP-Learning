#ifndef __FLY_WITH_WINGS_H__
#define __FLY_WITH_WINGS_H__
#include "FlyBehaviorInterface.h"
/**
 * Fly with wings.
 *
 */
class FlyWithWings : public FlyBehaviorInterface {
public:
  FlyWithWings();
  ~FlyWithWings();
  void fly() override;
};

#endif /* __FLY_WITH_WINGS_H__ */