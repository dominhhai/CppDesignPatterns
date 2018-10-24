#include <cassert>
#include "single_object.hpp"

int main(int argc, char const* argv[]) {
  SingleObject* instance_1 = SingleObject::GetInstance();
  instance_1->SayHi();

  SingleObject* instance_2 = SingleObject::GetInstance();
  instance_2->SayHi();

  assert(instance_1 == instance_2);

  return 0;
}
