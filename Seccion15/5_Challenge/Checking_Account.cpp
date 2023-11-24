#include "Checking_Account.h"
#include "Account.h"
#include <iostream>

Checking_Account::Checking_Account(string name, double balance)
    : Account{name, balance} {
}

bool Checking_Account::withdraw(double amount) {
    cout << "Checking_Account::withdraw called " << amount << endl;
    amount = amount + this->def_fee;
    return Account::withdraw(amount);
}

ostream &operator<<(ostream &os, const Checking_Account &account) {
    os << "[Checking account: " << account.name <<" balance: " << account.balance << " def_fee: " << account.def_fee << "]";
    return os;
}