#include <iostream>
#include "My_string.h"
#include <vector>

using namespace std;

int main() 
{
    My_string a {"Hello"};
    
    a = My_string {"Hola"};
    a.display();
    a = "Bonjour";
    a.display();
    
    // b = a;
    // b = "This is a test";
    // a.display();
    // b.display();
    // std::cout << "===============" << std::endl;
    // vector <My_string> stooges;
    // stooges.push_back("Larry");
    // stooges.push_back("Moe");
    // stooges.push_back("Curly");

    // std::cout << "======loop=========" << std::endl;
    // for (const My_string &s: stooges)
    //     s.display();
    My_string empty; // No-args constructor
    My_string larry("Larry"); // Overloaded constructor
    My_string stooge {larry}; // Copy constructor

    empty = stooge;     // Copy assignment operator
                        // stooge is an l-value
    empty = "Funny";    // Move assignment operator
                        // "Funny" is an r-value

    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    return (0);
}