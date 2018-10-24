#include "factory_producer.hpp"

int main(int argc, char const* argv[]) {
  AbstractFactory* factory = nullptr;

  // shape
  factory = FactoryProducer::getFactory(FactoryType::kShape);
  // shape - circle
  factory->getShape(ShapeType::kCircle)->draw();
  // shape - square
  factory->getShape(ShapeType::kSquare)->draw();
  // shape - rectangle
  factory->getShape(ShapeType::kRectangle)->draw();

  // color
  factory = FactoryProducer::getFactory(FactoryType::kColor);
  // color - Red
  factory->getColor(ColorType::kRed)->fill();
  // color - Green
  factory->getColor(ColorType::kGreen)->fill();
  // color - Blue
  factory->getColor(ColorType::kBlue)->fill();

  return 0;
}
