#define BOOST_TEST_MAIN

#define BOOST_TEST_MODULE dog_factory
#include <boost/test/unit_test.hpp>

#include "public/dog_factory.hpp"
#include "public/dog.hpp"

using namespace my_examples;

BOOST_AUTO_TEST_SUITE(DogFactoryTest)

BOOST_AUTO_TEST_CASE(testing_factory_creation) {

  DogFactory dog_factory;

  std::unique_ptr<Dog> dog_collie = dog_factory.create(DOG_TYPE::COLLIE);

  BOOST_CHECK(dog_collie->getType() == DOG_TYPE::COLLIE);
}


BOOST_AUTO_TEST_SUITE_END()


