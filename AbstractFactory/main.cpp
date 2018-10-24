#include "factory_producer.hpp"

int main(int argc, char const* argv[]) {
  AbstractFactory* factory = nullptr;

  // shape
  factory = FactoryProducer::GetFactory(FactoryType::kShape);
  // shape - circle
  factory->GetShape(ShapeType::kCircle)->Draw();
  // shape - square
  factory->GetShape(ShapeType::kSquare)->Draw();
  // shape - rectangle
  factory->GetShape(ShapeType::kRectangle)->Draw();

  // color
  factory = FactoryProducer::GetFactory(FactoryType::kColor);
  // color - Red
  factory->GetColor(ColorType::kRed)->Fill();
  // color - Green
  factory->GetColor(ColorType::kGreen)->Fill();
  // color - Blue
  factory->GetColor(ColorType::kBlue)->Fill();

  return 0;
}
