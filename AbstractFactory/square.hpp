
#if !defined(DP_ABSTRACT_FACTORY_SQUARE_H_)
#define DP_ABSTRACT_FACTORY_SQUARE_H_

#include "shape.hpp"

class Square : public Shape {
 public:
  void draw() override;
};

#endif  // DP_ABSTRACT_FACTORY_SQUARE_H_
