#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main() {
    // Create an Account object and test its methods
    Account acc{};
    // cout << "Account balance before deposit: " << acc.get_balance() << endl;
    acc.deposit(500.0);
    // cout << "Account balance after deposit: " << acc.get_balance() << endl;
    acc.withdraw(200.0);
    // cout << "Account balance after withdrawal: " << acc.get_balance() << endl;
    cout << endl;

    // create a pointer to Account *p_acc{}; and test its methods
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    // Create a Saving_Account object and test its methods
    // Savings_Account sav_acc{2000.0, 5.0};
    // cout << "Saving account balance before deposit: " << sav_acc.get_balance() << endl;
    // sav_acc.deposit(1000.0);
    // cout << "Saving account balance after deposit: " << sav_acc.get_balance() << endl;
    // sav_acc.withdraw(500.0);
    // cout << "Saving account balance after withdrawal: " << sav_acc.get_balance() << endl;
    // sav_acc.add_interest();
    // cout << "Saving account balance after adding interest: " << sav_acc.get_balance() << endl;

    return 0;
}
