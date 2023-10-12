#include "CircleShape.h"

#include <iostream>
CircleShape::~CircleShape() { std::cout << "~CircleShape()" << std::endl; }
void CircleShape::draw() { std::cout << "Drawing a circle shape" << std::endl; }