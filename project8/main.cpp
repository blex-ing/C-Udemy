#include <iostream>

using namespace std;
int main() 
{
    int n, m, a[105][105], b[105];
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cout << "\nValores del array a: " << i << "--> " << a[m][i] << endl;
    }
    return (0);
}