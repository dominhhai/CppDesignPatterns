#ifndef DP_FACTORY_SHAPE_FACTORY_H_
#define DP_FACTORY_SHAPE_FACTORY_H_

#include "shape.hpp"

enum ShapeType { kCircle, kRectangle, kSquare };

class ShapeFactory {
 public:
  static Shape *getShape(ShapeType shape_type);
};

#endif  // DP_FACTORY_SHAPE_FACTORY_H_