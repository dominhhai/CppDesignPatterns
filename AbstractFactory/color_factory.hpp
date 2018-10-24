
#if !defined(DP_ABSTRACT_FACTORY_COLOR_FACTORY_H)
#define DP_ABSTRACT_FACTORY_COLOR_FACTORY_H

#include "abstract_factory.hpp"

class ColorFactory : public AbstractFactory {
 public:
  Color* getColor(ColorType color_type) override;
  Shape* getShape(ShapeType shape_type) override { return nullptr; };
};

#endif  // DP_ABSTRACT_FACTORY_COLOR_FACTORY_H
