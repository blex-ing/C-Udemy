#include <iostream>
#include "Savings_Account.h"

using namespace std;

Savings_Account::Savings_Account(double balance, double interest_rate) 
    : Account(balance), interest_rate{interest_rate}
{
}

Savings_Account::Savings_Account() : Savings_Account{0.0, 0.0} {
}

// Destructor
Savings_Account::~Savings_Account() {
}

void Savings_Account::deposit(double amount) {
    cout << "Savings_Account::deposit called " << amount << endl;
    amount = amount + (amount * (interest_rate/100));
    Account::deposit(amount);
}

ostream &operator<<(ostream &os, const Savings_Account &account) {
    os << "Savings account balance: " << account.balance << " Interest rate: " << account.interest_rate;
    return os;
}
