#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string  s1; // empty
    string  s2 {"Michael"}; //name
    string  s3 {s2};    // s2:name
    string  s4 {"Michael", 3};   // Mic
    string  s5 {s3, 0, 2};  //Mi
    string  s6 (3, 'X');    // XXX

    //print all string
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;
    cout << "s6 = " << s6 << endl;
    return (0);
}