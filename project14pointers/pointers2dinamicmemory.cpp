#include <iostream>
#include <string>
#include <vector>


using namespace std;
int main()
{
    int *int_ptr {nullptr};
    int_ptr = new int; // allocate an integer on the heap
    cout << int_ptr << endl; // 0x55e2b8c1c260
    delete int_ptr; // free the storage

    // 
    int *int_ptr1 {nullptr};
    int_ptr1 = new int; // allocate an integer on the heap
    cout << int_ptr1 << endl; // 0x55e2b8c1c260
    delete int_ptr1; // free the storage

    size_t  size {0};
    double  *temp_ptr {nullptr};
    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size]; // allocate storage on the heap for size doubles
    cout << temp_ptr << endl; // 0x55e2b8c1c260
    delete [] temp_ptr; // free the storage

}