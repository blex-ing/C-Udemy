#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers{};
    char selection {};

    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add number to the list" << endl;
        cout << "M - Display mean of numbers";
        cout << "S - Sort the list in ascending order" << endl;
        cout << "Q - Quit program" << endl;
        cout << "Enter your choice";
        cin >> selection;

        
    } while (selection != 'q' && selection != 'Q');

    return (0);

}