#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"
#include <string>

using namespace std;

class Checking_Account : public Account
{
    friend ostream &operator<<(ostream &os, const Checking_Account &account);
private:
    /* data */
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_fee = 1.50;
public:
    Checking_Account(string name = def_name, double balance = def_balance);
    bool withdraw(double);
    // Inherits the Account::deposit methods
};



#endif // CHECKING_ACCOUNT_H