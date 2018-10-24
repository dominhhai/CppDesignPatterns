#include "color_factory.hpp"
#include "blue.hpp"
#include "green.hpp"
#include "red.hpp"

Color* ColorFactory::getColor(ColorType color_type) {
  switch (color_type) {
    case ColorType::kRed:
      return new Red();

    case ColorType::kGreen:
      return new Green();

    case ColorType::kBlue:
      return new Blue();

    default:
      return nullptr;
  }
}