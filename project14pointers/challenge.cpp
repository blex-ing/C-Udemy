#include <iostream>

using namespace std;

void ft_print(const int *const is_array, size_t size);
int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2);
int *apply_all_w(const int *const array1, size_t size1, const int *const array2, size_t size2);

int main()
{
    int array1 [] {1, 2, 3, 4, 5};
    int arry2 [] {10, 20, 30};
    int *result {nullptr};
    int *result2 {nullptr};

    cout << "Array 1: " << endl;
    ft_print(array1, 5);

    cout << "Array 2: " << endl;
    ft_print(arry2, 3);

    result = apply_all(array1, 5, arry2, 3);
    cout << "Result: " << endl;
    ft_print(result, 15);

    cout << "-------------------------" << endl;
    result2 = apply_all_w(array1, 5, arry2, 3);

    cout << "Result 2: " << endl;
    ft_print(result2, 15);

    
}

void ft_print(const int *const is_array, size_t size)
{
    cout << "[ ";
    for(int i = 0; i < size; i++)
        cout << is_array[i] << " ";
    cout << "]" << endl;
}

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2)
{
    int *result {nullptr};
    result = new int[size1 * size2];

    for (size_t i = 0; i < size2; i++)
    {
        for (size_t j = 0; j < size1; j++)
        {
            result[i * size1 + j] = array2[i] * array1[j];
        }
        
    }

    return (result);
    

}

int *apply_all_w(const int *const array1, size_t size1, const int *const array2, size_t size2)
{
    int *result {nullptr};
    size_t i {0};
    result = new int[size1 * size2];
    while (i < size2)
    {
        size_t j {0};
        while (j < size1)
        {
            result[i * size1 + j] = *(array2 + i) * *(array1+ j);
            // cout << result[i * size1 + j] << endl;
            j++;
        }
        i++;  
    }
    return (result);
}