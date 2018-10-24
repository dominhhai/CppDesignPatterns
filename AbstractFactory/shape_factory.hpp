
#if !defined(DP_ABSTRACT_FACTORY_SHAPE_FACTORY_H)
#define DP_ABSTRACT_FACTORY_SHAPE_FACTORY_H

#include "abstract_factory.hpp"

class ShapeFactory : public AbstractFactory {
 public:
  Shape* getShape(ShapeType shape_type) override;
  Color* getColor(ColorType color_tyype) override { return nullptr; };
};

#endif  // DP_ABSTRACT_FACTORY_SHAPE_FACTORY_H
