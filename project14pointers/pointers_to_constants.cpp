#include <iostream>

using namespace std;

int main()
{
    int high_score {100};
    int low_score {65};

    const int *score_ptr {&high_score}; // score_ptr points to a constant integer

    cout << *score_ptr << endl; // 100
    // *score_ptr = 86; // error
    score_ptr = &low_score; // ok

    cout << *score_ptr << endl; // 65

    cout << "\n-------------------------" << endl;
    int *const score_ptr1 {&high_score}; // score_ptr points to an integer that is constant
    cout << *score_ptr1 << endl; // 100
    *score_ptr1 = 86; // ok
    // score_ptr1 = &low_score; // error

    cout << *score_ptr1 << endl; // 86

    cout << "\n-------------------------" << endl;
    const int *const score_ptr2 {&high_score}; // score_ptr points to a constant integer that is constant
    cout << *score_ptr2 << endl; // 86
    // *score_ptr2 = 86; // error
    // score_ptr2 = &low_score; // error
    

    return (0);
}