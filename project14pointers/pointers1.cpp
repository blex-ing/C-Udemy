#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* ptr = &x;

    cout << "The value of x is: " << x << endl;
    cout << "The address of x is: " << &x << endl;
    cout << "The value of ptr is: " << ptr << endl;
    cout << "The value that ptr points to is: " << *ptr << endl;

    *ptr = 10;

    cout << "The new value of x is: " << x << endl;

    int *ptr2;
    cout << "The value of ptr2 is: " << ptr2 << endl; // garbage value
    cout << "The address of ptr2 is: " << &ptr2 << endl; // garbage valu
    cout << "sizeof ptr2 is : " << sizeof(ptr2) << endl; // 8 bytes

    ptr2 = nullptr;
    cout << "The value of ptr2 is: " << ptr2 << endl; // 0

    return 0;
}
