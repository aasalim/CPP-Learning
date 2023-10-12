#include "ShapeFactory.h"
#include "CircleShape.h"
#include "RectangleShape.h"

ShapeFactory::~ShapeFactory() {}
ShapeInterface *ShapeFactory::make_rectangle() { return new RectangleShape(); }

ShapeInterface *ShapeFactory::make_circle() { return new CircleShape(); }

void ShapeFactory::remove_shape(ShapeInterface *shape) { delete shape; }