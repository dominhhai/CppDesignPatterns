#include <iostream>
#include "shape.hpp"
#include "shape_factory.hpp"

int main(int argc, char const *argv[]) {
  Shape *shape = nullptr;

  // circle
  shape = ShapeFactory::getShape(ShapeType::kCircle);
  shape->draw();

  // rectangle
  shape = ShapeFactory::getShape(ShapeType::kRectangle);
  shape->draw();

  // square
  shape = ShapeFactory::getShape(ShapeType::kSquare);
  shape->draw();

  shape = ShapeFactory::getShape((ShapeType)1000);
  if (shape == nullptr) std::cout << "..... Null Shape ....." << std::endl;

  return 0;
}
