#include "Account.h"

// Account::Account(std::string n, double b) : name{n}, balance{b} {}

// Account::~Account() {}

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (balance-amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}
