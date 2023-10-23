#ifndef __FLY_BEHAVIOR_INTERFACE_H__
#define __FLY_BEHAVIOR_INTERFACE_H__

/**
 * Fly Behavior interface.
 *
 */
class FlyBehaviorInterface {
public:
  virtual ~FlyBehaviorInterface() = default;
  virtual void fly() = 0;
};

#endif /* __FLY_BEHAVIOR_INTERFACE_H__ */