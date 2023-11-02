#include <iostream>

using namespace std;

void double_data(int *int_ptr);

int main()
{
    int value (10);
    int *int_ptr {nullptr};

    cout << "Value: " << value << endl; // 10
    double_data(&value);
    cout << "Value: " << value << endl; // 20

    cout << "\n-------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl; // 40

    return (0);
}

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}