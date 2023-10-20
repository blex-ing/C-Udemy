#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter an amount in cents: ";
    int amountInCents {0};
    cin >> amountInCents;

    int r {0};
    int cont {0};
    int div {0};
    const vector <int> dollar{100, 25, 10, 5, 1};
    const vector <string> str_dollar{"dollars", "quarters", "dimes", "nickels", "pennies"};

    r = amountInCents;

    while (cont < dollar.size())
    {
        div = r / dollar.at(cont);
        r = r % dollar.at(cont);
        cout << str_dollar.at(cont) << " : " << div << endl;
        cont++;
    }
    return (0);
}