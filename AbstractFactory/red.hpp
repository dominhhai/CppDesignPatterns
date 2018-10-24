
#if !defined(DP_ABSTRACT_FACTORY_RED_H)
#define DP_ABSTRACT_FACTORY_RED_H

#include "color.hpp"

class Red : public Color {
 public:
  void Fill() override;
};

#endif  // DP_ABSTRACT_FACTORY_RED_H
