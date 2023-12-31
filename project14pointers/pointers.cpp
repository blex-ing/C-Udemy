#include <iostream>

int main() {
    int num = 10;
    int *ptr = &num;

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    *ptr = 20;

    std::cout << "Value of num after changing through pointer: " << num << std::endl;

    return 0;
}
