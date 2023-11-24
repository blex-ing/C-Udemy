#include "Trust_Account.h"
#include <string>
#include <iostream>

Trust_Account::Trust_Account(string name, double balance, double interest_rate)
    : Savings_Account{name, balance, interest_rate}, num_withdrawals{0} {
}

//Deposit additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold) {
        amount += bonus_amount;
    }
    return Savings_Account::deposit(amount);
}

// Only allowed maximum of 3 withdrawals, each can be up to a maximum of 20% of the account's value

bool Trust_Account::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || amount > (max_withdraw_percent * balance)) {
        return false;
    } else {
        ++num_withdrawals;
        return Savings_Account::withdraw(amount);
    }
}

ostream &operator<<(ostream &os, const Trust_Account &account) {
    os << "[Trust account: " << account.name <<" balance: " << account.balance << " Interest rate: " << account.interest_rate << "% Number of withdrawals: " << account.num_withdrawals << "]";
    return os;
}

