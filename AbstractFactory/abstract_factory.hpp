#ifndef DP_ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_
#define DP_ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_

#include "color.hpp"
#include "shape.hpp"

enum ShapeType { kCircle, kSquare, kRectangle };
enum ColorType { kRed, kGreen, kBlue };

class AbstractFactory {
 public:
  virtual Shape* getShape(ShapeType shape_type) = 0;
  virtual Color* getColor(ColorType color_type) = 0;
};

#endif  // DP_ABSTRACT_FACTORY_ABSTRACT_FACTORY_H_