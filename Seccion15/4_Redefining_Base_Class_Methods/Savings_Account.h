#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"

class Savings_Account : public Account {
    friend ostream &operator<<(ostream &os, const Savings_Account &account);
protected:
    double interest_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double interest_rate);
    ~Savings_Account();
    // Inherits the Account::deposit methods
    void deposit(double amount);
    // Inherits the Account::withdraw methods
};

#endif // _SAVINGS_ACCOUNT_H_
