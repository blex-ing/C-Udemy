#include <iostream>

using namespace std;

int main()
{
    int scores [] {100, 95, 89, 68, -1};
    int *score_ptr {scores}; // points to the first element of the array scores

    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n-------------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl;
    
    return (0);
    
}