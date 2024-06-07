#ifndef DOG_HPP
#define DOG_HPP
#pragma once

namespace my_examples {

  enum class DOG_TYPE {
    COLLIE,
    GERMAN_SHEPHERD 
  };

  class Dog {
  public:
      virtual ~Dog() = default;
      virtual const DOG_TYPE getType() const = 0;
      virtual void bark() const = 0;
  };

}
#endif // DOG_HPP

