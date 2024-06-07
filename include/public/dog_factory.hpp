#ifndef DOG_FACTORY_HPP
#define DOG_FACTORY_HPP
#pragma once

#include "dog.hpp"
#include <memory>

namespace my_examples {

  class DogFactory {
    public:
      std::unique_ptr<Dog> create(const DOG_TYPE) const;
  };

}
#endif // DOG_FACTORY_HPP

