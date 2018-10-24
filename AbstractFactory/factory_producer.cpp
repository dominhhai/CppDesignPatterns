#include "factory_producer.hpp"
#include "color_factory.hpp"
#include "shape_factory.hpp"

AbstractFactory* FactoryProducer::getFactory(FactoryType factory_type) {
  switch (factory_type) {
    case FactoryType::kShape:
      return new ShapeFactory();

    case FactoryType::kColor:
      return new ColorFactory();

    default:
      return nullptr;
  }
}