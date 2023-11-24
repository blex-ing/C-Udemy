#include "../include/bank.h"
#include <string>

// Implementation of Bank class
Bank::Bank(std::string name, double balance) {
    this->name = name;
    this->balance = balance;
}

std::string Bank::getName() {
    return this->name;
}

double Bank::getBalance() {
    return this->balance;
}

void Bank::deposit(double amount) {
    this->balance += amount;
}

bool Bank::withdraw(double amount) {
    if (amount > this->balance) {
        return false;
    }
    this->balance -= amount;
    return true;
}

// Implementation of SavingsBank class
SavingsBank::SavingsBank(std::string name, double balance, double interestRate) : Bank(name, balance) {
    this->interestRate = interestRate;
}

double SavingsBank::getInterestRate() {
    return this->interestRate;
}

void SavingsBank::addInterest() {
    this->balance += this->balance * this->interestRate;
}