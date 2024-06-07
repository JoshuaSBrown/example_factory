#ifndef COLLIE_HPP
#define COLLIE_HPP 
#pragma once

#include "public/dog.hpp"

namespace my_examples {
  class Collie : public Dog {
  public:
      const DOG_TYPE getType() const override; 
      void bark() const override; 
  };
}

#endif // COLLIE_HPP 

