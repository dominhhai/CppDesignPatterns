#include <iostream>
#include "shape_factory.hpp"
#include "shape.hpp"

int main(int argc, char const *argv[])
{
  // circle
  Shape *shape = ShapeFactory::getShape(ShapeType::kCircle);
  shape->draw();

  // rectangle
  shape = ShapeFactory::getShape(ShapeType::kRectangle);
  shape->draw();

  // square
  shape = ShapeFactory::getShape(ShapeType::kSquare);
  shape->draw();

  shape = ShapeFactory::getShape((ShapeType)1000);
  if (shape == nullptr)
    std::cout << "..... Null Shape ....." << std::endl;

  return 0;
}
