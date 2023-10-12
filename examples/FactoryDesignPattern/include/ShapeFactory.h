#ifndef __SHAPE_FACTORY_H__
#define __SHAPE_FACTORY_H__
#include "ShapeFactoryInterface.h"

/**
 *
 * Shape Factory
 *
 * Concrete Creator
 *
 * The concrete creator implements factory method that is responsible for
 * creating one or more concrete products.
 *
 * Factory Method is a creational design pattern that provides an interface for
 * creating objects in a superclass, but allows subclasses to alter the type of
 * objects that will be created.
 *
 * Pros:
 * 1. You avoid tight coupling between the creators and the concrete products.
 * 2. Single Responsibility Principle. You can move the product creation code
 *    into one place in the program, making the code easier to support.
 * 3. Open/Closed Principle. You can introduce new types of products into the
 *    program without changing the existing client code.
 *
 * Cons:
 * 1. The code may become more complicated since you need to introduce a lot of
 *    new subclasses to implement the pattern. The bes case scenario is when
 *    you're introducing the pattern into an existing hierarchy of creator
 *    classes.
 */
class ShapeFactory : public ShapeFactoryInterface {
public:
  ~ShapeFactory();
  /**
   * @brief Factory method to make a rectangle
   *
   * @return ShapeInterface*
   */
  ShapeInterface *make_rectangle() override;
  /**
   * @brief Factory method to make a circle
   *
   * @return ShapeInterface*
   */
  ShapeInterface *make_circle() override;
  /**
   * @brief Remove a specific shape
   *
   * @param shape
   */
  void remove_shape(ShapeInterface *shape) override;
};

#endif /* __SHAPE_FACTORY_H__ */