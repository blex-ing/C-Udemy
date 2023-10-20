#include <iostream>

using namespace std;
int main()
{
    int age {0};
    bool has_car {false};
    cout << "Enter your age: and if have you a car? ";
    cin >> age >> has_car;
    if ((age > 16) && (has_car))
    {
        cout << "You are eligible for the driving license.";
    }
    else if (age < 16)
    {
        cout << "You are not eligible for the driving license because you are under 16 years old";
    }
    else
    {
        cout << "Sorry, you need o buy a car before you can drive!";
    }
    return (0);
}
