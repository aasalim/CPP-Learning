#ifndef __STATE_INTERFACE_H__
#define __STATE_INTERFACE_H__
/**
 * State interface.
 *
 */
class StateInterface {
public:
  virtual ~StateInterface() = default;
  virtual void vInsertQuarter()=0;
  virtual void vEjectQuarter()=0;
  virtual void vTurnCrank()=0;
  virtual void vDispense()=0;
  virtual void vToString()=0;
};

#endif /* __STATE_INTERFACE_H__ */