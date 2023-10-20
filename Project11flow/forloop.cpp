#include <iostream>
#include <vector>

using namespace std;

int main()
{
    for (size_t i {}; i <= 10; i++)
    {
        cout << "num: " << i << endl;
    }
    
    cout << "\nReverse " << endl;
    for (size_t i {10}; i > 0; i--)
    {
        cout << "num: " << i << endl;
    }

    cout << "\nprint pair " << endl;
     for (size_t i {2}; i <= 10; i+=2)
    {
        cout << "num: " << i << endl;
    }

    cout << "\nloop x an y" << endl;

    for (int i {0}, j {0}; i < 10; i++, ++j)
    {
        cout << "mult " << i << " x " << j << " = " << (i*j) <<endl;
    }

    vector<int> nums {11, 22, 33, 44, 55};

    for (int i : nums)
    {
        cout << i << ((i % 2) ? " \n" : "-");
    }
    
     for (int i : nums)
    {
        cout << i << ":" << ((i % 2 == 0) ? " par" : "impar") << endl;
    }

    int count {};
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};

    for (int i : vec)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            count++;
            cout << "\ti : " << i;
        }
    }
    return (0);
} 
