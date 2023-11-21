#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived : public Base {
    // Declare member variables and functions specific to the Derived class
    public:
        void say_hello() const {
            std::cout << "Hello, I'm Derived class" << std::endl;
        }
};

#endif // DERIVED_H