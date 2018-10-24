
#if !defined(DP_ABSTRACT_FACTORY_RECTANGLE_H)
#define DP_ABSTRACT_FACTORY_RECTANGLE_H

#include "shape.hpp"

class Rectangle : public Shape {
 public:
  void Draw() override;
};

#endif  // DP_ABSTRACT_FACTORY_RECTANGLE_H
