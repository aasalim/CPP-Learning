#ifndef __RECTANGLE_SHAPE_H__
#define __RECTANGLE_SHAPE_H__
#include "ShapeInterface.h"
/**
 * Rectangle Shape
 *
 * This defines a concrete product that implements the ShapeInterface.
 *
 */
class RectangleShape : public ShapeInterface {
public:
  ~RectangleShape();
  void draw() override;
};

#endif /* __RECTANGLE_SHAPE__ */