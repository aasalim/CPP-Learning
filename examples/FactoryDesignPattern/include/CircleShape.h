#ifndef __CIRCLE_SHAPE_H__
#define __CIRCLE_SHAPE_H__
#include "ShapeInterface.h"

/**
 * Circle Shape
 *
 * This defines a concrete product that implements the ShapeInterface.
 *
 */
class CircleShape : public ShapeInterface {
public:
  ~CircleShape();
  void draw() override;
};

#endif /* __CIRCLE_SHAPE__ */