#include <iostream>
#include "My_string.h"
#include <vector>

using namespace std;

int main() 
{
    My_string a {"Hello"};
    My_string b;
    
    b = a;
    b = "This is a test";
    a.display();
    b.display();
    std::cout << "===============" << std::endl;
    vector <My_string> stooges;
    stooges.push_back("Larry");
    stooges.push_back("Moe");
    stooges.push_back("Curly");

    std::cout << "======loop=========" << std::endl;
    for (const My_string &s: stooges)
        s.display();
    My_string empty; // No-args constructor
    My_string larry("Larry"); // Overloaded constructor
    My_string stooge {larry}; // Copy constructor

    empty.display();
    larry.display();
    stooge.display();
    return (0);
}