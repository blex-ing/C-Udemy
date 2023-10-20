#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  s1;
    cin >> s1;

    cout << s1 << endl;
    getline(cin, s1); // Read entire line until \name
    cout << s1 << endl;

    getline(cin, s1, 'x'); // This isx
    cout << s1 << endl; // This is
    
    return (0);
}