#ifndef __MUTE_QUACK_H__
#define __MUTE_QUACK_H__
#include "QuackBehaviorInterface.h"
/**
 * Quack.
 *
 */
class MuteQuack : public QuackBehaviorInterface {
public:
  MuteQuack();
  ~MuteQuack();
  void quack() override;
};

#endif /* __MUTE_QUACK_H__ */