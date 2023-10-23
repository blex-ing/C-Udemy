#include <iostream>
#include <string>
using namespace std;

void ft_print(int *arr, size_t size);
int main()
{
    int array1 [] {1, 2, 3, 4, 5};
    size_t tam {5};
    ft_print(array1, tam);
    return (0);
}
void ft_print(int *arr, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << "\n" << arr[i] << endl;
    }
}
