#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"

class Savings_Account : public Account {
public:
    Savings_Account();
    ~Savings_Account();
    // Inherits the Account::deposit methods
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // _SAVINGS_ACCOUNT_H_
