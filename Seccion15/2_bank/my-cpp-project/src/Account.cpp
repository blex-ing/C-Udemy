#include "../include/Account.h"

Account::Account(int id, double initialBalance) {
    this->id = id;
    this->balance = initialBalance;
}

void Account::deposit(double amount) {
    this->balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > this->balance) {
        return false;
    } else {
        this->balance -= amount;
        return true;
    }
}

double Account::getBalance() const {
    return this->balance;
}

int Account::getId() const {
    return this->id;
}