#include <iostream>
#include <string>
using namespace std;

// cabezera de funciones
int add_numbers(int a, int b);
double add_numbers(double a, double b);
void    print_array(int arr[]);
int main ()
{
    cout << "sum: " << add_numbers(9, 5) << endl;
    cout << "\nsum: " << add_numbers(1.5, 4.5) << endl;

    int my_scores [3] {100, 98, 90};

     cout << "\nSize in main:" << (sizeof(my_scores)/sizeof(my_scores[0])) << endl;


    print_array(my_scores);
    return (0);
}

int add_numbers(int a, int b)
{
    return (a + b);
}

double add_numbers(double a, double b)
{
    return (a + b);
}

void    print_array(int *arr)
{
    int cont {0};
    cout << "\nSize of arr : " << (sizeof(arr)/sizeof(arr[0])) << endl;

    while (cont <= (sizeof(arr) / sizeof(arr[0]))) 
    {
        cout << arr[cont] << endl;
        cont++;
    }
}