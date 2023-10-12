#ifndef __SHAPE_FACTORY_INTERFACES_H__
#define __SHAPE_FACTORY_INTERFACES_H__
#include "ShapeInterface.h"

/**
 * Shape Factory Interface
 *
 * Creator interface.
 *
 * The creator interface contains the implementation for all of the methods to
 * manipulate products except for the factory method.
 *
 */
class ShapeFactoryInterface {
public:
  virtual ~ShapeFactoryInterface() = default;

  virtual ShapeInterface *make_rectangle() = 0;
  virtual ShapeInterface *make_circle() = 0;

  virtual void remove_shape(ShapeInterface *shape) = 0;
};

#endif /*  __SHAPE_FACTORY_INTERFACES_H__ */