#include <iostream>

class Base {
private:
        int value;
public:
    Base() : value{0} {
        std::cout << "Base no-arg constructor called" << std::endl;
    }
    Base(int x) : value{x} {
        std::cout << "Base (int) overloaded constructor called" << std::endl;
    }
    ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Derived : public Base {
    private:
        int doubled_value;
public:
    Derived() : Base {}, doubled_value {0} {
        std::cout << "Derived no-arg constructor called" << std::endl;
    }
    Derived(int x) : Base {x}, doubled_value {x * 2} {
        std::cout << "Derived (int) overloaded constructor called" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }
};

int main() {
    Derived d {1000};
    return 0;
}
