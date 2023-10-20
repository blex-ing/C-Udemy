#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  s1; // empty
    s1 = "C++ Rocks!";

    string s2 {"Hello"};

    s2 = s1;

    // create a 2 string varibles
    string  part1 {"C++"};
    string  part2 {"is a powerful"};
    string  sentence;

    sentence = part1 + " " + part2 + " language";
    cout << sentence << endl;

    for (char i : sentence)
    {
        cout << i << endl;
    }
    
    
    return (0);
}