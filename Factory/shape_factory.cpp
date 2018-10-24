#include "shape_factory.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "square.hpp"

Shape *ShapeFactory::getShape(ShapeType shape_type) {
  
  switch (shape_type)
  {
    case ShapeType::kCircle:
      return new Circle;
  
    case ShapeType::kRectangle:
      return new Rectangle;

    case ShapeType::kSquare:
      return new Square;

    default:
      return nullptr;
  }
}