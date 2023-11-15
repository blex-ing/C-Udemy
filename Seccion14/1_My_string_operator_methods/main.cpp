#include <iostream>
#include "My_string.h"
#include <vector>

using namespace std;

int main() 
{
    My_string larry{"Larry"};
    My_string moe{"Moe"};

    My_string stooge = larry;
    larry.display();
    moe.display();

    cout << "==========" << endl;
    cout << (larry == moe) << endl;

    moe = larry + " asdsd";
    moe.display();
    return (0);
}
