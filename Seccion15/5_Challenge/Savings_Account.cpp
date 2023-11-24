#include <iostream>
#include "Savings_Account.h"

using namespace std;

Savings_Account::Savings_Account(string name, double balance, double interest_rate) 
    : Account(name, balance), interest_rate{interest_rate}
{
}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * interest_rate/100)
//      and then the updated amount will be deposited
//

bool Savings_Account::deposit(double amount) {
    cout << "Savings_Account::deposit called " << amount << endl;
    amount = amount + (amount * (interest_rate/100));
    return (Account::deposit(amount));
}

ostream &operator<<(ostream &os, const Savings_Account &account) {
    os << "[Savings account: " << account.name <<" balance: " << account.balance << " Interest rate: " << account.interest_rate << "%]";
    return os;
}
