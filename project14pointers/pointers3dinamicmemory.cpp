#include <iostream>
#include <string>
#include <vector>


using namespace std;
int main()
{
    int scores [] {100, 95, 89};
    int *score_ptr {scores}; // points to the first element of the array scores

    cout << score_ptr << endl; // 0x7fffbf7d5b80
    cout << *score_ptr << endl; // 100
    cout << (score_ptr + 1) << endl; // 95
    cout << *(score_ptr + 1) << endl; // 95

    //types of notation
    cout << "\nArray subscript notation----------" << endl;
    cout << scores[0] << endl; // 100
    cout << scores[1] << endl; // 95
    cout << scores[2] << endl; // 89

    cout << "\nPointer subscript notation----------" << endl;
    cout << *score_ptr << endl; // 100
    cout << *(score_ptr + 1) << endl; // 95
    cout << *(score_ptr + 2) << endl; //89

    cout << "\nArray offset notation----------" << endl;
    cout << *scores << endl; // 100
    cout << *(scores + 1) << endl; // 95
    cout << *(scores + 2) << endl; // 89

    cout << endl;
    return (0);

}