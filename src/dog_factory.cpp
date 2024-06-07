
#include "public/dog_factory.hpp"
#include "public/dog.hpp"
#include "dogs/collie.hpp"
#include <memory>

namespace my_examples {

  std::unique_ptr<Dog> DogFactory::create(const DOG_TYPE dog_type) const {

    if (dog_type == DOG_TYPE::COLLIE) {
      return std::make_unique<Collie>();
    }

    return nullptr;
  }

}
