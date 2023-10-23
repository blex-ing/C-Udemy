#include <iostream>
#include <string>
#include <vector>
using namespace std;

void    swap(int &a, int &b);
void    swapfake(int a, int b);
void    print_vector(const vector<int> &v);
int main()
{
    int x {10};
    int y {20};
    int x1 {10};
    int y1 {20};
    vector<int> data {1, 2, 3, 4, 5};

    cout << "x: " << x << " y: " << y << endl;
    swap(x, y);
    cout << "x: " << x << " y: " << y << endl;
    cout << "-------------------------" << endl;
    cout << "x: " << x1 << " y: " << y1 << endl;
    swapfake(x1, y1);
    cout << "x: " << x1 << " y: " << y1 << endl;
    cout << "-------------------------" << endl;
    print_vector(data);
    return (0);

}

void    swap(int &a, int &b)
{
    int temp {a};
    a = b;
    b = temp;
}
void    swapfake(int a, int b)
{
    int temp {a};
    a = b;
    b = temp;
}

void    print_vector(const vector<int> &v)
{
    for (auto num: v)
        cout << num << endl;
}