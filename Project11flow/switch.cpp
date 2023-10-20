#include <iostream>

using namespace std;

int main()
{
    cout << "Topc The switch statement" << endl;
    char    letter_grade {};

    cout << "Enter the letter expected on the exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'b':
    case 'B':
        cout << "Is okey" << endl;
        break;
    default:
        cout << "Sorry, not a valid grade";
        break;
    }
}