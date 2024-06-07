
#include "public/dog.hpp"
#include "collie.hpp"
#include <iostream>

namespace my_examples {

void Collie::bark() const {
  std::cout << "Ruuf, Ruuf." << std::endl;
}

const DOG_TYPE Collie::getType() const {
  return DOG_TYPE::COLLIE;
}

}
