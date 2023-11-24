#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"
#include <string>

class Bank {
public:
    Bank();
    ~Bank();

    void Bank::createAccount(std::string accountName);

    void addAccount(const Account& account);
    Account& getAccount(int index);
    int getNumAccounts() const;

    void Bank::deposit(std::string accountName, double amount);
    void Bank::withdraw(std::string accountName, double amount);
    double Bank::getBalance(std::string accountName);

private:
    std::vector<Account> accounts;
};

#endif // BANK_H