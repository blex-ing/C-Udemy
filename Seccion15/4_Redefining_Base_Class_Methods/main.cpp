#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main() {
    // Create an Account object and test its methods
    Account acc{1000};
    cout << acc << endl;
    // cout << "Account balance before deposit: " << acc.get_balance() << endl;
    acc.deposit(500.0);
    cout << acc << endl;
    // cout << "Account balance after deposit: " << acc.get_balance() << endl;
    acc.withdraw(200.0);
    cout << acc << endl;
    acc.withdraw(1500.0);
    cout << acc << endl;
    // cout << "Account balance after withdrawal: " << acc.get_balance() << endl;
    cout << endl;

    // create a pointer to Account *p_acc{}; and test its methods
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    cout << "\n === Savings Account =========================" << endl;
    Savings_Account sav_acc{100, 5.0};
    cout << sav_acc << endl;
    sav_acc.deposit(2000.0);
    cout << sav_acc << endl;
    sav_acc.withdraw(500.0);
    cout << sav_acc << endl;
    return 0;
}
