#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"
#include <string>

using namespace std;

class Savings_Account : public Account {
    friend ostream &operator<<(ostream &os, const Savings_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double interest_rate;
public:
    Savings_Account(string name = def_name, double balance = def_balance, double interest_rate = def_int_rate);
    // Inherits the Account::deposit methods
    bool deposit(double amount);
    // Inherits the Account::withdraw methods
};

#endif // _SAVINGS_ACCOUNT_H_
