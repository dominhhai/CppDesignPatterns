#include "single_object.hpp"
#include <iostream>

SingleObject* SingleObject::instance{nullptr};

SingleObject* SingleObject::GetInstance() {
  // static SingleObject* instance;
  if (!instance) {
    instance = new SingleObject();
  }

  return instance;
}

void SingleObject::SayHi() {
  std::cout << "Hello Singleton Pattern" << std::endl;
}
