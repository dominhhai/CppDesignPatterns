#include <iostream>
#include "shape.hpp"
#include "shape_factory.hpp"

int main(int argc, char const *argv[]) {
  Shape *shape = nullptr;

  // circle
  shape = ShapeFactory::GetShape(ShapeType::kCircle);
  shape->Draw();

  // rectangle
  shape = ShapeFactory::GetShape(ShapeType::kRectangle);
  shape->Draw();

  // square
  shape = ShapeFactory::GetShape(ShapeType::kSquare);
  shape->Draw();

  shape = ShapeFactory::GetShape((ShapeType)1000);
  if (shape == nullptr) std::cout << "..... Null Shape ....." << std::endl;

  return 0;
}
