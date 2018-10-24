
#if !defined(DP_ABSTRACT_FACTORY_FACTORY_PRODUCER_H)
#define DP_ABSTRACT_FACTORY_FACTORY_PRODUCER_H

#include "abstract_factory.hpp"

enum FactoryType { kShape, kColor };

class FactoryProducer {
 public:
  static AbstractFactory* getFactory(FactoryType factory_type);
};

#endif  // DP_ABSTRACT_FACTORY_FACTORY_PRODUCER_H
