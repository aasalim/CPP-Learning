#include "ShapeFactory.h"
#include <stdio.h>

/**
 * @brief main application entry point.
 *
 */
int main(void) {
  /* create a shape factory */
  ShapeFactory *shapeFactory = new ShapeFactory();
  /* make shapes */
  ShapeInterface *rectangleShape = shapeFactory->make_rectangle();
  ShapeInterface *circleShape = shapeFactory->make_circle();
  /* draw shapes */
  rectangleShape->draw();
  circleShape->draw();
  /* remove shapes */
  shapeFactory->remove_shape(rectangleShape);
  shapeFactory->remove_shape(circleShape);
  delete shapeFactory;
  return 0;
}