#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( vector<string> *v);
void display(int *array, int sentinel);

int main()
{
    cout << "-------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges); // Larry Moe Curly

    cout << "\n-------------------------" << endl;
    int scores [] {100, 95, 89, 68, -1};
    display(scores, -1); // 100 95 89 68
    
    return (0);
}

void display( vector<string> *v)
{
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}
