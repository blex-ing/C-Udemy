#include <iostream>

using namespace std;

int main ()
{
    enum Direction 
    {
        left, right, up, down
    };

    Direction heading (left);
    switch (heading)
    {
    case left:
        cout << "going left" << endl;
        break;
    case right:
        cout << "going right" << endl;
        break;
    default:
        break;
    }
    cout << "end the program" << endl;
    return (0);
}