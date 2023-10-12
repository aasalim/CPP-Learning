#ifndef __SHAPE_INTERFACE_H__
#define __SHAPE_INTERFACE_H__

/**
 * Shape interface.
 *
 * This is also called the product interface. The product interface implements
 * the same interface so that the classes can refer to the interface not the
 * concrete product.
 *
 */
class ShapeInterface {
public:
  virtual ~ShapeInterface() = default;
  virtual void draw() = 0;
};

#endif /* __SHAPE_INTERFACE_H__ */