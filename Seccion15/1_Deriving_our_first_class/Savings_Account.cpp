#include <iostream>
#include "Savings_Account.h"

using namespace std;

Savings_Account::Savings_Account()
{
}

Savings_Account::~Savings_Account() {
}

void Savings_Account::deposit(double amount) {
    cout << "Savings_Account::deposit called " << amount << endl;
}

void Savings_Account::withdraw(double amount) {
    cout << "Savings_Account::withdraw called " << amount << endl;
}
