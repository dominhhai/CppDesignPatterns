
#if !defined(DP_ABSTRACT_FACTORY_COLOR_FACTORY_H)
#define DP_ABSTRACT_FACTORY_COLOR_FACTORY_H

#include "abstract_factory.hpp"

class ColorFactory : public AbstractFactory {
 public:
  Color* GetColor(ColorType color_type) override;
  Shape* GetShape(ShapeType shape_type) override { return nullptr; };
};

#endif  // DP_ABSTRACT_FACTORY_COLOR_FACTORY_H
