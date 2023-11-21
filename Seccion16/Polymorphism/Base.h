#ifndef BASE_H
#define BASE_H

#include <iostream>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello, I'm Base class" << std::endl;
        }
};

#endif // BASE_H
