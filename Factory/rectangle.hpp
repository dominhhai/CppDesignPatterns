#ifndef DP_FACTORY_RECTANGLE_H_
#define DP_FACTORY_RECTANGLE_H_

#include "shape.hpp"

class Rectangle : public Shape {
 public:
  void draw() override;
};

#endif  // DP_FACTORY_RECTANGLE_H_