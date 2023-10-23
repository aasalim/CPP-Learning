#ifndef __QUACK_BEHAVIOR_INTERFACE_H__
#define __QUACK_BEHAVIOR_INTERFACE_H__

/**
 * Quack Behavior interface.
 *
 */
class QuackBehaviorInterface {
public:
  virtual ~QuackBehaviorInterface() = default;
  virtual void quack() = 0;
};

#endif /* __QUACK_BEHAVIOR_INTERFACE_H__ */