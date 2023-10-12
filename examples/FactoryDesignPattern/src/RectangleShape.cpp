#include "RectangleShape.h"

#include <iostream>

RectangleShape::~RectangleShape() {
  std::cout << "~RectangleShape()" << std::endl;
}
void RectangleShape::draw() {
  std::cout << "Drawing a rectangle shape" << std::endl;
}